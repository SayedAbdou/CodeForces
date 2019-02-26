#include <iostream>
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;
int main()
{

    string name;
    string name2;
    cin>>name;
    cin>>name2;
    reverse(name.begin(), name.end());

    if (name == name2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

	return 0;
}
