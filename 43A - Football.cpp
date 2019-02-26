#include <iostream>

using namespace std;
int main ()
{
   string str;

   cin>>str;
   for ( int i=0 ; i<str.length(); i++ )
   {
        if (str[i]==str[i+1] && str[i]==str[i+2] && str[i]==str[i+3] && str[i]==str[i+4] && str[i]==str[i+5] && str[i]==str[i+6])
            {
                cout<<"YES"<<endl;
                return 0;
            }

   }
   cout<<"NO"<<endl;

    return 0;
}
