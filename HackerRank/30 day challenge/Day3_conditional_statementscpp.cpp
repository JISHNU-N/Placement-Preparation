#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    if(N%2 == 1 || (N%2== 0 && N>=6 && N<=20))
    	cout<<"Weird";
    else if((N%2 == 0) && ((N>=2 && N<=6) || N>20)) 
		cout<<"Not Weird";
    return 0;
}

