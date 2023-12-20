#include <iostream>
using namespace std;
class product
{
private:
    string name;
    int price, quantity, calc;

public:
    void addProduct()
    {
        cout << "Enter the name of product : ";
        cin >> name;
        cout << "Enter the price of product : ";
        cin >> price;
        cout << "Enter the quantity : ";
        cin >> quantity;
    }
    void calculation()
    {
        calc = quantity * price;
    }
    int display()
    {
        cout << "Product is :- " << name << endl;
        cout << "Quantity of product is :- " << quantity << endl;
        cout << "Price of per Product is:- " << price << endl;
        cout << "Total amount is : " << calc << endl;
        return 0;
    }
};
int main()
{
    int n;
    for (int i = 1; i <= n; i++)
    {
        product a;
        a.addProduct();
        a.calculation();
        a.display();
    }
    return 0;
}