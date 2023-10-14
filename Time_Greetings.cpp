#include <ctime>
#include <iostream>
#include <string>
using namespace std;
int main(){
	time_t now = time(0); // get current date/time with respect to system.
	string dt = ctime(&now); // convert it into string.
	cout << "The local date and time is: " << dt << endl; // print local date and time.

	cout<<seconds<<endl;
	
	return 0;
}
