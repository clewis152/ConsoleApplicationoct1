// ConsoleApplicationoct1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void def() {
    // implementation
}

int main()
{
    def();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
def prompt_for_password() {
    :
    return input("Enter the password: "


    def display_file(filename) :
    try :
        with open(filename, "r") as file :
print("\n--- Document Contents ---")
print(file.read())
print("-------------------------\n")
except FileNotFoundError :
print("The document could not be found.")


def main() :
    /* 1. Set up the password */
    password = prompt_for_password()

    // 2. Ask whether the user wants to view the document
    choice = input("Do you want to view the document? (yes/no): ")

    if choice.lower() != "yes":
print("Goodbye.")
return

/* 3. Give the user three attempts */
attempts = 0
while attempts < 3:
entered_password = input("Enter the password to view the document: ")

if entered_password == password :
    // 4. Correct password : display the file
    display_file("document.txt")
    return
else:
attempts += 1
print("Incorrect password.")

if attempts == 3 :
    print("You have entered the incorrect password three times.")
    print("You are locked out.")
    return


    int main() { return 0;; }