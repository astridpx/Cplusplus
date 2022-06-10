#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Exam{
	
	
	public:
		
		char take;
		int score = 0;
		char q[50];
		char answer[50] = {'c', 'a', 'b', 'a', 'b', 'b', 'c', 'a','c','c', 'a', 'a', 'a', 'c', 'c', 'c', 'c', 'c', 'b', 'b', 'a', 'b', 'b', 'a', 'a', 'b', 'c','c', 'b', 'a',
		 'c', 'a', 'a', 'b', 'a', 'c', 'a', 'b', 'a', 'a', 'a', 'b', 'a', 'a', 'a', 'b', 'a', 'a', 'a', 'a'};
							
		void Quest_display(){
	
	
			do{
			
			for(int a = 1; a <= 1; a++){		
				
				int i = 0;
				
				cout << "1. What is the sum of 9 + 10? \n"
					 << " a. 52 \n"
					 << " b. 27 \n"
					 << " c. 19 \n" //
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				
				cout << "2. If I have 7 apples and get 3 of them, how many apples I have? \n"
					 << " a. 4 \n" //
					 << " b. 6 \n"
					 << " c. 0 \n"
					 <<endl;
					 
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;	 
					 
				cout << "3. What is the sum of 10 + 10 \n"
					 << " a. 15 \n"
					 << " b. 20 \n" //
					 << " c. 25 \n"
					 <<endl;
					
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "4. If you add 7 and 25. What is answer? \n"
					 << " a. 32 \n" //
					 << " b. 20 \n"
					 << " c. 19 \n"
					 <<endl;
					 
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "5. What is 3 + 10? \n"
					 << " a. 23 \n"
					 << " b. 13 \n"//
					 << " c. 20 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
		
				
				cout << "6. What is 20 + 20? \n"
					 << " a. 60 \n"
					 << " b. 40 \n" //
					 << " c. 20 \n"
					 <<endl;
					 
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				
				cout << "7. If you add 13 and 13. What is the answer? \n"
					 << " a. 28 \n"
					 << " b. 24 \n"
					 << " c. 26 \n" //
					 <<endl;
					 
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "8. What is 20 + 80? \n"
					 << " a. 100 \n"//
					 << " b. 200 \n"
					 << " c. 190 \n"
					 <<endl;
					 
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "9. What 80 + 80? \n"
					 << " a. 180 \n"
					 << " b. -180 \n"
					 << " c. 160 \n"//
					 <<endl;
					 
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "10. What is -10 + -10 ?  \n"
					 << " a. -10 \n"
					 << " b. 0 \n"
					 << " c. -20 \n"//
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "11. What is 20 - 20? \n"
					 << " a. 0 \n"//
					 << " b. -20 \n"
					 << " c. -0 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
					 
			
				cout << "12. What 90 - 100? \n"
					 << " a. -10 \n"//
					 << " b. -20 \n"
					 << " c. -12 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				
				cout << "13. If I have 13 orange give you a 7 of them. How many orange you have? \n"
					 << " a. 7 \n" //
					 << " b. 4 \n"
					 << " c. 2 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "14. If you subtract 18 in 9. What is the answer? \n"
					 << " a. 28 \n"
					 << " b. 19 \n"
					 << " c. 9 \n"//
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "15. What is the answer if you subtract 90 in 80? \n"
					 << " a. 21 \n"
					 << " b. 31 \n"
					 << " c. 10 \n"//
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "16. If you have 10 birds and 8 of them got flew. How many birds you still have? \n"
					 << " a. 21 \n"
					 << " b. 43 \n"
					 << " c. 2 \n" //
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "17. What is the answer. 90 - 110? \n"
					 << " a. 10 \n"
					 << " b. -10 \n"
					 << " c. -20 \n"//
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "18. What is answer if you minus 8 in 108. \n"
					 << " a. 8 \n"
					 << " b. 126 \n"
					 << " c. 100 \n"//
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "19. How many apple do you have if you have 1kg and get half of them \n"
					 << " a. 3/4 \n"
					 << " b. 1/2 \n"//
					 << " c. 1 1/2 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "20. What is the answer. You have 10kg  of apples and give you another 10kg. How many apples do you have? \n"
					 << " a. 30kg \n"
					 << " b. 20kg \n"//
					 << " c. 25kg \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "21. What is the product of 8 x 2? \n"
					 << " a. 16 \n"//
					 << " b. 24 \n"
					 << " c. 21 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "22. If you solve this (4 x 4) what is the answer.  \n"
					 << " a. 24 \n"
					 << " b. 16 \n"//
					 << " c. 8 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "23. If you get 10 apples and multiplyit to 3. What is the answer? \n"
					 << " a. 21 \n"
					 << " b. 30 \n"//
					 << " c. none of the above \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "24. If you multiply 10 in 10. What is the answer? \n"
					 << " a. 100 \n"//
					 << " b. 200 \n"
					 << " c. none of  the above \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "25. Multiply. 3 x 6. \n"
					 << " a. 18 \n" //
					 << " b. 19 \n"
					 << " c. 9 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "26. What is the answer. 9 x 9. \n"
					 << " a. 18 \n"
					 << " b. 81 \n"//
					 << " c. 23 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "27. What is the answer. 7 x 3 \n"
					 << " a. 32 \n"
					 << " b. 42 \n"
					 << " c. 21 \n" //
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "28. What is the answer. 8 x 3. \n"
					 << " a. 32 \n"
					 << " b. 43 \n"
					 << " c. 24 \n" //
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "29. What is the answer. 6 x 6 \n"
					 << " a. 35 \n"
					 << " b. 36 \n"//
					 << " c. 37 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "30. What is the answer. 7 x 2. \n"
					 << " a. 14 \n"//
					 << " b. 32 \n"
					 << " c. 21 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "31. If you divide 9 in 0. What is the answer? \n"
					 << " a. 1 \n"
					 << " b. 2 \n"
					 << " c. 0 \n"//
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "32. Divide. 9 / 3. \n"
					 << " a. 3 \n"//
					 << " b. 4 \n"
					 << " c. 5 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "33. What  is the answer. 8 / 4. \n"
					 << " a. 2 \n" //
					 << " b. 5 \n"
					 << " c. 7 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "34. Divide 90 in 10 \n"
					 << " a. 10 \n"
					 << " b. 9 \n" //
					 << " c. 90 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "35. Divide 90 / 80. \n"
					 << " a. 1 \n" //
					 << " b. 2 \n"
					 << " c. 3 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "36. Divide 90 / 3. \n"
					 << " a. 10 \n"
					 << " b. 93 \n"
					 << " c. 30 \n"//
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "37. Divide 45 / 6. \n"
					 << " a. 7.5 \n" //
					 << " b. 32 \n"
					 << " c. 3.3 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "38. Divide 89 / 12 \n"
					 << " a. 21 \n"
					 << " b. 7.41 \n" //
					 << " c. 9.2 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "39. Divide 54 / 9 \n"
					 << " a. 6 \n" //
					 << " b. 3 \n"
					 << " c. 9 \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << " TRUE or FALSE " <<endl;
				cout << "40. Circle has 2 sides. \n"
					 << " a. true \n" //
					 << " b. false \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "41. Rectangle has 4 sides. \n"
					 << " a. true \n"//
					 << " b. false \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "42. Square has 3 sides. \n"
					 << " a. true \n"
					 << " b. false \n" //
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "43. Circle has no sides \n"
					 << " a. true \n"//
					 << " b. false \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "44. Triangle has 3 sides. \n"
					 << " a. true \n"//
					 << " b. false \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "45. Octagon has 8 sides. \n"
					 << " a. true \n"//
					 << " b. false \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "46. Heptagon have 3 sides. \n"
					 << " a. true \n"
					 << " b. false \n"//
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "47. The shape of sun s circle. \n"
					 << " a. true \n"//
					 << " b. false \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "48. The shape of box is cube. \n"
					 << " a. true \n"//
					 << " b. false \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "49. The shape of baksetball ball is circle. \n"
					 << " a. true \n"//
					 << " b. false \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl;
				
				cout << "50. The shape of rugby ball is oval. \n"
					 << " a. true \n"//
					 << " b. false \n"
					 <<endl;
				
				cout << " Answer: ";
				cin >> q[i];
				i++;
				cout <<endl; 
				
			} // end for loop	
			
			
		
		// Display the answer		
			cout << " \t Your answers " <<endl;
			cout <<endl;
	
			for (int x = 0; x <= 49; x++){
				
				if(q[x] == answer[x]){
							
					cout << " \t No." << x+1 << " " << q[x] << " Your answer is correct " <<endl;
					score = score + 1;
					}
				else{
						cout << " \t No." << x+1 << " " << q[x] << " Your answer is wrong " <<endl;
					}
				
				}	
				
				// score
				cout <<endl;
				cout << " Computing your score.... " <<endl;
				Sleep(3000);
				cout <<endl;
				cout << " Your Score is: " << score << "/50 "<<endl;
				
				// Ask to take exam again
				cout <<endl;
				cout << " Do you want to take test again? [ y ] for yes and [ n ]for no: ";
				cin >> take;
				cout <<endl;
		
			while(take != 'y' && take != 'n' ){
				
				cout << " INVVALID INPUT " <<endl;
				
				cout <<endl;
				cout << " Do you want to take test again? [ y ] for yes and [ n ]for no: ";
				cin >> take;
				cout <<endl;
		
			} // whie
			if (take == 'n'){
				
				exit (0);		
			}
	
		}while(take != 'n'); // do while loop
		
	} // void
			
};


int main(){
	
	Exam exam; // object
	
	string name;
	char start_exam;

		
	cout <<endl;
	cout << " MATH FINAL EXAMINATION " <<endl;
	cout << endl;
	
	
		
	cout << " Loading... " <<endl;
	Sleep(1000);
	
	
		cout <<endl;
		cout << " Enter [ y ] for yes and press [ x ] for No " <<endl;
		cout <<endl;
		
	while(start_exam != 'x' && start_exam != 'y' ){
		
		while(start_exam != 'x'){
				
			cout << " Do you want to start the exam?: ";
			cin >> start_exam;
			cout <<endl;	
			
			if(start_exam == 'x'){
				
				cout <<endl;
				cout << " \t Bye, Come again if you're ready to take exam!! " <<endl;
				
				exit(0);
			}
			
			else if(start_exam == 'y' ){
				
				cout << " Enter your name: ";
				cin >> name;
				cout <<endl;
				
				exam.Quest_display();
				
				return 0;
				
			}
			else{
				cout << " INVALID INPUT " <<endl;
				cout <<endl;
			}
			
		} // inner while
		
	} // end of while
	
	
}



