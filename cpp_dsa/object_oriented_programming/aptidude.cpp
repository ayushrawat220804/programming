#include <iostream>
using namespace std;

int main() {
    cout << "A PROGRAMME RELATED TO APTITUDE IN CODING . . ." << endl;
    cout << "Question 1:\n";
    cout << "#include <iostream>\nusing namespace std;\nint main() {\n  int x = 5;\n  cout << x++ + ++x;\n  return 0;\n}" << endl;
    cout << "What will be the output?\n";
    cout << "Press a for 11\nPress b for 12\nPress c for 10\nPress d for none of the above or press ctrl + c to exit" << endl;

    char x;

    while (true) {
            cout << "Yes, the output is correct: 12" << endl;
            break;
        } else if (x == 'a' || x == 'A' || x == 'c' || x == 'C' || x == 'd' || x == 'D') {
            cout << "No, the output is wrong. Try again..." << endl;
        } else {
            cout << "Invalid input! Please enter a, b, c, or d." << endl;
        }
    }

    return 0;
}
