#include <stdio.h>


void reverse(char * Array) {
    int x,y,length;
    char temp;
    x = y = temp = 0;
    length = strlen(Array);
    
	for(x = 0, y = length-1; x <= y; x++, y--){
		temp = Array[x];
		Array[x] = Array[y];
		Array[y] = temp;
	}
}

int main() {
	char rArray[] = "123456789";
	
	printf("Original:\t%s\n", rArray);
	reverse(rArray);
	printf("Umgedreht:\t%s\n", rArray);
	
return 0;

}
