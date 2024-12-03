#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int b[1000] = {0};
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	for (int i=0;i<1000;i++){
		if (b[i] != 0){
			printf("phan tu %d xuat hien %d lan \n",i,b[i]);
		}
	}
}

