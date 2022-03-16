#include "expression.h"
#include <stdlib.h>
#include <cstdio>

constant::constant(int i){
	a = i;
}

int constant::eval(){
		return a;
}
	
char* constant::infix(){
		char* val = new char[10];
		sprintf(val,"%d",a);
		return val;
}
	
char* constant::postfix(){
		char* val1 = new char[10];
		sprintf(val1,"%d",a);
		return val1;
}
