#include "StackL.h"

int Stack::size(){
	return data.size();
}

void Stack::push(int e){
	data.insert(e,1);
}

void Stack::pop(){
	data.remove(1);
}

int Stack::top(){
	return data.getElement(1);
}

void Stack::clear(){
	data.clear();
}
