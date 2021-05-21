
#pragma once

#include "base.hpp"
#include <cmath>
#include <string>

using namespace std;

        class Add: public Base {
                public:
                        Add(Base* const x, Base* const y) {

                                lhs = x;
                                rhs = y;

                        }
			~Add(){

				delete lhs;
				delete rhs;
			}

                        double evaluate() {
                                return lhs->evaluate()+rhs->evaluate();
                        }

                        string stringify() {
                                return "(" + lhs->stringify() + "+" + rhs->stringify() + ")";
                        }


                private:

                        Base* lhs;
                        Base* rhs;



        };
