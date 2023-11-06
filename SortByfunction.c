#include <stdio.h>
void print_forth(int num[],int r,int i){
    for(int j=0;j<=r+2;j++){
        for(int i=0;i<=r-1;i++){
            if(num[i]>num[i+1]){
                int change=num[i+1];
                num[i+1]=num[i];
                num[i]=change;
            }
        }
    }
        printf("%d ",num[i-1]);

}

int main() {
    int num[99999] = {};
    int number = 1,i,r;
    for (int s = 0; number != 0; s++) {
        scanf("%d", &number);
        num[s] = number;
        r = s-1;
    }
    scanf("%d",&i);
    print_forth(num,r,i);
}
