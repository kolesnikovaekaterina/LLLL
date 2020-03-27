#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

using namespace std;

class Product
{
private:
string name;
string price;
string weight;

public:
Product ();
void print ();
void setname(string name);
void setprice(string price);
void setweight(string weight);
string getname();
string getprice();
string getweight();

Product (string name, string price, string weight);

Product (const Product &p);
};



#endif // PRODUCT_H_INCLUDED
