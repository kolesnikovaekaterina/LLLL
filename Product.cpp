#include <iostream>
#include "Product.h"

using namespace std;

Product::Product()
{
this->name="potato";
this->price="25";
this->weight="500";
}
void Product::print()
{
cout << "name: " << name << endl;
cout << "price: " << price << endl;
cout << "weight: " << weight << endl;
}
void Product::setname(string name)
{
this->name=name;
}
void Product::setprice (string price)
{
this->price=price;
}
void Product::setweight(string weight)
{
this->weight=weight;
}
string Product::getname()
{
return name;
}
string Product::getprice()
{
return price;
}
string Product::getweight()
{
return weight;
}
Product :: Product (string name,string price, string weight)
{
this->name=name;
this->price=price;
this->weight=weight;
}
Product::Product(const Product &p)
{
this->name=p.name;
this->price=p.price;
this->weight=p.weight;
}
