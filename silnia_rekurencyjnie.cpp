#include <cstdlib>
#include <iostream>

using namespace std;

long long silnia(int n)
{
	if(n<2)
	{
		return 1;
	}
	return n*silnia(n-1);
}

int main()
{
	cout << "Silnia rekurencyjnie" << endl << endl;
	
	int n;
 
 	cout<<"Podaj liczbe: " << endl;
 	cin>>n;
	cout << n << "! wynosi = " << silnia(n) << endl;

 return 0;
}
