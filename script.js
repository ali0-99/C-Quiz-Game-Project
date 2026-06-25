const quizBank = [
    {q: "What is the capital of France?", o: ["Paris", "London", "Berlin", "Rome"], a: 0},
    {q: "Leonardo da Vinci is best known as?", o: ["Painter", "Scientist", "Inventor", "All of the above"], a: 3},
    {q: "Which planet is known as the Red Planet?", o: ["Earth", "Mars", "Jupiter", "Venus"], a: 1},
    {q: "Who wrote 'Hamlet'?", o: ["Shakespeare", "Milton", "Chaucer", "Wordsworth"], a: 0},
    {q: "What is the speed of light?", o: ["299,792 km/s", "150,000 km/s", "1,000 km/s", "3,000 km/s"], a: 0},
    {q: "Which gas do plants absorb during photosynthesis?", o: ["Oxygen", "Carbon Dioxide", "Nitrogen", "Hydrogen"], a: 1},
    {q: "Who developed the theory of relativity?", o: ["Newton", "Einstein", "Galileo", "Tesla"], a: 1},
    {q: "Which is the largest ocean?", o: ["Atlantic", "Indian", "Pacific", "Arctic"], a: 2},
    {q: "Which country invented paper?", o: ["Egypt", "China", "Greece", "India"], a: 1},
    {q: "Which element has the chemical symbol 'O'?", o: ["Oxygen", "Gold", "Silver", "Iron"], a: 0},
    {q: "Which is the smallest prime number?", o: ["1", "2", "3", "4"], a: 1},
    {q: "Which organ pumps blood in the human body?", o: ["Brain", "Heart", "Lungs", "Kidney"], a: 1},
    {q: "Which continent is called 'Dark Continent'?", o: ["Asia", "Africa", "Europe", "Australia"], a: 1},
    {q: "Which is the largest mammal?", o: ["Elephant", "Blue Whale", "Giraffe", "Hippopotamus"], a: 1},
    {q: "Which is the national flower of Pakistan?", o: ["Rose", "Jasmine", "Sunflower", "Lily"], a: 1},
    {q: "Which is the fastest land animal?", o: ["Tiger", "Cheetah", "Horse", "Lion"], a: 1},
    {q: "Which is the largest desert in the world?", o: ["Sahara", "Gobi", "Kalahari", "Antarctic"], a: 3},
    {q: "Which blood group is universal donor?", o: ["A", "B", "O negative", "AB positive"], a: 2},
    {q: "Which is the largest planet in our solar system?", o: ["Earth", "Jupiter", "Saturn", "Neptune"], a: 1},
    {q: "Which instrument measures atmospheric pressure?", o: ["Thermometer", "Barometer", "Hygrometer", "Altimeter"], a: 1}
];

let currentQuestionIndex = 0;
let score = 0;
let selectedOptionIndex = null;

// Function to switch from Welcome Screen to Quiz Screen
function startQuiz() {
    document.getElementById('welcome-box').style.display = 'none';
    document.getElementById('quiz-box').style.display = 'block';
    loadQuestion();
}

function loadQuestion() {
    selectedOptionIndex = null;
    document.getElementById('next-btn').innerText = "Submit Answer";
    
    if (currentQuestionIndex < quizBank.length) {
        const currentQuestion = quizBank[currentQuestionIndex];
        
        document.getElementById('question-text').innerText = `Q${currentQuestionIndex + 1}: ${currentQuestion.q}`;
        
        const container = document.getElementById('options-container');
        container.innerHTML = '';
        
        currentQuestion.o.forEach((option, index) => {
            const button = document.createElement('button');
            button.className = 'option-btn';
            button.innerText = option;
            button.onclick = () => selectOption(index, button);
            container.appendChild(button);
        });

        const progressPercent = (currentQuestionIndex / quizBank.length) * 100;
        document.getElementById('progress').style.width = `${progressPercent}%`;
    } else {
        showResults();
    }
}

function selectOption(index, element) {
    selectedOptionIndex = index;
    const buttons = document.querySelectorAll('.option-btn');
    buttons.forEach(btn => btn.classList.remove('selected'));
    element.classList.add('selected');
}

function submitAnswer() {
    if (selectedOptionIndex === null) {
        alert("Please select an option before proceeding!");
        return;
    }

    if (selectedOptionIndex === quizBank[currentQuestionIndex].a) {
        score++;
    }

    currentQuestionIndex++;
    loadQuestion();
}

function showResults() {
    document.getElementById('quiz-box').style.display = 'none';
    document.getElementById('result-box').style.display = 'block';
    
    document.getElementById('final-score').innerText = `You scored ${score} out of ${quizBank.length}`;
    const percentage = (score / quizBank.length) * 100;
    document.getElementById('final-percentage').innerText = `${percentage}% Matrix Performance`;
}

// Window load par sirf Welcome screen visible rakhne ka logic setup kiya hai
window.onload = function() {
    document.getElementById('welcome-box').style.display = 'block';
    document.getElementById('quiz-box').style.display = 'none';
    document.getElementById('result-box').style.display = 'none';
};