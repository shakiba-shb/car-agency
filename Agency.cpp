#include <iostream>
#include "Agency.h"
using namespace std;

Agency::Agency(string k,double p,string c,int m,bool r){

    setKind(k);
    setPrice(p);
    setColor(c);
    setModel(m);
    setStatus(r);
}
/*
else {

    }*/

void Agency::setKind(string k){
        kind=k;
    }
string Agency::getKind(){
        return kind;
    }
void Agency::setPrice(double p){
        price=p;
    }
double Agency::getPrice(){
        return price;
    }
void Agency::setColor(string c){
        color=c;
    }
string Agency::getColor(){
        return color;
    }
void Agency::setModel(int m){
        model=m;
    }
int Agency::getModel(){
        return model;
}
void Agency::setStatus(bool x){
        r=x;
    }
bool Agency::getStatus(){
        return r;
}
void Agency::print(){
    cout<<"Kind  :  "<<kind<<endl;
    cout<<"Price  :  "<<price<<endl;
    cout<<"Color  :  "<<color<<endl;
    cout<<"Model  :  "<<model<<endl;
    cout<<"Status  :  "<<(r ? "Reserved" : "Free")<<endl;

}

