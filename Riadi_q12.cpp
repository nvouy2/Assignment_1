
#include <iostream>

using namespace std;

int main (){
    // Declaring my favorite game as a string
    string favGame = "Final Fantasy";
    // Declaring the pointer for the game
    string* favGame_ptr;
    
    favGame_ptr = &favGame;
    // Prints out favorite game
    cout << "My favorite game is: " << favGame << "\n";
    // Prints out pointer variable
    cout << "My favorite games pointer value is: " << favGame_ptr << "\n";
    // Prints out dereferenced pointer value
    cout << "My favorite games dereferenced pointer value is: " << *favGame_ptr << "\n";

    // Changing the value to my second fav game
    favGame = "Pokemon";
    // Prints out the updated value of my fav game
    cout << "My second favorite game is: " << favGame << "\n";
    // Prints out pointer variable (should be the same)
    cout << "My second favorite games pointer value is: " << favGame_ptr << "\n";
    // Prints out updated dereferenced pointer value
    cout << "My favorite games dereferenced pointer value is: " << *favGame_ptr << "\n";



}
