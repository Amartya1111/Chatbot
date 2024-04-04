#include <iostream.h>
#include <string>
#include <algorithm>

using namespace std;

// Function to convert input to lowercase for easier matching
string toLowercase(string input) {
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    return input;
}

// Function to get user input and respond
void chatbot() {
    while (true) {
        cout << "You: ";
        string user_input;
        getline(cin, user_input);
        user_input = toLowercase(user_input);  // Convert input to lowercase
        
        // Check if the user input matches any predefined query
        if (user_input == "hi") {
            cout << "Chatbot: Hello!" << endl;
        } else if (user_input == "hello") {
            cout << "Chatbot: Hi there!" << endl;
        } else if (user_input == "how are you?") {
            cout << "Chatbot: I'm doing well, thank you." << endl;
        } else if (user_input == "what's your name?") {
            cout << "Chatbot: I'm a chatbot. What's yours?" << endl;
        } else if (user_input == "bye") {
            cout << "Chatbot: Goodbye! Have a great day." << endl;
            break;  // Exit the loop if the user wants to quit
        } else {
            cout << "Chatbot: I'm sorry, I don't understand that." << endl;
        }
    }
}

int main() {
    cout << "Chatbot: Hi! How can I help you?" << endl;
    chatbot();
    return 0;
}
