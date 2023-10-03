/* This will be a program to read from a csv file */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string str1;
	ifstream file1;
	file1.open("../Code/Employee-Data.csv", ios::in);
	
	if(file1.is_open()){
			getline(file1,str1);
			cout<<str1<<endl;
			
			int i = 0;
			string words[6];
			
			while(i < 6){
				words[i] = str1.substr(0,str1.find(","));
				str1.erase(0,words[i].length()+1);
				cout<<words[i]<<endl;
				++i;
			}
	}
	
	return 0;
}
