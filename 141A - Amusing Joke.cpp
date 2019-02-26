#include <iostream>
#include <string.h>
#include<algorithm>

using namespace std;
int main()
{

    string name1, name2, name3, concatenate;

    cin>> name1 >> name2 >> name3;

    concatenate = name1 + name2;

    sort(concatenate.begin(), concatenate.end());
    sort(name3.begin(), name3.end());



    if (name3 == concatenate )
        cout << "YES"<<endl;
    else
        cout << "NO" <<endl;


	return 0;
}
