// Overloading +,-,postfix(++,--),prefix(++,--),=,+=,-=,int casting.

#include<iostream>
#include<string>

using namespace std;

#ifndef _INT_H
#define _INT_H

class INT {

	friend ostream& operator<<(ostream&,INT a);
	//friend INT operator-(INT a) ;
	
	private:
		int num;	
	
	public:	
		INT(int input=0) ;  	//Default Constructor
		operator int();

		INT operator++(); 	//Prefix
		int operator++(int i); 	//Postfix
		int operator--(); 	//Prefix
		int operator--(int i);  //Postfix

		INT operator-=(INT a); 
		INT operator+=(INT a);

};

//Default Constructor
INT::INT(int input) {
	num=input;
	//return *this;
}

INT::operator int(){
	return num;
}

INT INT::operator-=(INT a){
	num=num-a.num;
	return *this;	
}

INT INT::operator+=(INT a) {
	num=num+a.num;
	return *this;
}

//Prefix
INT INT::operator++() {
	return ++num;
}

//Post-fix
int INT::operator++(int i){
	return num++;
}

//Prefix
int INT::operator--() {
	return --num;
}

//Postfix
int INT::operator--(int i) {
	return num--;
}

ostream& operator<<(ostream& output,INT a) {
	int temp = a.num;
	output<<temp;
	return output;

}
#endif

