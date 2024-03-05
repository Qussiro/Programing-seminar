int main(){
	short int i = 1;
    char* p;
    char c;
    
    p = (char*) i;
    c = (char*) p;
    if(c == 1)
    	printf("Little Endian\n",c);
    else
    	printf("Big Endian\n",c);
    return(1);
}
