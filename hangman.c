#include<stdio.h>
#include<string.h>
main()
{
        char str[20];	char b[20];	char let;
        int len,i=0,life,flag=0;
	int vis[20];fflush(stdin);
	printf("Enter a string \n");	gets(str);
        len=strlen(str);	life=len;
        printf("the length is %d \n",len);
	//printf("your life is %d \n",life);
//array with 0's
	for(i=0;i<len;i++){	
		b[i]='0';vis[i]=0;
		printf("%c",b[i]);
	}
//while you still have a life	
    while(life!=0&&(strcmp(b,str)!=0))
    {
	   printf("\nLeft out life is:%d\nenter a letter from a to z \n",life);
	   let=getchar();
	  for(i=0;i<len;i++)
           {//compare with the string
	      if(vis[i]!=0&&str[i]!=let)//if char isn't present then decrease 
	      { //i++ 
		flag=1;              	
   	      }
   	      else
              { //if char is present store and print
		for(i=0;i<len;i++)
			if(str[i]==let)
				b[i]=let;vis[i]=1;//same char
      	      }
	      printf("\n");
	      printf("Result is:\n");
	      for(i=0;i<len;i++){	
			printf("%c",b[i]);
	      }
	  }//for cmp
	  if(flag==1){ 
		life-=1;
		 printf("life is %d",life);
	  }	 
	  
	}//while
	for(i=0;i<len;i++){
		if(strcmp(b,str)==0){ 
			printf("you won");
			return 0;
	        }
	   }
     }
