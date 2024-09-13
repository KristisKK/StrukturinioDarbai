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
   //informaciją apie krepšinio klubą
    cout << "ANTRA UZDUOTIS"<<endl;
        string pavadinimas ="Kauno Zalgiris";
    int ikurimoMetai = 1944;
    string savininkas ="Paulius Motiejunas";
    string arena ="Kauno Zalgirio Arena";
    int vietuSkaicius = 15415;

    //Isvesta informacija apie sporto kluba
    cout << "Informacija apie sporto kluba:" << endl;
    cout << "Pavadinimas: " << pavadinimas << std::endl;
    cout << "Ikurimo metai: " << ikurimoMetai << std::endl;
    cout << "Klubo Savininkas: " << savininkas << std::endl;
    cout << "Klubo Arena: " << arena << std::endl;
    cout << "Vietu Skaicius: " << vietuSkaicius << std::endl;

    //Informacija apie automobili
    cout << "TRECIA UZDUOTIS"<<endl;
    string marke ="Opel";
    string modelis ="Insignia";
    int pagaminimoMetai = 2012;
    string litrazas ="2.0 Dyzelis";
    string spalva ="Pilka";

    //Isvesta informacija apie automobili
    cout << "Marke:" << marke << ", Modelis:" << modelis << ", Pagaminimo metai:" << pagaminimoMetai << ", Litrazas:" << litrazas << ", Spalva:" << spalva;

cout << "KETVIRTA UZDUOTIS"<<endl;
    int a = 13;
    int b = 5;
    double c = 17.5;

    cout << a + b-c << endl;
    cout << 15.0 / 2 + c << endl;
    cout << a / static_cast<double>(b) + 2 * c << endl;
    cout << 14 % 3 + 6.3 + static_cast<float>(b)/static_cast<float>(a) << endl;
    cout << static_cast<int>(c) % 5 + a-b << endl;
    cout << 13.5 / 2 + 4.0 * 3.5 + 18 << endl;


}
