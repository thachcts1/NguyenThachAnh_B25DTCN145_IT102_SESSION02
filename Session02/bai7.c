#include<stdio.h>
	int main(){
			
			int number = 12345;   // nhap so lieu
			int sum = 0 ;  // cho tong bang 0
			
			// tao vong lap 
			while(number > 0){ // tao vong lap vo han 
				
				// tao 1 bien de luu tru phan chia lay du
				int luutru = number % 10; // %10 tuc la de dem so tu cuoi len (chia vo han)
				 sum += luutru; // sum la ham tong de tinh lan luot ham luutru 
				 number /= 10; // /10 tuc la de dem so tu cuoi len (chia vo han)	
			}
				printf("so lieu tinh duoc: %d", sum);
		return 0;
	}

