//Create a program to check if a character is a vowel or consonant.

#include <iostream>
using namespace std;
int main()
{
    char alphabet;  // data type character is used.
    cout << "Enter the alphabet : ";
    cin >> alphabet;

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u'||
        alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')   // vowels are ( a,e,i,o,u,)
    {
        cout << "The given alphabet is vowel"<<endl;
    }
    else
    {
        cout << "The given alphabet is consonant"<<endl;  // if the alphabet is not vowels(a,e,i,o,u,) it's a consonant.
    } 
    return 0;
}