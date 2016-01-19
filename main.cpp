#include <iostream>
#include <string.h>
#include <vector>
#include "Agency.h"

using namespace std;

vector<Agency> cars;

int main(){

    cars.push_back(Agency("Hyundai",120000,"white",2015,0));
    cars.push_back(Agency("BMW",200000,"red",2013,0));
    cars.push_back(Agency("Mercedes-Benz",80000,"black",2000,0));
    cars.push_back(Agency("Kia",60000,"Metallic",2015,0));
    cars.push_back(Agency("Audi",300000,"Silver",2016,0));

    cout<<"Welcome to the car agency!\n";

    while(1){
        int x;
        cout<<"Please select a number according to your request"<<endl;
        cout<<" 1) Add a new car \n 2) Edit a car \n 3) Search a car \n 4) List of cars \n 5) reserve a car\n 6) Cancel a car \n 7)Exit\n";
        cin>>x;
        if( x == 1 ){
            int i;
            cout<<" Add a new car\n";
            cout<<"ID  :  "<<cars.size()+1<<endl;
            int p,m;
            string k,c;
            cout<<"Kind  :  ";
            cin>>k;
            cout<<"Price  :  ";
            cin>>p;
            cout<<"Color  :  ";
            cin>>c;
            cout<<"Model  :  ";
            cin>>m;
            cars.push_back(Agency(k,p,c,m,0));
            cout<<"New car added\n";
        }
        else if (x == 2){
            int i;
            cout<<"Edit a car\n";
            cout<<"ID  :  ";
            cin>>i;
            cars[i-1].print();
            int p,m;
            string k,c;
            //bool r;
            cout<<"Enter new info\n";
            cout<<"new Kind  :  ";
            cin>>k;
            cout<<"new Price  :  ";
            cin>>p;
            cout<<"new Color  :  ";
            cin>>c;
            cout<<"new Model  :  ";
            cin>>m;
            //cout<<"Status  :  ";
            //cin>>r;
            cars[i-1].setKind(k);
            cars[i-1].setPrice(p);
            cars[i-1].setColor(c);
            cars[i-1].setModel(m);
            //cars[i-1].setStatus(r);
            cout<<"Information updated\n";
        }
        else if(x == 3){
            int i;
            cout<<"Search a car\n";
            cout<<"ID  :  ";
            cin>>i;
            cars[i-1].print();
        }
        else if (x == 4){
            cout<<"List of cars \n";
            for(int i=0; i<cars.size();i++){
                cout<<"ID  :  "<<i+1<<endl;
                cars[i].print();
                cout<<endl<<endl;
            }
        }
        else if(x == 5){
            int i;
            char z;
            cout<<"Reserve a car\n";
            cout<<"ID  :  ";
            cin>>i;
            if(cars[i-1].getStatus() == 1){
                cout << "Already reserved!\n";
                continue;
            }
            cars[i-1].print();
            cout<<"\nAre you sure(y/n)? \n";
            cin>>z;
            if(z == 'y'){
                cars[i-1].setStatus(1);
                cout<<"Car reserved\n";
                }
            else continue;
        }
        else if(x == 6){
            int i;
            char z;
            cout<<"Cancel a car\n";
            cout<<"ID  :  ";
            cin>>i;
            if(cars[i-1].getStatus() == 0){
                cout << "Not reserved!\n";
                continue;
            }
            cars[i-1].print();
            cout<<"\nAre you sure(y/n)? \n";
            cin>>z;
            if(z == 'y'){
                cars[i-1].setStatus(0);
                cout<<"Car reservation canceled\n";
            }
        }
        else if(x == 7){
            cout << "Hope to see you soon!";
            break;
        }
        else{
            cout << "Invalid!!\n";
        }
    }
}
