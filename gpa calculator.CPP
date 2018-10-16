 //gpa,cgpa calculator for the department of CSE
#include"stdio.h"
#include"conio.h"
int ocre(char gr)
{
	if(gr=='s')
		return 10;
	else if(gr=='a')
		return 9;
	else if(gr=='b')
		return 8;
	else if(gr=='c')
		return 7;
	else if(gr=='d')
		return 6;
	else if(gr=='e')
		return 5;
	else return 0;
}

int twcre(char gr)
{
	if(gr=='s')
		return 20;
	else if(gr=='a')
		return 18;
	else if(gr=='b')
		return 16;
	else if(gr=='c')
		return 14;
	else if(gr=='d')
		return 12;
	else if(gr=='e')
		return 10;
	else return 0;
}
int thcre(char gr)
{
	if(gr=='s')
		return 30;
	else if(gr=='a')
		return 27;
	else if(gr=='b')
		return 24;
	else if(gr=='c')
		return 21;
	else if(gr=='d')
		return 18;
	else if(gr=='e')
		return 15;
	else return 0;
}
int fcre(char gr)
{
	if(gr=='s')
		return 40;
	else if(gr=='a')
		return 36;
	else if(gr=='b')
		return 32;
	else if(gr=='c')
		return 28;
	else if(gr=='d')
		return 24;
	else if(gr=='e')
		return 20;
	else return 0;
}
int scre(char gr)
{

	if(gr=='s')
		return 60;
	else if(gr=='a')
		return 54;
	else if(gr=='b')
		return 48;
	else if(gr=='c')
		return 42;
	else if(gr=='d')
		return 36;
	else if(gr=='e')
		return 30;
	else return 0;

}
void main()
{
	float gpa,cgpa,gp[8]={0},temp=0,pt=0,point[8][9]={0};
	int sem,choice,till,i,j;
	char grade[8][9]={'\0'};
	clrscr();
	printf("\t\t\t---------GPA/CGPA CALCULATOR(CSE)---------\t\t\t\n");
	printf("ENTER YOUR CHOICE\n");
	printf("\n1.GPA\n2.CGPA\n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		{
			printf("\nENTER SEMESTER(I,II,III,....,VIII)\n");
			scanf("%d",&sem);
			printf("\nENTER YOUR GRADES\n");
			if(sem==1)
			{
				printf("\nTECHNICAL ENGLISH-I\t");
				scanf("%s",&grade[0][0]);
				point[0][0]=fcre(grade[0][0]);
				printf("\nMATHEMATICS-I\t");
				scanf("%s",&grade[0][1]);
				point[0][1]=fcre(grade[0][1]);
				printf("\nENGINEERING PHYSICS-I\t");
				scanf("%s",&grade[0][2]);
				point[0][2]=thcre(grade[0][2]);
				printf("\nENGINEERING CHEMISTRY-I\t");
				scanf("%s",&grade[0][3]);
				point[0][3]=thcre(grade[0][3]);
				printf("\nENGINEERING GRAPHICS\t");
				scanf("%s",&grade[0][4]);
				point[0][4]=fcre(grade[0][4]);
				printf("\nCOMPUTER PROGRAMMING\t");
				scanf("%s",&grade[0][5]);
				point[0][5]=thcre(grade[0][5]);
				printf("\nCOMPUTER PRACTICES LAB\t");
				scanf("%s",&grade[0][6]);
				point[0][6]=twcre(grade[0][6]);
				printf("\nENGINEERING PRACTICES LAB\t");
				scanf("%s",&grade[0][7]);
				point[0][7]=twcre(grade[0][7]);
				printf("\nPHYSICS CHEMISTRTY LAB-I\t");
				scanf("%s",&grade[0][8]);
				point[0][8]=ocre(grade[0][8]);
				for(i=0;i!=9;i++)
				{
					pt+=point[0][i];
				}
				gpa=pt/26;
				printf("\nYOUR GPA IN SEM-I IS %f",gpa);
			}
			if(sem==2)
			{       pt=0;
				printf("\nTECHNICAL ENGLISH-II\t");
				scanf("%s",&grade[1][0]);
				point[1][0]=fcre(grade[1][0]);
				printf("\nMATHEMATICS-II\t");
				scanf("%s",&grade[1][1]);
				point[1][1]=fcre(grade[1][1]);
				printf("\nENGINEERING PHYSICS-II\t");
				scanf("%s",&grade[1][2]);
				point[1][2]=thcre(grade[1][2]);
				printf("\nENGINEERING CHEMISTRY-II\t");
				scanf("%s",&grade[1][3]);
				point[1][3]=thcre(grade[1][3]);
				printf("\nDPSD\t");
				scanf("%s",&grade[1][4]);
				point[1][4]=thcre(grade[1][4]);
				printf("\nPDS-I\t");
				scanf("%s",&grade[1][5]);
				point[1][5]=thcre(grade[1][5]);
				printf("\nDS LAB-1\t");
				scanf("%s",&grade[1][6]);
				point[1][6]=twcre(grade[1][6]);
				printf("\nDIGITAL LAB\t");
				scanf("%s",&grade[1][7]);
				point[1][7]=twcre(grade[1][7]);
				printf("\nPHYSICS CHEMISTRTY LAB-II\t");
				scanf("%s",&grade[1][8]);
				point[1][8]=ocre(grade[1][8]);
				for(i=0;i!=9;i++)
				{
					pt+=point[1][i];
				}
				gpa=pt/25;
				printf("\nYOUR GPA IN SEM-II IS %f",gpa);
			}
			if(sem==3)                                                          
			{       pt=0;
				printf("\nTRANSFORMS AND PARTIAL DIFFERENTIAL EQUATIONS\t");  // 4
				scanf("%s",&grade[2][0]);
				point[2][0]=fcre(grade[2][0]);
				printf("\nPDS-II\t");                             
				scanf("%s",&grade[2][1]);
				point[2][1]=fcre(grade[2][1]);
				printf("\nDBMS\t");                             
				scanf("%s",&grade[2][2]);
				point[2][2]=thcre(grade[2][2]);
				printf("\nCOMPUTER ARCHITECTURE\t");              
				scanf("%s",&grade[2][3]);
				point[2][3]=thcre(grade[2][3]);
				printf("\nANALOG AND DIGITAL COMMUNICATION\t");               
				scanf("%s",&grade[2][4]);
				point[2][4]=thcre(grade[2][4]);
				printf("\nENVIRONMENTAL SCIENCE AND ENGINEERING\t");        
				scanf("%s",&grade[2][5]);
				point[2][5]=thcre(grade[2][5]);
				printf("\nPDS LAB-II");                                       
				scanf("%s",&grade[2][6]);
				point[2][5]=twcre(grade[2][6]);
				printf("\nDBMS LAB");                                       
				scanf("%s",&grade[2][7]);
				point[2][7]=twcre(grade[2][7]);
				for(i=0;i!=8;i++)
				{
					pt+=point[2][i];
				}
				gpa=pt/23;
				printf("\nYOUR GPA IN SEM-III IS %f",gpa);
			}
			if(sem==4)
			{       pt=0;
				printf("\nPROBABILITY AND QUEUEING THEORY\t");                
				scanf("%s",&grade[3][0]);
				point[3][0]=fcre(grade[3][0]);
				printf("\nCOMPUTER NETWORKS\t");			      
				scanf("%s",&grade[3][1]);
				point[3][1]=thcre(grade[3][1]);
				printf("\nOS\t");                                             
				scanf("%s",&grade[3][2]);
				point[3][2]=thcre(grade[3][2]);
				printf("\nDESIGN AND OF ALGORITHMS\t");                        
				scanf("%s",&grade[3][3]);
				point[3][3]=thcre(grade[3][3]);
				printf("\nMICROPROCESSOR AND MICROCONTOLLER\t");              
				scanf("%s",&grade[3][4]);
				point[3][4]=thcre(grade[3][4]);
				printf("\nSOFTWARE ENGINEERING\t");                           
				scanf("%s",&grade[3][5]);
				point[3][5]=thcre(grade[3][5]);
				printf("\nNETWORKS LABORATORY\t");                           
				scanf("%s",&grade[3][6]);
				point[3][6]=twcre(grade[3][6]);
				printf("\nMICROPROCESSOR AND MICROCONTOLLER LAB\t");          
				scanf("%s",&grade[3][7]);
				point[3][7]=twcre(grade[3][7]);
				printf("\nOS LAB\t");                                         
				scanf("%s",&grade[3][8]);
				point[3][8]=twcre(grade[3][8]);
				for(i=0;i!=9;i++)
				{
					pt+=point[3][i];
				}
				gpa=pt/25;
				printf("\nYOUR GPA IN SEM-IV IS %f",gpa);
			}
			if(sem==5)
			{       pt=0;
				printf("\nDISCRETE MATHEMATICS\t");                           
				scanf("%s",&grade[4][0]);
				point[4][0]=fcre(grade[4][0]);
				printf("\nINTERNET PROGRAMMING\t");                           
				scanf("%s",&grade[4][1]);
				point[4][1]=fcre(grade[4][1]);
				printf("\nOBJECT ORIENTED ANALYSIS AND DESIGN\t");           
				scanf("%s",&grade[4][2]);
				point[4][2]=thcre(grade[4][2]);
				printf("\nTHEORY OF COMPUTATION\t");                          
				scanf("%s",&grade[4][3]);
				point[4][3]=thcre(grade[4][3]);
				printf("\nCOMPUTER GRAPHICS\t");                              
				scanf("%s",&grade[4][4]);
				point[4][4]=thcre(grade[4][4]);
				printf("\nCASE TOOLS LAB\t");                                 
				scanf("%s",&grade[4][5]);
				point[4][5]=twcre(grade[4][5]);
				printf("\nINTERNET PROGRAMMING LAB\t");                      
				scanf("%s",&grade[4][6]);
				point[4][6]=twcre(grade[4][6]);
				printf("\nCOMPUTER GRAPHICS LAB\t");                          
				scanf("%s",&grade[4][7]);
				point[4][7]=twcre(grade[4][7]);
				for(i=0;i!=8;i++)
				{
					pt+=point[4][i];
				}
				gpa=pt/23;
				printf("\nYOUR GPA IN SEM-V IS %f",gpa);
			}
			if(sem==6)
			{       pt=0;
				printf("\nDISTRIBUTED SYSTEMS\t");                           
				scanf("%s",&grade[5][0]);
				point[5][0]=thcre(grade[5][0]);
				printf("\nMOBILE COMPUTING\t");				      
				scanf("%s",&grade[5][1]);
				point[5][1]=thcre(grade[5][1]);
				printf("\nCOMPILER DESIGN\t");                                
				scanf("%s",&grade[5][2]);
				point[5][2]=thcre(grade[5][2]);
				printf("\nDSP\t");                                            
				scanf("%s",&grade[5][3]);
				point[5][3]=fcre(grade[5][3]);
				printf("\nARTIFICIAL INTELLIGENCE\t");                        
				scanf("%s",&grade[5][4]);
				point[5][4]=thcre(grade[5][4]);
				printf("\nELECTIVE-I\t");                                    
				scanf("%s",&grade[5][5]);
				point[5][5]=thcre(grade[5][5]);
				printf("\nMOBILE APPLICATION DEVELOPMENT LAB\t");            
				scanf("%s",&grade[5][6]);
				point[5][6]=twcre(grade[5][6]);
				printf("\nCOMPILER LAB\t");                                   
				scanf("%s",&grade[5][7]);
				point[5][7]=twcre(grade[5][7]);
				printf("\nCOMMUNICATION AND SOFT SKILLS LAB\t");             
				scanf("%s",&grade[5][8]);
				point[5][8]=twcre(grade[5][8]);
				for(i=0;i!=9;i++)
				{
					pt+=point[5][i];
				}
				gpa=pt/25;
				printf("\nYOUR GPA IN SEM-VI IS %f",gpa);

			}
			if(sem==7)
			{       pt=0;
				printf("\nCRYOGRAPHY AND NETWORK SECURITY\t");               
				scanf("%s",&grade[6][0]);
				point[6][0]=thcre(grade[6][0]);
				printf("\nGRAPH THEORY AND APPLICATIONS\t");                  
				scanf("%s",&grade[6][1]);
				point[6][1]=thcre(grade[6][1]);
				printf("\nGRID AND CLOUD COMPUTING\t");                       
				scanf("%s",&grade[6][2]);
				point[6][2]=thcre(grade[6][2]);
				printf("\nRESOURCE MANAGEMENT TECHNIQUES\t");                 
				scanf("%s",&grade[6][3]);
				point[6][3]=thcre(grade[6][3]);
				printf("\nELECTIVE-II\t");                                    
				scanf("%s",&grade[6][4]);
				point[6][4]=thcre(grade[6][4]);
				printf("\nELECTIVE-III\t");                                   
				scanf("%s",&grade[6][5]);
				point[6][5]=thcre(grade[6][5]);
				printf("\nSECURITY LAB\t");                                   
				scanf("%s",&grade[6][6]);
				point[6][6]=twcre(grade[6][6]);
				printf("\nGRID AND CLOUD COMPUTING LAB\t");                   
				scanf("%s",&grade[6][7]);
				point[6][7]=twcre(grade[6][7]);
				for(i=0;i!=8;i++)
				{
					pt+=point[6][i];
				}
				gpa=pt/22;
				printf("\nYOUR GPA IN SEM-VII IS %f",gpa);
			}
			if(sem==8)
			{       pt=0;
				printf("\nMULTI-CORE ARCHITECTURE PROGRAMMING\t");           
				scanf("%s",&grade[7][0]);
				point[7][0]=thcre(grade[7][0]);
				printf("\nELECTIVE-IV\t");                                    
				scanf("%s",&grade[7][1]);
				point[7][1]=thcre(grade[7][1]);
				printf("\nELECTIVE-V\t");                                     
				scanf("%s",&grade[7][2]);
				point[7][2]=thcre(grade[7][2]);
				printf("\nPROJECT WORK\t");                                   
				scanf("%s",&grade[7][3]);
				point[7][3]=scre(grade[7][3]);
				for(i=0;i!=4;i++)
				{
					pt+=point[7][i];
				}
				gpa=pt/15;
				printf("\nYOUR GPA IN SEM-VIII IS %f",gpa);
			}
		   break;
		  }
	case 2:
		{
			printf("\nENTER TILL WHICH SEMESTER CGPA TO BE FOUND\n");
			scanf("%d",&till);
			i=0;
/*sem1*/			printf("\nTECHNICAL ENGLISH-I\t");
				scanf("%s",&grade[0][0]);
				point[0][0]=fcre(grade[0][0]);
				printf("\nMATHEMATICS-I\t");
				scanf("%s",&grade[0][1]);
				point[0][1]=fcre(grade[0][1]);
				printf("\nENGINEERING PHYSICS-I\t");
				scanf("%s",&grade[0][2]);
				point[0][2]=thcre(grade[0][2]);
				printf("\nENGINEERING CHEMISTRY-I\t");
				scanf("%s",&grade[0][3]);
				point[0][3]=thcre(grade[0][3]);
				printf("\nENGINEERING GRAPHICS\t");
				scanf("%s",&grade[0][4]);
				point[0][4]=fcre(grade[0][4]);
				printf("\nCOMPUTER PROGRAMMING\t");
				scanf("%s",&grade[0][5]);
				point[0][5]=thcre(grade[0][5]);
				printf("\nCOMPUTER PRACTICES LAB\t");
				scanf("%s",&grade[0][6]);
				point[0][6]=twcre(grade[0][6]);
				printf("\nENGINEERING PRACTICES LAB\t");
				scanf("%s",&grade[0][7]);
				point[0][7]=twcre(grade[0][7]);
				printf("\nPHYSICS CHEMISTRTY LAB-I\t");
				scanf("%s",&grade[0][8]);
				point[0][8]=ocre(grade[0][8]);
				pt=0;
				for(i=0;i!=9;i++)
				{
					pt+=point[0][i];
				}
				gp[0]=pt/26;
				printf("\nYOUR GPA IN SEM-I IS %f",gp[0]);
			j=0;
			if(j==(till-1))
			{
				goto out;
			}
			j++;
/*sem2*/			printf("\nTECHNICAL ENGLISH-II\t");
				scanf("%s",&grade[1][0]);
				point[1][0]=fcre(grade[1][0]);
				printf("\nMATHEMATICS-II\t");
				scanf("%s",&grade[1][1]);
				point[1][1]=fcre(grade[1][1]);
				printf("\nENGINEERING PHYSICS-II\t");
				scanf("%s",&grade[1][2]);
				point[1][2]=thcre(grade[1][2]);
				printf("\nENGINEERING CHEMISTRY-II\t");
				scanf("%s",&grade[1][3]);
				point[1][3]=thcre(grade[1][3]);
				printf("\nDPSD\t");
				scanf("%s",&grade[1][4]);
				point[1][4]=thcre(grade[1][4]);
				printf("\nPDS-I\t");
				scanf("%s",&grade[1][5]);
				point[1][5]=thcre(grade[1][5]);
				printf("\nDS LAB-1\t");
				scanf("%s",&grade[1][6]);
				point[1][6]=twcre(grade[1][6]);
				printf("\nDIGITAL LAB\t");
				scanf("%s",&grade[1][7]);
				point[1][7]=twcre(grade[1][7]);
				printf("\nPHYSICS CHEMISTRTY LAB-II\t");
				scanf("%s",&grade[1][8]);
				point[1][8]=ocre(grade[1][8]);
				pt=0;
				for(i=0;i!=9;i++)
				{
					pt+=point[1][i];
				}
				gp[1]=pt/25;
				printf("\nYOUR GPA IN SEM-II IS %f",gp[1]);
			if(j==(till-1))
			{
				goto out;
			}
			j++;
/*sem3*/				printf("\nTRANSFORMS AND PARTIAL DIFFERENTIAL EQUATIONS\t");  // 4
				scanf("%s",&grade[2][0]);
				point[2][0]=fcre(grade[2][0]);
				printf("\nPDS-II\t");                                         
				scanf("%s",&grade[2][1]);
				point[2][1]=fcre(grade[2][1]);
				printf("\nDBMS\t");                                           
				scanf("%s",&grade[2][2]);
				point[2][2]=thcre(grade[2][2]);
				printf("\nCOMPUTER ARCHITECTURE\t");                          
				scanf("%s",&grade[2][3]);
				point[2][3]=thcre(grade[2][3]);
				printf("\nANALOG AND DIGITAL COMMUNICATION\t");                
				scanf("%s",&grade[2][4]);
				point[2][4]=thcre(grade[2][4]);
				printf("\nENVIRONMENTAL SCIENCE AND ENGINEERING\t");          
				scanf("%s",&grade[2][5]);
				point[2][5]=thcre(grade[2][5]);
				printf("\nPDS LAB-II");                                       
				scanf("%s",&grade[2][6]);
				point[2][5]=twcre(grade[2][6]);
				printf("\nDBMS LAB");                                         
				scanf("%s",&grade[2][7]);
				point[2][7]=twcre(grade[2][7]);
				pt=0;
				for(i=0;i!=8;i++)
				{
					pt+=point[2][i];
				}
				gp[2]=pt/23;
				printf("\nYOUR GPA IN SEM-III IS %f",gp[2]);
			if(j==(till-1))
			{
				goto out;
			}
			j++;
/*sem4*/			printf("\nPROBABILITY AND QUEUEING THEORY\t");                
				scanf("%s",&grade[3][0]);
				point[3][0]=fcre(grade[3][0]);
				printf("\nCOMPUTER NETWORKS\t");			      
				scanf("%s",&grade[3][1]);
				point[3][1]=thcre(grade[3][1]);
				printf("\nOS\t");                                            
				scanf("%s",&grade[3][2]);
				point[3][2]=thcre(grade[3][2]);
				printf("\nDESIGN AND OF ALGORITHMS\t");                        
				scanf("%s",&grade[3][3]);
				point[3][3]=thcre(grade[3][3]);
				printf("\nMICROPROCESSOR AND MICROCONTOLLER\t");              
				scanf("%s",&grade[3][4]);
				point[3][4]=thcre(grade[3][4]);
				printf("\nSOFTWARE ENGINEERING\t");                           
				scanf("%s",&grade[3][5]);
				point[3][5]=thcre(grade[3][5]);
				printf("\nNETWORKS LABORATORY\t");                           
				scanf("%s",&grade[3][6]);
				point[3][6]=twcre(grade[3][6]);
				printf("\nMICROPROCESSOR AND MICROCONTOLLER LAB\t");          
				scanf("%s",&grade[3][7]);
				point[3][7]=twcre(grade[3][7]);
				printf("\nOS LAB\t");                                         
				scanf("%s",&grade[3][8]);
				point[3][8]=twcre(grade[3][8]);
				pt=0;
				for(i=0;i!=9;i++)
				{
					pt+=point[3][i];
				}
				gp[3]=pt/25;
				printf("\nYOUR GPA IN SEM-IV IS %f",gp[3]);
			if(j==(till-1))
			{
				goto out;
			}
			j++;
/*sem5*/			printf("\nDISCRETE MATHEMATICS\t");                           
				scanf("%s",&grade[4][0]);
				point[4][0]=fcre(grade[4][0]);
				printf("\nINTERNET PROGRAMMING\t");                           
				scanf("%s",&grade[4][1]);
				point[4][1]=fcre(grade[4][1]);
				printf("\nOBJECT ORIENTED ANALYSIS AND DESIGN\t");           
				scanf("%s",&grade[4][2]);
				point[4][2]=thcre(grade[4][2]);
				printf("\nTHEORY OF COMPUTATION\t");                          
				scanf("%s",&grade[4][3]);
				point[4][3]=thcre(grade[4][3]);
				printf("\nCOMPUTER GRAPHICS\t");                              
				scanf("%s",&grade[4][4]);
				point[4][4]=thcre(grade[4][4]);
				printf("\nCASE TOOLS LAB\t");                                 
				scanf("%s",&grade[4][5]);
				point[4][5]=twcre(grade[4][5]);
				printf("\nINTERNET PROGRAMMING LAB\t");                      
				scanf("%s",&grade[4][6]);
				point[4][6]=twcre(grade[4][6]);
				printf("\nCOMPUTER GRAPHICS LAB\t");                          
				scanf("%s",&grade[4][7]);
				point[4][7]=twcre(grade[4][7]);
				pt=0;
				for(i=0;i!=8;i++)
				{
					pt+=point[4][i];
				}
				gp[4]=pt/23;
				printf("\nYOUR GPA IN SEM-V IS %f",gp[4]);
			if(j==(till-1))
			{
				goto out;
			}
			j++;
/*sem6*/			printf("\nDISTRIBUTED SYSTEMS\t");                           
				scanf("%s",&grade[5][0]);
				point[5][0]=thcre(grade[5][0]);
				printf("\nMOBILE COMPUTING\t");				      
				scanf("%s",&grade[5][1]);
				point[5][1]=thcre(grade[5][1]);
				printf("\nCOMPILER DESIGN\t");                                
				scanf("%s",&grade[5][2]);
				point[5][2]=thcre(grade[5][2]);
				printf("\nDSP\t");                                            
				scanf("%s",&grade[5][3]);
				point[5][3]=fcre(grade[5][3]);
				printf("\nARTIFICIAL INTELLIGENCE\t");                        
				scanf("%s",&grade[5][4]);
				point[5][4]=thcre(grade[5][4]);
				printf("\nELECTIVE-I\t");                                    
				scanf("%s",&grade[5][5]);
				point[5][5]=thcre(grade[5][5]);
				printf("\nMOBILE APPLICATION DEVELOPMENT LAB\t");            
				scanf("%s",&grade[5][6]);
				point[5][6]=twcre(grade[5][6]);
				printf("\nCOMPILER LAB\t");                                   
				scanf("%s",&grade[5][7]);
				point[5][7]=twcre(grade[5][7]);
				printf("\nCOMMUNICATION AND SOFT SKILLS LAB\t");             
				scanf("%s",&grade[5][8]);
				point[5][8]=twcre(grade[5][8]);
				pt=0;
				for(i=0;i!=9;i++)
				{
					pt+=point[5][i];
				}
				gp[5]=pt/25;
				printf("\nYOUR GPA IN SEM-VI IS %f",gp[5]);

			if(j==(till-1))
			{
				goto out;
			}
			j++;
/*sem7*/			printf("\nCRYOGRAPHY AND NETWORK SECURITY\t");               
				scanf("%s",&grade[6][0]);
				point[6][0]=thcre(grade[6][0]);
				printf("\nGRAPH THEORY AND APPLICATIONS\t");                  
				scanf("%s",&grade[6][1]);
				point[6][1]=thcre(grade[6][1]);
				printf("\nGRID AND CLOUD COMPUTING\t");                       
				scanf("%s",&grade[6][2]);
				point[6][2]=thcre(grade[6][2]);
				printf("\nRESOURCE MANAGEMENT TECHNIQUES\t");                 
				scanf("%s",&grade[6][3]);
				point[6][3]=thcre(grade[6][3]);
				printf("\nELECTIVE-II\t");                                    
				scanf("%s",&grade[6][4]);
				point[6][4]=thcre(grade[6][4]);
				printf("\nELECTIVE-III\t");                                  
				scanf("%s",&grade[6][5]);
				point[6][5]=thcre(grade[6][5]);
				printf("\nSECURITY LAB\t");                                   
				scanf("%s",&grade[6][6]);
				point[6][6]=twcre(grade[6][6]);
				printf("\nGRID AND CLOUD COMPUTING LAB\t");                   
				scanf("%s",&grade[6][7]);
				point[6][7]=twcre(grade[6][7]);
				pt=0;
				for(i=0;i!=8;i++)
				{
					pt+=point[6][i];
				}
				gp[6]=pt/22;
				printf("\nYOUR GPA IN SEM-VII IS %f",gp[6]);
			if(j==(till-1))
			{
				goto out;
			}
			j++;
					printf("\nMULTI-CORE ARCHITECTURE PROGRAMMING\t");           //  3
				scanf("%s",&grade[7][0]);
				point[7][0]=thcre(grade[7][0]);
				printf("\nELECTIVE-IV\t");                                    
				scanf("%s",&grade[7][1]);
				point[7][1]=thcre(grade[7][1]);
				printf("\nELECTIVE-V\t");                                     
				scanf("%s",&grade[7][2]);
				point[7][2]=thcre(grade[7][2]);
				printf("\nPROJECT WORK\t");                                   
				scanf("%s",&grade[7][3]);
				point[7][3]=scre(grade[7][3]);
				pt=0;
				for(i=0;i!=4;i++)
				{
					pt+=point[7][i];
				}
				gp[7]=pt/15;
				printf("\nYOUR GPA IN SEM-VIII IS %f\n",gp[7]);
			if(j==(till-1))
			{
				goto out;
			}

		}break;
		default:	printf("ENTER 1 OR 2 ONLY");
	}
	out :
	if(choice==2)
	{
		for(i=0;i!=till;i++)
			temp+=gp[i];
		cgpa=temp/till;
		printf("\nYOUR CGPA TILL SEMESTER %d IS %f\n",till,cgpa);
	}
	getch();
}
