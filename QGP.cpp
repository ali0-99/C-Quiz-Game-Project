#include <iostream>
using namespace std;

int main() {
    int choice, score = 0;

    cout << "===== Welcome to the Quiz Game =====\n";
    cout << "You will be asked 20 MCQs.\n";
    cout << "Enter the option number (1-4).\n";

    // Loop for 20 questions
    for (int i = 1; i <= 20; i++) {
        cout << "\nQ" << i << ": ";
        switch (i) {
        case 1:
            cout << "What is the capital of France?\n";
            cout << "1. Paris\n2. London\n3. Berlin\n4. Rome\n";
            cin >> choice;
            if (choice == 1) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 2:
            cout << "Leonardo da Vinci is best known as?\n";
            cout << "1. Painter\n2. Scientist\n3. Inventor\n4. All of the above\n";
            cin >> choice;
            if (choice == 4) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 3:
            cout << "Which planet is known as the Red Planet?\n";
            cout << "1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n";
            cin >> choice;
            if (choice == 2) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 4:
            cout << "Who wrote 'Hamlet'?\n";
            cout << "1. Shakespeare\n2. Milton\n3. Chaucer\n4. Wordsworth\n";
            cin >> choice;
            if (choice == 1) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 5:
            cout << "What is the speed of light?\n";
            cout << "1. 299,792 km/s\n2. 150,000 km/s\n3. 1,000 km/s\n4. 3,000 km/s\n";
            cin >> choice;
            if (choice == 1) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 6:
            cout << "Which gas do plants absorb during photosynthesis?\n";
            cout << "1. Oxygen\n2. Carbon Dioxide\n3. Nitrogen\n4. Hydrogen\n";
            cin >> choice;
            if (choice == 2) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 7:
            cout << "Who developed the theory of relativity?\n";
            cout << "1. Newton\n2. Einstein\n3. Galileo\n4. Tesla\n";
            cin >> choice;
            if (choice == 2) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 8:
            cout << "Which is the largest ocean?\n";
            cout << "1. Atlantic\n2. Indian\n3. Pacific\n4. Arctic\n";
            cin >> choice;
            if (choice == 3) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 9:
            cout << "Which country invented paper?\n";
            cout << "1. Egypt\n2. China\n3. Greece\n4. India\n";
            cin >> choice;
            if (choice == 2) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 10:
            cout << "Which element has the chemical symbol 'O'?\n";
            cout << "1. Oxygen\n2. Gold\n3. Silver\n4. Iron\n";
            cin >> choice;
            if (choice == 1) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 11:
            cout << "Which is the smallest prime number?\n";
            cout << "1. 1\n2. 2\n3. 3\n4. 5\n";
            cin >> choice;
            if (choice == 2) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 12:
            cout << "Which organ pumps blood in the human body?\n";
            cout << "1. Brain\n2. Heart\n3. Lungs\n4. Kidney\n";
            cin >> choice;
            if (choice == 2) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 13:
            cout << "Which continent is called 'Dark Continent'?\n";
            cout << "1. Asia\n2. Africa\n3. Europe\n4. Australia\n";
            cin >> choice;
            if (choice == 2) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 14:
            cout << "Which is the largest mammal?\n";
            cout << "1. Elephant\n2. Blue Whale\n3. Giraffe\n4. Hippopotamus\n";
            cin >> choice;
            if (choice == 2) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 15:
            cout << "Which is the national flower of Pakistan?\n";
            cout << "1. Rose\n2. Jasmine\n3. Sunflower\n4. Lily\n";
            cin >> choice;
            if (choice == 2) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 16:
            cout << "Which is the fastest land animal?\n";
            cout << "1. Tiger\n2. Cheetah\n3. Horse\n4. Lion\n";
            cin >> choice;
            if (choice == 2) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 17:
            cout << "Which is the largest desert in the world?\n";
            cout << "1. Sahara\n2. Gobi\n3. Kalahari\n4. Antarctic\n";
            cin >> choice;
            if (choice == 4) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 18:
            cout << "Which blood group is universal donor?\n";
            cout << "1. A\n2. B\n3. O negative\n4. AB positive\n";
            cin >> choice;
            if (choice == 3) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 19:
            cout << "Which is the largest planet in our solar system?\n";
            cout << "1. Earth\n2. Jupiter\n3. Saturn\n4. Neptune\n";
            cin >> choice;
            if (choice == 2) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;

        case 20:
            cout << "Which instrument measures atmospheric pressure?\n";
            cout << "1. Thermometer\n2. Barometer\n3. Hygrometer\n4. Altimeter\n";
            cin >> choice;
            if (choice == 2) { cout << "Correct!\n"; score++; }
            else cout << "Wrong!\n";
            break;
        }
    }

    cout << "\n===== Quiz Finished =====\n";
    cout << "Your final score: " << score << " out of 20\n";

    return 0;
}
