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
	int max = 0;
	int temp = 0;
	for (int i=0;i<1000;i++){
		if (temp < b[i]){
			temp = b[i];
			max = i;
		}
	}
	printf("%d",max);
}

