#include <iostream>
#include <string>
using namespace std;
class Product
{
private:
    int Productid;
    string Proname;
    float Price;
    int Quantity;

public:
    void setProductid()
    {
        cout << "Enter the product id : ";
        cin >> Productid;
    }
    void getProductid()
    {
        cout <<"Product id-" <<Productid << endl;
    }
    void setProname()
    {
        cout << "Enter the product name : ";
        cin >> Proname;
    }
    void getProname()
    {
        cout <<"Product name:" <<Proname << endl;
    }
    void setPrice()
    {
        cout << "Enter the price : ";
        cin >> Price;
    }
    void getPrice()
    {
        cout <<"Product price:" <<Price << endl;
    }
    void setQuantity()
    {
        cout << "Enter the Quantity : ";
        cin >> Quantity;
    }
    void getQuantity()
    {
        cout <<"Quantity:" <<Quantity << endl;
    }
};
int main()
{
 Product a,b,p,q;
 a.setProductid();
 b.setProname();
 p.setPrice();
 q.setQuantity();
 a.getProductid();
 b.getProname();
 p.getPrice();
 q.getQuantity();
}