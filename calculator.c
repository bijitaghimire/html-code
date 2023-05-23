#include<stdio.h>
/*
//int main(){
//	int firstNumber = 100;
//	int secondNumber = 20;
//	int add, subtraction, division, mul, mod;
//	 
//	 add =firstNumber + secondNumber;
//	 subtraction =firstNumber - secondNumber;
//	 mul =firstNumber * secondNumber;
//	 division =firstNumber % secondNumber;
//	 mod =firstNumber / secondNumber;
//	 
//	 printf("The sum is %d\n",  add);
//	 printf("The sub is %d\n",  subtraction);
//	 printf("The mul is %d\n",  mul);
//	 printf("The division is %d\n", division);
//	 printf("The mod is %d",  mod);
//	 
//}

//int main(){
//
//int n1, n2;
//Printf("Enter the first and second number for the operation: ");
//scanf("%f, %f", &n1, &n2);
//}
//
//int addition(int a, int b){
//	int sum = a+b;
//	printf("The sum is %f", sum);
//}
// int subtraction(int a, int b){
//	int sub = a-b;
//	printf("The sub is %f", sub);
//}
//int division(int a, int b){
//	int div = a/b;
//	printf("The div is %f", div);
//}
// int modulus(int a, int b){
//	int mod = a%b;
//	printf("The mod is %f", mod);
//}
// addition(4,5);
// subtraction(6,5);
// division(20,5);
// module(4,3);

int addition(int a, int b){
	int c = a+b;
	return c;
}
int main(){
	int n1, n2, val;
	printf("enter the value of first number:\n");
	scanf("%d",&n1);
	printf("enter the value of second number:\n");
	scanf("%d",&n2);
	
	val = addition(n1, n2);
	printf("Sum of the entered numbers: %d", val);
}


 int main(){

 int a, b, c;
 a=2;
 b=5;
 printf("value of a is %d\n", a);
  printf("value of b is %d\n", b);
 //to swap
 c=a;
 a=b;
 b=c;
 printf("value of a is %d\n", a);
printf("value of b is %d\n", b);
 }

 int main()
 {
 	int a=0, b=1;
 	int c,i;
 	printf("%d, %d",a,b);
 	
 	for(i=2; i<=5; i++){
 		c = a+b;
 		a=b;
 		b=c;
 		printf(" %d,", c);
	 }
	
	return 0;
 }
 
  int main(){
  	int number;
  	printf("enter the number:");
  	scanf("%d",&number);
  	if(number % 2 == 0){
  		printf("Number is even");
	  }else{
	  	printf("odd number");
	  }
  }

    int main(){
    	int num1=300, num2 = 40 ,num3 =60;
    	if(num1>num2 && num1>num3){
    		printf("greatest:%d", num1);
		}else if(num2>num1 && num2>num3){
			printf("greatest:%d", num2);
		}else
		{
			printf("greatest:%d", num3);
		}
	}
	  
	   
	   //vowels
	   int main(){
	   	
	   	char letter;
	   	int isLowerCaseVowel,isUpperCaseVowel;
	   	printf("enter the character:");
	   	scanf("%c", &letter);
	   	
	   	isLowerCaseVowel = (letter =='a'|| letter =='e'|| letter =='i'|| letter =='o'|| letter =='u');
	    isUpperCaseVowel = (letter =='A'|| letter =='E'|| letter =='I'|| letter =='O'|| letter =='U');
	   	
	   	if(letter == isLowerCaseVowel || isUpperCaseVowel ){
	   		printf("%d is vowel", letter);
		   }else{
		   	printf("%d is consonent", letter);
		   }
	   }
	   
	    //Ternary operator
	    //syntax: condition? statement(if true): statemnt(not true)
	    int main(){
	    	int age;
	    	printf("enter your age:");
	    	scanf("%d", &age);
	    	 age> 22? printf("elligiable"): printf("nonElligiable");
		}
	
		 
		 //switch
		  int main(){
		  	int num;
		  	printf("Enter the number:");
		  	scanf("%d", &num);
		  	switch(num){
		  		case 1:printf("It is sunday");
		  				break;
		  		case 2:printf("It is monday");
		  				break;
		  		case 3:printf("It is tuesday");
		  				break;
		  		default: printf('invalid option');
			  }
		  }
		 	 
		 	 //Loop
		 	 //while
		 	  int main(){
		 	  	int i=20;
		 	  
		 	  	while(i<10){
		 	  		printf("you are a chilld.\n");
		 	  		i++;
				   }
				do{
					printf("you are a youth.\n");
					i++;
				}while(i>10 && i<30);
				for(i=30; i<50; i++){
					printf("you are a adult.\n");
				}
			   }
			   
			   //if condition:tells program to perform certain condition ony
			   //syntax if(condition){ statement }
			   
			   int main(){
			   	int age;
			   	printf("Enter your age:");
			   	scanf("%d", &age);
			   	if(age>18){
			   		printf("voter");
				   }
			   }
			   
			   //break and continue: break the entire loop; continue=Bypass
			    int main(){
			   	int i;
			   	for(i=1;i<=100;i++){
			   		if(i == 10){
			   			break;
					   }
			   		printf("%d\n", i);
				   }
			   }
			   int main(){
			   	int i;
			   	for(i=1;i<=100;i++){
			   		if(i == 10){
			   			continue;
					   }
			   		printf("%d\n", i);
				   }
			   }
			
			   int main()
			   {
			   int i,j;
			   for(i=5; i>=1; i--){
			   		for(j=5; j>=i; j--){
			   			printf("*");
				   }
					printf("\n");
			   }
			   }
			      
			     
			     //function:A set of task that perform certain opertaion.
			     void printname(); //function defination
			     int main(){
			     	printname(); //function call 
				 }
				  void printname(){
				  	printf("My name is Ram");
				  }
				 
				  int main(){
				  	int num1, num2;
				  	printf("Enter the first number:");
				  	scanf("%d", &num1);
				  	printf("Enter the second number:");
				  	scanf("%d", &num2);
				  	printf("the sum is:%d\n", sum(num1, num2));
				  	printf("the difference is:%d\n", sub(num1, num2));
				  }
			    int sum(int a, int b){
			    	
			    	int c = a+b;
			    	return c;
				}
				int sub(int a, int b){
			    	
			    	int c = a-b;
			    	return c;
				}
			   */
			    int main(){
			    	int a, b, i;
			    	a=0;
			    	b=5;
			    	for(i=0; i<20; i++){
			    		a= a+3;
					}
					for(i=5; i<20;i++){
						b=b+2;
					}
					if(b>a && b==20){
						printf("B reached the destination.");
					}
				}
  
