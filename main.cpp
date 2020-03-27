#include <iostream>
#include "Product.h"

using namespace std;

int main()
{
cout << "Konstructor bez parametrov \n\n";
Product r;
r.print();
cout << "\ninput changed name: " << endl;
string name1;
cin >> name1;
cout << "input changed price: " << endl;
string price1;
cin >> price1;
cout << "input changed weight: " << endl;
string weight1;
cin >> weight1;
r.setname(name1);
r.setprice(price1);
r.setweight(weight1);

r.getname();
r.getprice();
r.getweight();
r.print();

cout << "\nKonstructor s parametrami\n";
Product t ("name", "price", "weight");
cout << "\n";
t.print();
cout << "\ninput changed name: " << endl;
string name2;
cin >> name2;
cout << "input changed price: " << endl;
string price2;
cin >> price2;
cout << "input changed weight: "<< endl;
string weight2;
cin >> weight2;
t.setname(name2);
t.setprice(price2);
t.setweight(weight2);

t.getname();
t.getprice();
t.getweight();
t.print();

cout << "\nKonstructor kopirovaniya\n";
Product f (r);
cout << "\n";
f.print();


return 0;
}
