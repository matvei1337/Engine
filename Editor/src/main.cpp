#include <SimpleCore/Utils/test.hpp>


int main(){
	if(Engine::sayHello() != 0){
		std::cout << "Error";
		return -1;
	}
	return 0;
}