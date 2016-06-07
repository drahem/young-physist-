// young physist.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, x[202], y[202], z[202];
	cin >> n;
	for (int i = 0; i < n; i++){

		cin >> x[i] >> y[i] >> z[i];
	}
	int t1 = 0,t2=0,t3=0;
	for (int i = 0; i < n; i++){
		t1 += x[i];
	}
	for (int i = 0; i < n; i++){
		t2 += y[i];
	}
	for (int i = 0; i < n; i++){
		t3 += z[i];
	}
	if (t1 == 0 && t2 == 0 & t3 == 0){
		cout << "YES";

	}
	else
	{
		cout << "NO";
	}

	return 0;
}

