# Define the chatbot's responses
responses = {
    "hi": "Hello!",
    "hello": "Hi there!",
    "how are you?": "I'm doing well, thank you.",
    "what's your name?": "I'm a chatbot. What's yours?",
    "bye": "Goodbye! Have a great day."
}

# Function to get user input and respond
def chatbot():
    print("Chatbot: Hi! How can I help you?")
    while True:
        user_input = input("You: ").lower()  # Convert input to lowercase for easier matching
        
        # Check if the user input matches any predefined query
        if user_input in responses:
            print("Chatbot:", responses[user_input])
        elif user_input == "quit":
            print("Chatbot: Goodbye! Have a great day.")
            break  # Exit the loop if the user wants to quit
        else:
            print("Chatbot: I'm sorry, I don't understand that.")

# Start the chatbot
chatbot()
