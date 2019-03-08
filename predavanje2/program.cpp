#include <iostream>
using namespace std;

int main()
{
    //zadatak 1...da li je uneseni broj pozitivan ili negativan
    int x;
    cout<<"Unesite broj: ";
    cin>>x;
    
    if(x >= 0)
    {
        cout<< x << " je pozitivan broj" ;
    }else {
        cout<< x << " je negativan broj";
    }
    
    //zadatak 2...da li je uneseni broj paran ili neparan
    cout<< endl<<"Unesite broj: ";
    cin>> x;
    
    if(x % 2 ==0)
        cout<< x << " je paran broj";
    else
        cout<< x << " je neparan broj";
    
    //zadatak 3...pitat korisnika za godine, ako je mladji od 18 napisat mu da mu je ulaz zabranjen (prekine program), ako je stariji onda mu pozeli dobrodoslicu
    int age;
    
    cout<< endl<<"Unesite Vase godine: " ;
    cin>> age;
    
    if(age < 18) {
        cout<< "Ulaz zabrenjen! Razlog: Godine.";
        return 0;
    }else{
        cout<<  "Dobrodosli !!!";
    }
    
    //cout<< "DOBRODOSLI!!!";
    
    //zadatak (zadaca)...pita korisnika za godine, ako je mladji prekine program. Ako je stariji pozeli dobrodoslicu i pita ga da odabere jednu opciju. 1 - za sabiranje 2 broja, 2 - za oduzimanje, 3 - za mnozenje, 4 - za djeljenje, 5 - za provjeru da li je broj paran ili neparan, 6 - za racunanje prosjeka u skoli (5 predmeta), -1 - za izlazak
    int godine;
    
    cout<<endl<< "Unesite godine: " ;
    cin>> godine;
    
    if(godine < 18){
        cout<< "Ulaz zabranjen";
        return 0;
    }
    
    cout<< "DOBRODOSLI";
    
    int opcija;
    int num1;
    int num2;
    int rezultat;
    
    
    cout<< endl<< "Odaberite opciju: 1 za sabiranje, 2 za oduzimanje, 3 za mnozenje, 4 za djeljenje, 5 za provjeru da li je broj paran ili neparan, 6 za racunanje prosjeka (5 predmeta) i -1 za prekid. ";
    cin>>opcija;
    
    if(opcija == -1){
        cout<<endl<< "VIDIMO SE!!!";
        return 0;
    }
    if(opcija == 1){
        cout<<endl<<"Unesi prvi broj: ";
        cin>>num1;
        cout<<"Unesi drugi broj: ";
        cin>> num2;
        
        rezultat = num1 + num2;
        cout<<"Rezultat je " << rezultat;
    }
    if(opcija == 2){
        cout<<endl<<"Unesi prvi broj: ";
        cin>>num1;
        cout<<"Unesi drugi broj: ";
        cin>> num2;
        
        rezultat = num1 - num2;
        cout<<"Rezultat je " << rezultat;
    }
    if(opcija == 3){
        cout<<endl<<"Unesi prvi broj: ";
        cin>>num1;
        cout<<"Unesi drugi broj: ";
        cin>> num2;
        
        rezultat = num1 * num2;
        cout<<"Rezultat je " << rezultat;
    }
    if(opcija == 4){
        cout<<endl<<"Unesi prvi broj: ";
        cin>>num1;
        cout<<"Unesi drugi broj: ";
        cin>> num2;
        
        rezultat = num1 / num2;
        cout<<"Rezultat je " << rezultat;
    }
    if(opcija == 5){
        cout<<endl<<"Unesi broj: ";
        cin>>num1;
        
        if(num1 % 2 ==0)
        cout<< num1 << " je paran broj";
    else
        cout<< num1 << " je neparan broj";
        
    }
    if(opcija == 6){
        int ocjena1;
        int ocjena2;
        int ocjena3;
        int ocjena4;
        int ocjena5;
        int prosjek;
        
        cout<< "Unesi ocjenu prvog predmeta " ;
        cin>> ocjena1;
        cout<< "Unesi ocjenu drugog predmeta " ;
        cin>> ocjena2;
        cout<< "Unesi ocjenu treceg predmeta " ;
        cin>> ocjena3;
        cout<< "Unesi ocjenu cetvrtog predmeta " ;
        cin>> ocjena4;
        cout<< "Unesi ocjenu petog predmeta " ;
        cin>> ocjena5;
    
        prosjek = (ocjena1 + ocjena2 + ocjena3 + ocjena4 + ocjena5 ) / 5;
        cout<< endl<< "Vas prosjek je " << prosjek;
    }
    
    //if-else if 
    int broj;
    
    cout<< "Unesite broj: ";
    cin>> broj;
    
    if(broj ==10)
        cout<<"Unijeli ste broj 10";
    else if(broj < 10)
        cout<< "Vas broj je manji od 10";
    else 
        cout<< "Vas broj je veci od 10";
    
    return 0;    
}
