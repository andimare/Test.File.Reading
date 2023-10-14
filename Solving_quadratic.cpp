#include <iostream>
using namespace std;

int main(){
	
	int a,b,c;
	long double x = 3.48062;
	int i = 0;
	double value[] = {0,0,0,0};
	
	while(x < 3.48063){
		double y = 15*x*x - 66*x + 48;
		if(y == 0){
			value[i] = x;
			++i;
		}
		cout<<y<<"  "<<x<<endl;
		x += 0.000001;
	}
	cout<<"First "<<value[0]<<endl;
	cout<<"Second "<<value[1]<<endl;
	
	return 0;
}
