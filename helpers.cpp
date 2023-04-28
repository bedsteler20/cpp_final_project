#include <helpers.hpp>

// Prompt the user with a question
void ask(string question, int& val) {
    string tmp;
    printf("%s: ", question.c_str());
    getline(cin, tmp);
    val = stoi(tmp);
}

// Ask the user a yes or no question
void ask(string question, bool& val) {
    string tmp;
    printf("%s (y/n): ", question.c_str());
    getline(cin, tmp);
    if (tmp == "y" || tmp == "Y" || tmp == "yes" || tmp == "Yes") {
        val = true;
    } else if (tmp == "n" || tmp == "N" || tmp == "no" || tmp == "No") {
        val = false;
    } else {
        // if we get a invalid input try again
        printf("Invalid input\n");
        ask(question, val);
    }
}
// Ask the user for a string
void ask(string question, string& val) {
    printf("%s: ", question.c_str());
    getline(cin, val);
}

// Display a formatted string
void display(string label, string value) {
    cout << label << ": ";
    cout << value << endl;
}

// Display a formatted int
void display(string label, int val, string unit) {
    cout << label << ": ";
    cout << val << " " << unit << endl;
}