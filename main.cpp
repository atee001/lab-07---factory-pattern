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
        Fact f; 
	Base* result = f.parse(argv, argc);	
	if(result){

		cout << result->stringify() << " = " << result->evaluate() << endl;
		
	}

	delete result;	

	return 0;
}
