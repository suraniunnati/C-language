// Write a Program to create a menu-driven program for Telecom call service
// conversation using nested switch case.

#include <stdio.h>
int main(){

	int chose,english,hindi,gujrati;

	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujarati\n");

	printf("Enter your choice:");
	scanf("%d",&chose);

	switch(chose){

	case 1:{

		     printf("Press 1 for Internet Recharge\n");
	         printf("Press 2 for Top-up Recharge\n");
	         printf("Press 3 for Special Recharge\n");

	         printf("Enter your choice:");
	         scanf("%d",&english);

	             switch(english){
	               case 1:{
         
	             	printf("tamaru internet recharge safaltapurvak thay gyu che..");
	             	break;
	              }
	                case 2:{

	             	printf("tamaru Top-up recharge safaltapurvak thay gyu che..");
	             	break;
	              }
	                case 3:{

	             	printf("tamaru Special recharge safaltapurvak thay gyu che..");
	             	break;
	              }
	       }
	       break;
	   }

	case 2:{

		     printf("Internet Recharge ke liye 1 dabaiye\n");
	         printf("Top-up Recharge ke liye 2 dabaiye\n");
	         printf("Special Recharge ke liye 3 dabaiye\n");

	         printf("Enter your choice:");
	         scanf("%d",&hindi);

	             switch(hindi){
	               case 1:{
         
	             	printf("Aapne safaltapurvak Internet Recharge kar liya he");
	             	break;
	              }
	                case 2:{

	             	printf("Aapne safaltapurvak Top-up Recharge kar liya he");
	             	break;
	              }
	                case 3:{

	             	printf("Aapne safaltapurvak Special Recharge kar liya he");
	             	break;
	              }
	          }
	          break;   
	      }

	   case 3:{

		     printf("Internet Recharge mate 1 dabavo\n");
	         printf("Top-up Recharge mate 2 dabavo\n");
	         printf("Special Recharge mate 3 dabavo\n");

	         printf("Enter your choice:");
	         scanf("%d",&gujrati);

	             switch(gujrati){
	               case 1:{
         
	             	printf("Tame safaltapurvak Internet Recharge karyu chhe.");
	             	break;
	              }
	                case 2:{

	             	printf("Tame safaltapurvak Top-up Recharge karyu chhe.");
	             	break;
	              }
	                case 3:{

	             	printf("Tame safaltapurvak Special Recharge karyu chhe.");
	             	break;
	              }
	           }  
	           break;   
	       }
	       
	        default:
       
            printf("plese select your choice in this number 1,2,3");
            break;
	    }
 }

