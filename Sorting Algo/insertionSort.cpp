#include <iostream>
#include <stdio.h>
using namespace std;
void diaplay(int *a){

	for(int j=0;j<6;j++){
		printf("%d\t",*(a+j) );
	}
	cout<<endl;
}

int main(){
	int a[6]={1,5,4,3,6,7},key,j;
	for(int i=1 ;i<6;i++){
		key = a[i];
		j=i-1;
		for (;j> 0 && a[j]>key;j--){
			a[j+1]=a[j];
		}
		a[j+1]=key;
		
	}
	diaplay(a);
	return 0;
}