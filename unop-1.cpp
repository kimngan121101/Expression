#include "expression.h"
#include <stdlib.h>
#include <cstdio>

unop::unop(char oper, expression* exp){
		op = oper;
		e = exp;
} 

int unop::eval(){
		int v = e->eval() * (-1);
		return v;
}
char* unop::infix(){
		char* sym1 = new char[10];
		sprintf(sym1,"(%c %d)",op, e->eval());
		return sym1;
}
char* unop::postfix(){
		char* sym2 = new char[10];
		sprintf(sym2,"%d u%c",e->eval(), op);
		return sym2;
}
	
