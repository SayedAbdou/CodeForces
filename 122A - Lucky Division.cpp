#include <iostream>

using namespace std;
int main()
{
    int num;

    cin >> num;
    if (num %4==0 || num %7==0 || num %47==0 || num %470==0 || num %477==0 || num %444==0 || num %474==0 ||
				num %777==0 || num %747==0 || num %774==0)
				cout<< "YES" <<endl;
    else
        cout << "NO" <<endl;

	return 0;
}
