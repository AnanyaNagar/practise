#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int d1,d2,p1,p2,T;
	cin>>d1>>p1>>d2>>p2>>T;
	if(d1>d2)
	{
	    d1=d1+d2;
	    d2=d1-d2;
	    d1=d1-d2;
	    p1=p1+p2;
	    p2=p1-p2;
	    p1=p1-p2;
	}
	int resultant_days=d2-1;    //(d1-1)+d2-d1
	int injections_made=(d2-d1)*p1;
	while(injections_made < T)
	{
	    injections_made+=(p1+p2);
	    resultant_days++;
	}
	cout<<resultant_days;
}
