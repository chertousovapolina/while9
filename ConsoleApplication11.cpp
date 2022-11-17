// дз чертоусова while9;
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, k = 1, a = 3;
	cin >> n;
	while(a<=n){
		a *= 3;
		k++;
	}
	cout << k;



}

