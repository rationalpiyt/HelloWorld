//Credit goes to user Need4Sleep
//http://www.cplusplus.com/forum/lounge/79437/

#include <iostream>

class AbstractHello {
public:
	virtual ~AbstractHello(){ std::cout << " World!"; }
	void Prnt(){ std::cout << "Hello"; } };

class ChildHello : public AbstractHello {
public:
	~ChildHello(){ Prnt(); }};

int main() {
	ChildHello *Obj;		
	Obj = new ChildHello;
	delete Obj;
	std::cin.ignore(); 
	return 0; }