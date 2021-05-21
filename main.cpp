#include <iostream>
#include "Add.hpp"
#include "Sub.hpp"
#include "Pow.hpp"
#include "Mult.hpp"
#include "Div.hpp"
#include "Rand.hpp"
#include "base.hpp"
#include "op.hpp"
#include "fact.hpp"

int main(int argc, char** argv) {
       
	Base* result = Fact().parse(argv, argc);	
	if(result){

		cout << result->stringify() << endl;
	
		cout << result->stringify() << " = " << result->evaluate() << endl;

	}

	delete result;	

	return 0;
}
