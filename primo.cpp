#include <iostream>

using namespace std;

bool eh_primo(int x){
    if(x==1) return false;
	if(x<2) return true;
	
	int i;
	
	for(i=2; i<x; i++){
	    if(x%i==0) return false;
	}
	return true;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}

