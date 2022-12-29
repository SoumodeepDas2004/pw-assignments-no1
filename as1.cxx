#include <iostream>

using namespace std;

int main()
{ 
	cout <<" qsn1......"<<endl ;
	int x;
	int y;
	cin>>x>>y;
	int p = x*y;
	cout<<"required ans is..."<< p<< endl;
	


	cout<<"qsn2........"<<endl;
	char c = 'U';
	int n = (int) c;
	cout<< "our required ans is "<< n<< endl;
	
	
	cout<<"qsn3..............."<<endl;
	int l;
	int b;
	cout <<"enter length and breath respectivly ";
	cin>>l>>b;
	int area = l*b;	
	cout<<"the area of rectangle will be........"<<area<< endl;
	
	
	cout<<"qsn4........"<<endl;
	int v;
	cout<<"Enter the number you want to get its cube" ;
	cin>>v;
	int h= v*v*v;
	 cout<<"your ans is......"<<h<<endl; 
	 
	 
	 
	cout<<"qsn5........"<<endl;
	
	cout<<sizeof(int)<<sizeof(char)<<sizeof(bool)<<sizeof(float)<<sizeof(long)<<sizeof(long long)<<sizeof(double)<<sizeof(double long)<<sizeof(short)<<endl;
	
	
	cout<< "qsn6"<<endl;
	int ļ ;
	int ț;
	int ě;
	cin>> ț>> ļ;
	ě=ț;
	ț=ļ;
	ļ=ě;
	
	cout<<ț <<ļ << "is our ans";
	return 0;
}