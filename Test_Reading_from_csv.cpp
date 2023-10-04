/* This will be a program to read from a csv file */
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;

int main(){
	string str1;
	int j = 0;
	double salary;
	ifstream file1;
	file1.open("../Code/Employee-Data.csv", ios::in);
	
	while(!file1.eof()){
			++j;
			if(j == 1)continue;
			getline(file1,str1);
			cout<<str1<<endl;
			
			int i = 0;
			string words[6];
			
			while(i < 6){
				words[i] = str1.substr(0,str1.find(","));
				str1.erase(0,words[i].length()+1);
				
				if(i == 5){
					words[i].erase(0,words[i].find('"')+2);
				}
				cout<<words[i]<<endl;
				
				++i;
			}
			stringstream geek(words[5]);
			geek>>salary;
			
			cout<<"Is the varible salary a num "<<words[5]<<endl<<endl;
	}
	
	return 0;
}
