#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 100
#define DEBUG 1

//糟糕的注释      格式
  //缩进不一致的注释


typedef struct{
int id;char name[50];float score;}Student;

typedef struct Node{int data;struct Node*next;}ListNode;

enum Status{SUCCESS,FAILURE,ERROR};

int global_var=0;

void badly_formatted_function(int param1,int*param2,char**param3){
if(param1>0){*param2=param1*2;
if(DEBUG){printf("Debug: param1=%d\n",param1);}}else{*param2=0;}
}

int*create_array(int size){int*arr=(int*)malloc(size*sizeof(int));if(arr==NULL){return NULL;}for(int i=0;i<size;i++){arr[i]=i*i;}return arr;}

void process_data(int*data,int length){
switch(length){
case 1:printf("Single element: %d\n",data[0]);break;
case 2:printf("Two elements: %d, %d\n",data[0],data[1]);break;
default:printf("Multiple elements: ");for(int i=0;i<length;i++){printf("%d ",data[i]);}printf("\n");break;}
}

int calculate_sum(int a,int b,int c){return a+b+c;}

float calculate_average(int*values,int count){if(count==0){return 0.0f;}int sum=0;for(int i=0;i<count;i++){sum+=values[i];}return(float)sum/count;}

void nested_conditions_example(int x,int y,int z){
if(x>0)if(y>0)if(z>0){printf("All positive\n");}else{printf("Z not positive\n");}else{printf("Y not positive\n");}else{printf("X not positive\n");}
}

int main(void){
printf("=== Badly Formatted C Code Example ===\n");

int*numbers=create_array(5);
if(numbers==NULL){fprintf(stderr,"Memory allocation failed!\n");return EXIT_FAILURE;}

process_data(numbers,5);

Student s1={1,"John Doe",85.5f};Student s2={2,"Jane Smith",92.0f};

printf("Student 1: ID=%d, Name=%s, Score=%.1f\n",s1.id,s1.name,s1.score);
printf("Student 2: ID=%d, Name=%s, Score=%.1f\n",s2.id,s2.name,s2.score);

int a=10,b=20,c=30;
int sum=calculate_sum(a,b,c);
float avg=calculate_average(numbers,5);

printf("Sum: %d, Average: %.2f\n",sum,avg);

//复杂的表达式和括号
int result=((a>b)?a:b)+((c>sum)?c:sum)*2-((a+b+c)/3);

printf("Complex result: %d\n",result);

nested_conditions_example(1,1,1);
nested_conditions_example(1,1,0);

//糟糕的指针和数组操作
int*ptr=numbers;
printf("Array elements: ");
while(*ptr){printf("%d ",*ptr);ptr++;}printf("\n");

//宏定义使用问题
#ifdef DEBUG
printf("Debug mode enabled\n");
#else
printf("Debug mode disabled\n");
#endif

//内存泄漏风险（没有free）
//free(numbers);

return 0;}
