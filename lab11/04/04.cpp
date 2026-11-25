#include <iostream>

int G1[128] = {0}, G2[128] = {0};

void foo() {
	static int S1[128] = {0}, S2[128] = {0};
	int L1[128] = {0}, L2[128] = {0};
	int *H1 = new int(128);
	int *H2 = new int (128);
	std::cout << "Global " << &G1[0] << " " << &G1[127] << " " << G2[0] << " " << G2[127] << std::endl;
	std::cout << "Static " << &S1[0] << " " << &S1[127] << " " << &S2[0] << " " << &S2[127] << std::endl;
   	std::cout << "Stack  " << &L1[0] << " " << &L1[127] << " " << &L2[0] << " " << &L2[127] << std::endl;
   	std::cout << "Heap   " << &H1[0] << " " << &H1[127] << " " << &H2[0] << " " << &H2[127] << std::endl;
	G1[0]++;
	S1[0]++;
	H1[0]++;
	L1[0]++;
	std::cout << G1[0] << " " << S1[0] << " " << H1[0] << " " << L1[0] << std::endl;
	 
}

int main(){
	foo();
	foo();
	foo();
	return 0;
}
