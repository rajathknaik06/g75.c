/*Design a program for Sasha and Brenda's game that takes the number of rounds 't' as input. For each round, input the scores 'x' for Sasha and 'y' for Brenda. The winner of each round is determined as follows:



If Sasha's score ('x') is greater than Brenda's score ('y'), Sasha wins.
If 'x' is equal to 'y', it's a tie.
Otherwise, Brenda wins. 


Display the winner's name for each round.

Input format :
The first line contains an integer 't' representing the number of rounds.

For each of the next 't' lines, the input consists of two space-separated integers 'x' and 'y', representing the scores of Sasha and Brenda, respectively, for a particular round.

Output format :
For each test case, the output prints the result of that round.

If x is greater than y, the output prints "Sasha".
If x is equal to y, the output prints "Tie".
Otherwise, the output prints "Brenda"*/

#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x>y) {
	        printf("Sasha\n");
	    }
	    else if(x==y) {
	       printf("Tie\n");
	    }
	    else{
	       printf("Brenda\n");
	    }
	}
		
	return 0;
}
