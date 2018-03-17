#include<iostream>
using namespace std;
int Rome(int x,int y){
	int s[20][20];
    for(int i=0;i<20;i++)
    {
        s[0][i] = 1;
        s[i][0] = 1;
    }
	for(int i=1;i<x;i++){
        for(int j=1;j<y;j++){
			s[i][j]=s[i-1][j]+s[i][j-1];
		}
	}
	return s[x-1][y-1];
}
int main(){
	int n,m;
	cin>>n>>m;
	cout<<Rome(n,m);
	return 0;
}