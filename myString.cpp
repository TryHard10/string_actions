#include "myString.h"

int MyString::getLength(char* item)
{
    int _size = 0;
    while(item[_size] != '\0'){_size++;}
    return _size;
}

void MyString::copyChar(char* in, char* out)
{
    for(int i=0; i <= getLength(in); i++)
    {
        out[i] = in[i];
    }
}

void MyString::reverseChar(char* reversing)
{
    int j=0;
    char restored[getLength(reversing)];
    copyChar(reversing, restored);
    for(int i=(sizeof(restored)/sizeof(restored[0])) - 1; i >= 0; i--)
    {
        reversing[i] = restored[j];
        j++;
    }
}

int MyString::compareChar(char* comparing, char* compared)
{
    int i=0;
    bool _equal = true;
    if(getLength(comparing) > getLength(compared))
    {
        return 1;
    }
    else
    {
        if(getLength(comparing) == getLength(compared))
        {
            while(comparing[i] != '\0'&& compared[i] !='\0')
            {
                _equal = ((comparing[i] == compared[i])? true:false);
                if(!_equal){return 2; break;}
                i++;
            }
        }
        else
        {
            return -1;
        }
    }
}
