#include <iostream>
using namespace std;


int main()
{

    /*int a,b,zbir,razlika,kolicnik,proizvod;
    cout<< "unesi dva broja ";
    cin>>a;
    cin>> b;
    zbir=a+b;
    razlika=a-b;
    kolicnik=a/b;
    proizvod=a*b;
    if (zbir>99 ){
        cout << "zbir je " <<zbir<< endl;
    }
    if (razlika > 99){
        cout<< razlika<<endl;
    }
    if(kolicnik > 99){
       cout << kolicnik<<endl;
    }
     if (proizvod > 99){
        cout<<"proizvod je "<< proizvod<<endl;
     }


     //korisnik unese godine...ako je punoljetan izbaci hello...ako nije izbaci good bye

     int godine;
     cout<<"unesite godine ";
     cin>> godine;
     if (godine>=18)
     cout<<"hello";
     else{
     cout<<"good bye";
     cout<<"hvala";
     }

    */

    //korsnik unese sat ulazka i izlazka iz parkinga...izracunat koliko mora da plati ako je sat parkinga 2 marke...prvi sat parkinga je besplatan (if)

    int a,b,sati,platiti;
    cout<<"vrijeme ulaska";
    cin>> a;
    cout<<"vrijeme izlaska";
    cin>>b;
    sati=b-a;
    if(sati>1){
        platiti=(sati-1)*2;
    }
    else
        platiti=0;

    cout<< platiti;



    return 0;
}
