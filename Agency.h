#include <iostream>
using namespace std;

class Agency{
public:
    Agency(string,double,string,int,bool);
    void setKind(string );
    string getKind();
    void setPrice(double );
    double getPrice();
    void setColor(string );
    string getColor();
    void setModel(int);
    int getModel();
    void setStatus(bool);
    bool getStatus();
    void print();
private:
    int id;
    string kind;
    double price;
    string color;
    int model;
    bool r;
};

