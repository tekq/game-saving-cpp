#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int level = 1, level_saved;
    string yn;


    ifstream save("game_save.sav");

    save >> level_saved;

    cout << level_saved << endl;

    cout << "Modify Level number in game_save.sav? ";
    cin >> yn;

    if (yn == "y") {
        save.close();
        ofstream save("game_save.sav");
        cout << "New level number: ";
        cin >> level;
        save << level << "\n";
    }

    //save << "How to save to file";



    save.close();
}