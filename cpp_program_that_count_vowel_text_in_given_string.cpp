#include<iostream>
using namespace std;

int main(){
    string text = "Hello kashfeet raza";

    int voweltext = 0;
    for (int i = 0; i < text.length(); i++)
    {
        char ch = (text[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'||ch =='u'){
              voweltext++;
        }
    }
    cout<<"The number of Vowel text is:"<<voweltext;
    return 0;
}