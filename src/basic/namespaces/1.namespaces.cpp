#include <iostream>

namespace A{
	void log(){
		std::cout << "namespace - 'A'" << std::endl;
	}
}
namespace B{
	void log(){
		std::cout << "namespace - 'B'" << std::endl;
	}
}



int main(){
	//call from A namespace
	A::log();
	//call from B namespace
	B::log();
	
	return 0;
}
