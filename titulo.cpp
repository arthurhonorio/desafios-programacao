#include <iostream>

using namespace std;

string title(string F){
	//Seu código aqui
	if(F[0]>96) F[0]-=32;
	int tam = F.size();
	
	for(int i=1; i<tam; i++) {
	    if(F[i]==' ') continue;
	    if(F[i-1]==' ' && F[i]>96) F[i]-=32;
	    else if(F[i-1]!=' ' && F[i]<91) F[i]+=32;
	}
	
	return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
	
	return 0;
}

