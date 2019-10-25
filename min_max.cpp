#include <iostream>

using namespace std;

int main() {
	int n,num,i,sum=0,min,max;
	cin>>n;
	cin >> num;
	sum=min=max=num;
	for(i=1;i<n;i++)
	{
	    cin>>num;
	    sum+=num;
	    if(min>num)
	    min=num;
	    if(max<num)
	    max=num;
	}
	cout << sum-max <<" "<<sum-min<< endl;		// Writing output to STDOUT
}
