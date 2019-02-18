#include <iostream>
using namespace std;

//globalna varijabla
int x = 10;

int main()
{
    std::cout << "Hello World "<<endl; //nacin ispisivanja bez using namespace std;
    cout<< "Hello"<<endl;
    
    /*
    koristi se za komentar 
    sa vise linija
    */
    
    cout<< x <<endl;
    
    int x = 5; //localna varijabla
    int y;
    y = 5;
    
    cout<< x + y;
    
    int rezultat;
    
    rezultat = x + y;
    cout<<endl<< "Rezultat je: " << rezultat;
    
    bool tacno, netacno;
    
    tacno = 1;
    netacno = 0;
    
    cout<<endl<< tacno << " " << netacno;
    
    tacno = true;
    netacno = false;
    cout<<endl<< tacno << " " << netacno;
    
    float broj;
    
    broj = 5.5;
    
    cout << endl << broj;
    
    // operacije
    
    int num1 = 10, num2 = 20;
    
    int rezultat2;
    rezultat2= num1 + num2;
    cout<<endl<<"Sabiranje: "<<rezultat2;
    rezultat2 = num1 - num2;
    cout<<endl<<"Oduzimanje: "<< rezultat2;
    rezultat2 = num1 * num2;
    cout<<endl<<"Mnozenje: "<< rezultat2;
    rezultat2 = num1 / num2;
    cout<<endl<<"Dijeljenje: " << rezultat2;
    rezultat2 = num1 % num2; //num2 % num1
    cout<<endl<<"Modulo / Ostatak: " << rezultat2;
    
    int zbir = 0, zbir1, zbir2;

    zbir1 = 10;
    zbir2 = 5;
    
    zbir += zbir1;
    cout<<endl<<"Zbir: "<<zbir;
    zbir -= zbir2;
    cout<<endl<<"Zbir: "<<zbir;
    
    zbir++;
    cout<<endl<<"Zbir: "<<zbir;
    zbir--;
    cout<<endl<<"Zbir: "<<zbir;
    
    //AKO SE STIGNE ILI ZADACA
    // da se ubaci 5 predmeta i izracuna prosjek
    
    int predmet1, predmet2, predmet3, predmet4, predmet5, zbirOcjena, prosjek;
    
    predmet1 = 4;
    predmet2= 5;
    predmet3 = 3;
    predmet4 = 4;
    predmet5 = 5;
    
    zbirOcjena = predmet1 + predmet2 + predmet3 + predmet4 + predmet5;
    prosjek = zbirOcjena / 5;
    
    cout<<endl<<"Vas prosjek je: "<< prosjek;
    
    prosjek = (predmet1 + predmet2 + predmet3 + predmet4 + predmet5) / 5;
    cout<<endl<<"Prosjek na drugi nacin: "<< prosjek;
    
    
    return 0;
}
