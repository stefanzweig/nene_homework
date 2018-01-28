#include <iostream>
#include <string>
using namespace std;
int main() {
	string a,b,c,a1,b1,c1,y;
	getline(cin,c);
	cin>>a>>b;
	a1=" "+a+" ";
	b1=" "+b+" ";
	c1=" "+c+" ";
	for(int i=0;i<=c1.size();i++){
		long long found=c1.find(a1);
		if (found!=string::npos) {
			c1.erase(found,a1.size());
		    c1.insert(found,b1);  
	    }
	}
	long long x=c1.size();
	y=c1.substr(1,x);
	cout<<y<<endl;
	return 0;	
}