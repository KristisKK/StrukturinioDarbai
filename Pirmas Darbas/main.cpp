#include <iostream>
#include <string>
using namespace std;
int main() {//Sukurkiti kintamieji ir priskirta informacija apie student
    string vardas ="Kristupas";
string pavarde ="Kazlauskas";
int amzius = 18;
    string grupe ="PI24";
    int kursas = 1;
    string studijuProgramosPavadinimas ="Programu sistemos";

    //Isvesta informacija apie studenta
    cout << "Studento Informacija:" << std::endl;
    cout << "Vardas: " << vardas << std::endl;
    cout << "Pavarde: " << pavarde << std::endl;
    cout << "Amzius: " << amzius << std::endl;
    cout << "Grupe: " << grupe << std::endl;
    cout << "Kursas: " << kursas << std::endl;
    cout << "Studiju programos pavadinimas: " << studijuProgramosPavadinimas  << std::endl;
}
