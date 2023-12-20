#include <iostream>
using namespace std;
int main()
{
    char alpha;
    cout << "Enter the Alphabet : ";
    cin >> alpha;

    if (alpha == 'a' || alpha == 'e'||alpha == 'i' ||alpha == 'o' || alpha == 'u' ||alpha=='A'||alpha=='E' ||alpha == 'I' ||alpha == 'O' ||alpha == 'U')
    {
        cout<<"the character is Vowel "<<endl;
    }
    else
    {
        cout<<"the character is consonant "<<endl;
    }
    return 0;
}