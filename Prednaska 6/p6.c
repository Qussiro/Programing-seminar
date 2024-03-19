#include<stdio.h>

typedef struct {
	float x,y,r;
} CIRCLE;

CIRCLE *new_circle(float xx, float yy, float rr){
	CIRCLE *t_circle = (CIRCLE*)malloc(sizeof(CIRCLE));
	if(t_circle == NULL) {
		return 0;
	}
	
	t_circle->x = xx;
	t_circle->y = yy;
	t_circle->r = rr;
	printf("\n!! CREATED !!\n\n");
	
	return t_circle;
}

void destroy_circle(CIRCLE *to_destroy)
{
	 free(to_destroy);
	 c = NULL;
	 printf("\n!! DESTROYED !!\n");
}

int main(){
	float x,y,r;
	CIRCLE *c;
	printf("Napiste x,y,r: \n");
    
    scanf("%f%f%f", &x,&y,&r);
    c = new_circle(x,y,r);
    
    printf("Circle x, y, r: %f, %f, %f\n", c->x, c->y, c->r);
    
   	destroy_circle(c);
    return(1);
}
