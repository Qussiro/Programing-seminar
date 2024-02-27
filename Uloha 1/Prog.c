int main(){
	short int i = 100, j = 10;
    short int *p;
    
    p = &i;
    j = *p;
    printf("%d\n",j);
    return(1);
}
