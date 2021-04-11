# include<stdio.h>
int number(int apple,int plate){
	if(apple==1 || plate==1){
		return 1;
	}
	else if(apple==plate){
		return number(apple,plate-1)+1;
	}
	else if(apple<plate){
		plate-=apple;
		return number(apple,plate);
	}
	else{
		return number(apple,plate-1)+number(apple-plate,plate);
	}
}
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	int apple,plate;
 	while(n--){
 		scanf("%d %d",&apple,&plate);
 		int sum=0;
 		sum=number(apple,plate);
 		printf("%d\n",sum);
	 }
	 return 0; 
 }
