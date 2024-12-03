#include<stdio.h>

int main(){
	int n,x;
	scanf("%d",&n);
	scanf("%d",&x);
	int arr[n];
	int count = 0;
	 for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == x) {
            count++;
    	}
    }
    printf("%d",count);
}

