#include <iostream>
using namespace std;


bool isVowel(char ch) 
{ 
    ch = tolower(ch); 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'|| ch=='A' || ch=='E' || ch=='I' || 
					ch=='O' || ch=='U'); 
} 


int countVowels(string str) 
{ 
    int count = 0; 
    for (int i = 0; i < str.length(); i++) 
    { 
        if (isVowel(str[i])) 
            ++count; 
    } 
    return count; 
} 

int main() 
{ 
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);  

    cout << "Number of vowels: " << countVowels(str) << endl; 

    return 0; 
}
