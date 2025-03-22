   #include<stdio.h>
    double fact(int n){
    if(n == 0|| n == 1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
   
    int main(){
        int n = 3;
        
        printf("factorial of %d = %lf\n",n,fact(n));
        
    return 0;
    }
