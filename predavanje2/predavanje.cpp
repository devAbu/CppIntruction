#include <iostream>

using namespace std;

int main()
{
    int a;

    cout<< "unesi broj: ";
    cin>> a;

    /*if(a >= 0)
        cout<< "pozitivan";
    else
        cout<<"negativan";


    if (a%2==0)
        cout<<"broj je paran";
    else
        cout<<"neparan";

    if (a>=18)
        cout<<"dpbrodosao";
    else {
        cout<<"izvini ne mozes pristupiti programu";
        return 0;
    }

    cout<<"test";

    if (a>=18)
        cout<<"dobrodosao"<<endl;
    else {
        cout<<"izvini ne mozes pristupiti programu";
         return 0;
    }
    int opcija;
    cout<<"izaberi opciju";
    cin>> opcija;
    if (opcija==1){
        int x,y,z;
        cout<<endl<<"unesi dva broja";
    cin>>x;
    cin>>y;
    z=x+y;
    cout<<endl<<"rezultat je "<<z;

    }
else if(opcija==2){
    int x,y,z;
        cout<<endl<<"unesi dva broja";
    cin>>x;
    cin>>y;
    z=x-y;
    cout<<endl<<"rezultat je "<<z;

}

if(opcija==3){
    int x,y,z;
        cout<<endl<<"unesi dva broja";
    cin>>x;
    cin>>y;
    z=x*y;
    cout<<endl<<"rezultat je "<<z;
}
if(opcija==4){
    int x,y,z;
        cout<<endl<<"unesi dva broja";
    cin>>x;
    cin>>y;
    if(y==0)
        cout<<"dijeljenje sa nulom";
    else{
        z=x/y;
    cout<<endl<<"rezultat je "<<z;
    }

}

if(opcija==5){
    int t;
    cout<<"unesi broj ";
    cin>>t;
    if(t%2==0){
        cout<<"broj je paran";
        }
    else{
        cout<<"broj je neparan ";
        }

}
  if(opcija==6){
    int predmet1, predmet2, predmet3, predmet4, predmet5, prosjek;
    cin>> predmet1;
    cin>> predmet2;
    cin>> predmet3;
    cin>> predmet4;
    cin>> predmet5;

    prosjek= (predmet1+predmet2+predmet3+predmet4+predmet5)/5;
    cout<<prosjek;

  }
  if(opcija==-1) {
    return 0;
  }*/

    if(a>10){
        cout<<"veci";
    } else if(a < 10){
        cout<< "mani";
    } else{
        cout<< "jednak";
    }

    return 0;
}
