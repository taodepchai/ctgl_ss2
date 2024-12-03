#include<stdio.h>

int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n];
	int check = 0;
	for (int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	for (int i=0;i<n;i++) {
		if (a[i] == k){
			check = 1;
			for (int j = i;j<n-1;j++){
				a[j] = a[j+1];
			}
			n--;
		}
	}
		
	if (check == 0){
		printf("khong co phan tu %d trong mang",k);
	} else {
		for (int i=0; i<n; i++) {
			printf("%d ", a[i]);
		}
	}
}

