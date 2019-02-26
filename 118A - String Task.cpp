#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int i;
     char s[101];
   while(gets(s))
    {
        for(i=0; i<strlen(s); i++)
        {
            s[i]=tolower(s[i]);

            if(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i')
                continue;
            else
                cout<<"."<<s[i];
        }
   }

    return 0;
}
