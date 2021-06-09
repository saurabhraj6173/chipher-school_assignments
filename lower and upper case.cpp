/*Q.5 1. You are given a string that contains only lowercase and uppercase alphabets.
      2. You have to toggle the case of every character of the given string. */
       

#include<bits/stdc++.h>
using namespace std;

 
void toggleChars(char str[])
{
    for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i]>='A' && str[i]<='Z')
            str[i] = str[i] + 'a' - 'A';
        else if (str[i]>='a' && str[i]<='z')
            str[i] = str[i] + 'A' - 'a';
    }
}
 
int main()
{
    char str[] = "ProGraMMer";
    toggleChars(str);
    cout << "String after toggle " << endl;
    cout << str << endl;
    return 0;
}
