#include<stdio.h>
void main(){
        int x = 19;
        int ans = 0;

        ans= --x + x-- - x++ + ++x;
        printf("%d\n",x);
        printf("%d\n",ans);


}

