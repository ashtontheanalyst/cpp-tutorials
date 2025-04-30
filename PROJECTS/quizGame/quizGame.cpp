#include <iostream>

int main() {

    std::string questions[] = {"1. What year was C++ made?: ",
                               "2. Who invented C++?: ",
                               "3. Where did the creator of C++ teach at?: ",
                               "4. What language was C++ based on?: "};
    
    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                               {"A. Your mother", "B. Mark Zuckerburg", "C. Bjarne Sroustrup", "D. Paul Allen"},
                               {"A. Texas A&M", "B. MIT", "C. UC Berkley", "D. Dartmouth"},
                               {"A. Zig", "B. C", "C. Python", "D. Assembly"}};

    char answerKey[] = {'C', 'C', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++) {
        std::cout << "***********************************" << '\n';
        std::cout << questions[i] << '\n';
        std::cout << "***********************************" << '\n';

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++) {
            std::cout << options[i][j] << '\n';
        } std::cout << "\n";

        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i]) {
            std::cout << "CORRECT!\n\n";
            score++;
        }
        else {
            std::cout << "WRONG! The correct answer was: " << answerKey[i] << "\n\n";
        }
    }

    std::cout << "***********************************" << '\n';   
    std::cout << "****           RESULTS         ****" << '\n';
    std::cout << "***********************************" << '\n';
    std::cout << "CORRECT: " << score << "\n";
    std::cout << "# OF QUESTIONS: 4\n";
    std::cout << "***********************************" << '\n';

    return 0;
}