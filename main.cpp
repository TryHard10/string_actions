#include <iostream>
using namespace std;

#include "myString.h"

int main()
{

    char word[20];
    cin.getline(word, 20);
    MyString mystr;

    //CopyChar
    char word2[20];
    cout << endl << "--------------------------------------------" << endl;
    cout << "Copy Char" << endl;
    mystr.copyChar(word, word2);
    cout << "Word: " << word << " | Word2: " << word2 << endl;
    cout << "--------------------------------------------" << endl;
    //getLength
    cout << "Length: " << mystr.getLength(word)<< endl;
    cout << "--------------------------------------------" << endl;
    //ReverChar
    cout << "Reverse Char" << endl;
    mystr.reverseChar(word);
    cout << "Reversed: " << word << endl;
    cout << "--------------------------------------------" << endl;
    //Comparing
    cout << "Comparing Char" << endl;
    cout << "Result: " << mystr.compareChar(word, word2) << endl;
    cout << "--------------------------------------------" << endl;
    return 0;
}
