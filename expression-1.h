#include <stdlib.h>

class expression {
	public :
	virtual int eval() = 0;
	virtual char* infix() = 0;
	virtual char* postfix() = 0;
};

class constant : public expression {
	public:
	constant(int);
	int eval();
	char* infix();
	char* postfix();	
	private:
	int a;		
};

class unop : public expression {
	public:
	unop(char, expression*);
	int eval();
	char* infix();
	char* postfix();
	private:
	char op;
	expression* e;	
};

class binop : public expression {
	public:
	binop(char, expression*, expression*);
	int eval();
	char* infix();
	char* postfix();
	private:
	char op1;
	expression* e1;
	expression* e2;
};


