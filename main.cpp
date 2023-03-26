#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;


void displayInstruction () // displayInstruction function definition
{
cout << "-------------------------------------------------------------------------"<<endl;
cout << "|Survey of Student's Perception on Online Learning in Kolej Seri Sarawak|"<<endl;
cout << "-------------------------------------------------------------------------"<<endl;
cout<<"\n";
    cout<<"Dear Respondents,"<<endl;
    cout<<"\tYou are invited to answer this survey."<<endl;
    cout<<"\tPlease respond to the following question that corresponds to your response."<<endl;
    cout<<"\tThe survey is divided into 2 sections:"<<endl;
    cout<<"\tSection A - Demographics"<<endl;
    cout<<"\tSection B - Student's Preception on Online Learning"<<endl;
    cout<<"\tThank you for your time and cooperation."<<endl;

}
void countGender(char, int&, int&); //countGender function prototype
void countGender(char gender, int& maleCounter, int& femaleCounter) //countGender function definition
{

   if (gender == 'M')
   
      maleCounter = maleCounter + 1;

 
   else if(gender == 'F')
     
      femaleCounter = femaleCounter + 1;

}
void determinePeceptionLevel(float, int&, int&, int&, int&, int&); // determinePerceptionLevel function prototype
void determinePerceptionLevel(float AveragePerceptionValue, int& LowPerceptionCounter, int& MediumPerceptionCounter, int& HighPerceptionCounter)//determinePerceptionLevel function definition
{
		if (AveragePerceptionValue>=1.00 && AveragePerceptionValue<=2.33)
	
	      LowPerceptionCounter=LowPerceptionCounter + 1;
	      
	else if (AveragePerceptionValue>=2.34 && AveragePerceptionValue<=3.67)
	      
	     MediumPerceptionCounter=MediumPerceptionCounter+1;
	     
	else if (AveragePerceptionValue>=3.68 && AveragePerceptionValue<=5.00)
	
	     HighPerceptionCounter=HighPerceptionCounter+1;

}
void countInternetSpeed(string, int&, int&, int&, int&, int&); // countInternetSpeed function prototype
void countInternetSpeed(string InternetType, int& GPRScounter, int& EDGEcounter, int& ThreeGcounter , int& FourGcounter , int& FiveGcounter)//count InternetSpeed function definition
{
	    int i = InternetType.compare("GPRS");
	    
	if (i==0)
	
	      GPRScounter=GPRScounter + 1;
	      
	else if (InternetType=="EDGE")
	      
	     EDGEcounter=EDGEcounter+1;
	     
	else if (InternetType=="3G")
	
	     ThreeGcounter=ThreeGcounter+1;
	     
	else if (InternetType=="4G")
	
	     FourGcounter=FourGcounter+1;
	     
	else if (InternetType=="5G")
	
	     FiveGcounter=FiveGcounter+1;
	
	     
	
}
void countInternet(string, int&, int&); //countInternet function prototype
void countInternet(string YesNoInternet, int& yesCounterInternet, int& noCounterInternet) //countInternet function definition
{
		int i = YesNoInternet.compare("Yes");
	if (i==0)
	
	         yesCounterInternet=yesCounterInternet+1;
	
	else if (YesNoInternet=="No")
	
	         noCounterInternet=noCounterInternet+1;
	         
}
void countGadget(string, int&, int&); //countGadget function prototype
void countGadget(string YesNoGadget, int& yesCounterGadget, int& noCounterGadget) //countGadget function definition
{
	   int i = YesNoGadget.compare("Yes");
	   
	if (i==0)
	
	         yesCounterGadget=yesCounterGadget+1;
	
	else if (YesNoGadget=="No")
	         noCounterGadget=noCounterGadget+1;
	         
}
void countSemester(string, int&, int&, int&); //countSemester function prototype
void countSemester(string semester, int& semester1, int& semester2, int& semester3) //countGender function definition
{
   
        int i =semester.compare("Semester 1");
   if  (i==0)
   
             semester1=semester1 + 1;

   else if (semester == "Semester 2")
     
             semester2=semester2 + 1;
     
   else if (semester == "Semester 3")
   
               semester3=semester3 + 1;
   
}

int main()
{
//variables list
//variables for array	
int ID[10];
int index=0;
double marks[10];
//variables for countGender() function
int maleCounter=0;
int femaleCounter=0;
char GenderChoose;
//looping variables
int ProgLoop = 0;
//variables for countSemester() function
string semester;
int semester1=0;
int semester2=0;
int semester3=0;
//variables for countGadget() function
string YesOrNoGadget;
int yesCounterGadget=0;
int noCounterGadget=0;
//variables for countInternet() function
string YesOrNoInternet;
int yesCounterInternet=0;
int noCounterInternet=0;
//variables for countInternetSpeed() function
string InternetSpeedType;
int GPRScounter=0;
int EDGEcounter=0;
int ThreeGcounter=0;
int FourGcounter=0;
int FiveGcounter=0;
//variables for determinePerceptionLevel() function
int Question1=0;
int Question2=0;
int Question3=0;
int SumPerceptionValue=0;
float AveragePerceptionValue=0;
int LowPerceptionCounter=0;
int MediumPerceptionCounter=0;
int HighPerceptionCounter=0;
int TotalRespondent=1;
// if student want to continue survey
char ContinueSurvey;


    while (ProgLoop < 3) //while loop to gather all user input depending on number of respondent
	{
	
    displayInstruction (); //function call displayInstruction()
    cout<<endl<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"SECTION A:DEMOGRAPHIC PROFILE"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Please enter your Student ID: ";
    cin>> ID[index];
    cout<<"Please enter your marks: ";
    cin>> marks[index];
    cout<<"Please enter your gender (M-Male, F-Female): ";
    cin>>GenderChoose;
    countGender(GenderChoose, maleCounter, femaleCounter); //function call countGender()
    cout<<"Please enter your semester(Semester 1, Semester 2, Semester 3):";
    cin.ignore();
    getline(cin,semester);
    countSemester(semester, semester1 , semester2 , semester3);//function call countSemester()
    cout<<"Do you have any computer facility (Smartphone / Computer / Laptop) (Yes/No)? :";
    cin>>YesOrNoGadget;
    countGadget(YesOrNoGadget, yesCounterGadget, noCounterGadget);//function call countGadget()
    cout<<"Do you have internet access (Yes/No)? :";
    cin>>YesOrNoInternet;
    countInternet(YesOrNoInternet, yesCounterInternet, noCounterInternet); //function call countInternet()
    cout<<"What is your internet type speed? (GPRS, EDGE, 3G, 4G, 5G)? :";
    cin>>InternetSpeedType;
    countInternetSpeed(InternetSpeedType, GPRScounter, EDGEcounter, ThreeGcounter, FourGcounter, FiveGcounter); //function call countInternetSpeed()
    
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"SECTION B: STUDENT PERCEPTION ON ONLINE LEARNING"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Choose your answer using Likert Scale below:"<<endl;
    cout<<"1-Strongly Disagree, 2-Disagree, 3-Neither, 4-Agree, 5-Strongly Agree"<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Q1. Using online learning improve my performance in my study:";
    cin>>Question1;
    cout<<"Q2. Using online learning will increase productivity:";
    cin>>Question2;
    cout<<"Q3. Using online learning enchances my effectiveness in my studies:";
    cin>>Question3;
    cout << endl;
    SumPerceptionValue=Question1+Question2+Question3;
    AveragePerceptionValue=SumPerceptionValue/3;
    determinePerceptionLevel(AveragePerceptionValue, LowPerceptionCounter, MediumPerceptionCounter, HighPerceptionCounter);// function call determinePerceptionLevel()
 {
	   
    
            if (AveragePerceptionValue>=1.00 && AveragePerceptionValue<=2.33)
			{
	
	         cout<<"-------------------------------------------------------------Feedback-------------------------------------------------------------------------"<<endl;
	         cout<<"you are doing poorly for online learning, refer to your lecturer to discuss about attending a workshop to help you improve in online learning."<<endl;
	         cout<<"----------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	         
	        }
	else if (AveragePerceptionValue>=2.34 && AveragePerceptionValue<=3.67)
	      {
	
	      cout<<"----------------------------------------------Feedback------------------------------------------------------------------------"<<endl;
	      cout<<"You are doing average, consider refering to lecture if you are thinking of improving your online learning by joining workshop."<<endl;
	      cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
	      
         }
	else if (AveragePerceptionValue>=3.68 && AveragePerceptionValue<=5.00)
     	{
	
	      cout<<"----------Feedback--------------"<<endl;
	      cout<<"You are doing great! Keep it up!"<<endl;
	      cout<<"--------------------------------"<<endl;
	      
     	}

}
     ProgLoop++;
     index++;


}
    cout<<"~~~~~~~~~~~~~~~~~~ DATA ANALYSIS ~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Student's Perception on Online Learning in Kolej Seri Sarawak"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<endl<<endl;
    cout<<"SECTION A: DEMOGRAPHIC PROFILE"<<endl;
    cout<<"~~~~~~"<<endl;
    cout<<"Gender"<<endl;
    cout<<"~~~~~~"<<endl;
    cout<<"Number of male responden: "<< maleCounter<<endl;
    cout<<"Number of female responden: "<< femaleCounter<<endl;
    cout<<endl<<endl;
    cout<<"~~~~~~~~"<<endl;
    cout<<"Semester"<<endl;
    cout<<"~~~~~~~~"<<endl;
    cout<<"Semester 1 student:"<<semester1<<endl;
    cout<<"Semester 2 student:"<<semester2<<endl;
    cout<<"Semester 3 student:"<<semester3<<endl;
    cout<<endl<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Information about student gadget"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Number of student who have gadget- "<<yesCounterGadget<<endl;
    cout<<"Number of student who dont have gadget-"<<noCounterGadget<<endl;
    cout<<endl<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Information about student's internet"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Number of student who have internet- "<<yesCounterInternet<<endl;
    cout<<"Number of student who dont have internet- "<<noCounterInternet<<endl;
    cout<<endl<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Student's Internet data speed"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"GPRS-"<<GPRScounter<<endl;
    cout<<"EDGE-"<<EDGEcounter<<endl;
    cout<<"3G-"<<ThreeGcounter<<endl;
    cout<<"4G-"<<FourGcounter<<endl;
    cout<<"5G-"<<FiveGcounter<<endl;
    cout<<endl<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Students Perception on online learning"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Low-"<<LowPerceptionCounter<<endl;
    cout<<"Medium-"<<MediumPerceptionCounter<<endl;
    cout<<"High-"<<HighPerceptionCounter<<endl;
    cout<<endl<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<" List of respondent who completed the survey"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<endl<<endl;
    for (index=0; index < 3; index++) // for loop to display Respondent who answered the survey
    {
           cout<< "Respondent "<<TotalRespondent<<": "<< ID[index]<<endl;
           cout<< "Test Mark:"<<marks[index]<<endl;
           TotalRespondent++;
           
    }
}
