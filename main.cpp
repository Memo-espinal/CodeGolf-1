#include <iostream>
#include <string>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//	int A= 65;
//	char a='A';
//	
//	if (a==A){
//		cout << "Me mame!";
//		
//	}else{
//		cout << "Keep going";
//	}
//	return 0;
//Dedes aqui empecemos
string L;
int c1=0,c2=0,c3=0,c4=0;
getline(cin,L);
if(L.length()>0){
	for(int i =0 ;i<L.length();i++){
		char m=L[i];
		for(int j=48;j<58;j++){
			if (m==j){
				c1++;
			}
		}
		for (int j=65;j<91;j++){
			if (m==j){
				c2++;
			}
		}
		for(int j =97; j<123;j++){
			if (m==j){
				c3++;
			}
		}
		for (int j=33;j<127;j++){
			if (j==48){
				j+=9;
			}else if(j==65){
				j+=25;
			}else if(j==97){
				j+=25;
			}else if(m=j){
				c4++;
			}
		}
		
	}
	if (c1>=2&&c2>=3&&c3>=4&&c4>=1){
		cout<<"true";
	}else{
		cout<<"false";
	}
	
}

}
//    Al menos un símbolo
//
//    Al menos dos números
//
//    Al menos tres letras mayúsculas
//
//    Al menos cuatro letras minúsculas
