#include <iostream>
#include<vector>

void dosome_1(std::vector<int> &V){
	int s = 0;
	for(auto x : V){
		s += x;
	}
	V[0] = -1;
	std::cout << "sum = " << s << std::endl;
}

void dosome_2(std::vector<int> &V){
	int s = 0;
	for(auto x : V){
   	 s += x;
	V[0] = -1;
	}
	std::cout << "sum = " << s << std::endl;
}

void dosome_3(std::vector<int> V){
	int s = 0;
	for(auto x : V){
   	 s += x;
	V[0] = -1;
	}
	std::cout << "sum = " << s << std::endl;
}

void dosome_4(std::vector<int> V){
	int s = 0;
	for(auto x : V){
    	s += x;
	V[0] = -1;
	}
	std::cout << "sum = " << s << std::endl;
}

int main(){
    std::vector<int> V = {1,2,3,4,5};
	dosome_1(V);
	dosome_2(V);
	dosome_3(V);
	dosome_4(V);
	dosome_1({1, 2, 3});
	dosome_2({1, 2, 3});
	dosome_3({1, 2, 3});
	dosome_4({1, 2, 3});
	return 0;
}



