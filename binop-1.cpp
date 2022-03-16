#include "expression.h"
#include <stdlib.h>
#include <cstdio>

binop::binop(char op, expression* exp1, expression* exp2) {
		op1 = op;
		e1 = exp1;
		e2 = exp2;	
}

int binop::eval(){
	 int result;
	
	 switch (op1) {
				case '+': result = e1->eval() + e2->eval(); break;
				case '-': result = e1->eval() - e2->eval(); break;
				case '*': result = e1->eval() * e2->eval(); break;
				case '/': result = e1->eval() / e2->eval(); break;
				default : result = 0; break;
			}
	return result;
}

char* binop::infix(){
	char* buf = new char[100];
	sprintf(buf, "(%s %c %s)",e1->infix() ,op1 ,e2->infix());
	return buf;
}
	
char* binop::postfix(){
	char* buf1 = new char[100];
	sprintf(buf1, "%s %s %c", e1->postfix(), e2->postfix(), op1);
	return buf1;
}
