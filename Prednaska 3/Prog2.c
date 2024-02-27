int main(){
	char *p;
	char c;
	short int i,j;
	
	i = 256;
	p = &i;
	c = *p;
	printf("%c", c);
}
