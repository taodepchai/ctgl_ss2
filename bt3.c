#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int b[n];
	int count = 0;
	 for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     for (int i = 0; i <n; i++) {
        b[i] = arr[n-i-1];
    }
     for (int i = 0; i <n; i++) {
        printf("%d ",b[i]);
    }
}

