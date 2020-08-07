#include <cstdio>
int n,k;
double Un_K = 0,Can_K = 0;
int count_Un = 0,count_Can = 0;
int main(){
    scanf("%d %d",&n,&k);
    for(int i = 1;i<=n;i++){
        if(i%k == 0){
            Can_K+=i;
            count_Can++;
        }else{
            Un_K+=i;
            count_Un++;
        }
    }
    printf("%0.1lf %0.1lf",Can_K/count_Can,Un_K/count_Un);
    return 0;
}