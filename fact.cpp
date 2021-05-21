#include "fact.hpp"

Base* Fact::parse(char** input, int length){
	
	Base* root = nullptr;
	stack<Base*> cont;
	//cout << "First arg: " << input[0] << endl;
	//cout << "Second arg: " << input[1];
	//cout << "Third arg: " << input[2];
	for(int i = 1; i < length; i++){
		
		//cout << "This is fine: " << input[i] << endl;

		if(is_Op((string)input[i])){
		
			root = new Op(stod(input[i]));
		

		}

		else if((string)input[i] == "+"){
		
			root = new Add(cont.top(), new Op(stod(input[++i])));	
		}
	
		else if((string)input[i] == "*"){

			root = new Mult(cont.top(), new Op(stod(input[++i])));

		}
		
		else if((string)input[i] == "**"){

                        root = new Pow(cont.top(), new Op(stod(input[++i])));

                }

		else if((string)input[i] == "/"){

                        root = new Div(cont.top(), new Op(stod(input[++i])));

                }

		else if((string)input[i] == "-"){

                        root = new Sub(cont.top(), new Op(stod(input[++i])));

                }

	//	else if((string)input[i] == " "){}		
		

		else{
	
			cout << "ERROR!" << endl;
		//	cout << "ERROR!" << input[i] << "Unrecognized!" << endl;
			return nullptr;		
		}
		
	     	if(!is_Op((string)input[i])){ 
		
			delete cont.top();
			cont.pop();
		}

		//if((string)input[i] != " ") 
		cont.push(root);
	

	}
	

	return cont.top();
}


void Fact::displayStack(stack<Base*> cont){

	while(!cont.empty()){

		cout << cont.top()->stringify() << endl;
		cont.pop();	
	}



}

bool Fact::is_Op(const string& c){
    
    stringstream ss;    
    
    ss << c;
    
    double result;
    
    ss >> result;
    
    return !ss.fail() && ss.eof();

}
