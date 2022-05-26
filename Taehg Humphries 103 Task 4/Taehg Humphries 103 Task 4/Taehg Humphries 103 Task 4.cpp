#include <iostream>
#include <string>

void Hangman() {
    //Hangman
    std::cout << "   _____ \n";
    std::cout << "  |     | \n";
    std::cout << "  |     O \n";
    std::cout << "  |    \\|/ \n";
    std::cout << "  |     |  \n";
    std::cout << "  |    / \\ \n";
    std::cout << "  | \n";
    std::cout << "  | \n";
}

void FreeMan() {

    //Walkman
    std::cout << " O \n";
    std::cout << "\\|/ \n";
    std::cout << " | \n";
    std::cout << "/ \\ ";
    std::cout << "\n\n";

}


void DeadMan() {

    //Deadman
    std::cout << "   _____ \n";
    std::cout << "  |     | \n";
    std::cout << "  |    /|\\ \n";
    std::cout << "  |     | \n";
    std::cout << "  |    /|\\ \n";
    std::cout << "  |     O \n";
    std::cout << "  | \n";
    std::cout << "  | \n";


}

void Base() {

    std::cout << "-------";
    std::cout << "\n\n";

}


int main() {
   


    DeadMan();
    Base();

    std::cout << "haha dead\n\n";

}