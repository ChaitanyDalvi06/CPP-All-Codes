// use for loop to give vowel in sentence
#include <iostream>
using namespace std;
int main()
{
    string name;
    int counter=0;
    int i;
    cout << "Enter the name : ";
    getline(cin, name);
    int l = name.length();
    for (int i = 0; i <= l; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            counter+=1;
        }
        else if(name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
        {
            counter+=1;
        }
    }
        cout<<counter;

}