#include <iostream>
#include <string>
using namespace std;
int main()
{
    string gen, sea;
    int age;
    cout << "Enter the gender : ";
    cin >> gen;
    cout << "Enter the season : ";
    cin >> sea;
    cout << "Enter the age : ";
    cin >> age;

    //male 

    if ((gen == "male") && (sea == "summer") && (age <= 10))
    {
        cout << "You should wear soft cotton clothes ";
    }
    else if ((gen == "male") && (sea == "winter") && (age <= 10))
    {
        cout << "You should wear jacket ";
    }
    else if ((gen == "male") && (sea == "rainy") && (age <= 10))
    {
        cout << " You should wear raincoat ";
    }

    if ((gen == "male") && (sea == "summer") && (age >= 10 && age <= 60))
    {
        cout << "You should wear cotton tshirts ";
    }
    else if ((gen == "male") && (sea == "winter") && (age >= 10 && age <= 60))
    {
        cout << "You should wear wollen jacket ";
    }
    else if ((gen == "male") && (sea == "rainy") && (age >= 10 && age <= 60))
    {
        cout << " You should carry umbrella";
    }
     if ((gen == "male") && (sea == "summer") && (age > 60))
    {
        cout << "You should wear cotton kurta ";
    }
    else if ((gen == "male") && (sea == "winter") && (age > 60))
    {
        cout << "You should wear sweater ";
    }
    else if ((gen == "male") && (sea == "rainy") && (age >60))
    {
        cout << " You should carry umbrella ";
    }
    //female


     if ((gen == "female") && (sea == "summer") && (age <= 10))
    {
        cout << "You should wear soft cotton clothes ";
    }
    else if ((gen == "female") && (sea == "winter") && (age <= 10))
    {
        cout << "You should wear sweatshirt ";
    }
    else if ((gen == "female") && (sea == "rainy") && (age <= 10))
    {
        cout << " You should wear raincoat ";
    }

    if ((gen == "female") && (sea == "summer") && (age >= 10 && age <= 60))
    {
        cout << "You should wear cotton top ";
    }
    else if ((gen == "female") && (sea == "winter") && (age >= 10 && age <= 60))
    {
        cout << "You should wear wollen jacket ";
    }
    else if ((gen == "female") && (sea == "rainy") && (age >= 10 && age <= 60))
    {
        cout << " You should carry umbrella";
    }
    if ((gen == "male") && (sea == "summer") && (age > 60))
    {
        cout << "You should wear cotton saree ";
    }
    else if ((gen == "male") && (sea == "winter") && (age > 60))
    {
        cout << "You should wear sweater ";
    }
    else if ((gen == "male") && (sea == "rainy") && (age >60))
    {
        cout << " You should carry umbrella ";
    }
    return 0;
}