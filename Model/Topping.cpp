#include "Topping.h"
#include<string.h>
/*
This class holds our Topping (in this case we just expect that we only choice one topping of any kind
*/
Topping::Topping()
{
    this->ID = "";
    this->name = "";
    this->price = 0;
}

void auto_increment_id()
{

}

string Topping::get_id()
{
    return ID;
}

string Topping::get_name(){
       return name;
}

double Topping::get_price(){
       return price;
}

istream& operator >> (istream& in, Topping& topping)
{
    cout << "Type in an topping ID: " << endl;
    in >> topping.ID;
    cout << "Type in an topping name: " << endl;
    in >> topping.name;
    cout << "Type in an topping price: " << endl;
    in >> topping.price;
    return in;
}

ostream& operator << (ostream& out,const Topping topping)
{
    out << topping.ID << "," << topping.name << "," << topping.price << endl;
    return out;
}
Topping::~Topping()
{
    //dtor
}
