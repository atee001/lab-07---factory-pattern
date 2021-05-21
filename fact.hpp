#pragma once
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* strtod */
#include <iostream>
#include <sstream>
#include <stack>
#include "Add.hpp"
#include "Sub.hpp"
#include "Pow.hpp"
#include "Mult.hpp"
#include "Div.hpp"
#include "Rand.hpp"
#include "base.hpp"
#include "op.hpp"
#include <string.h>
using namespace std;

class Fact{

	public:
		
		Fact(){} 

		Base* parse(char** input, int length);

		bool is_Op(const string&);  //checking if argument is an operand

		void displayStack(stack<Base*>); //for testing


	




};
