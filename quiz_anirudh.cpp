#include <stdio.h>
#include <string>
int fun_call = 0, score = 0;
void displayQuestion(const char *question, const char *optionA, const char *optionB, const char *optionC, const char *optionD)
{
    printf("%s\n", question);
    printf("A) %s\n", optionA);
    printf("B) %s\n", optionB);
    printf("C) %s\n", optionC);
    printf("D) %s\n", optionD);
}
int checkAnswer(char userChoice, char correctAnswer)
{
    if (userChoice == correctAnswer)
    {
        printf("Correct!\n");
        return 1;
    }
    else
    {
        printf("Incorrect! The correct answer is %c.\n", correctAnswer);
        return 0;
    }
}

void ans(int count)
{
    char answer, a[] = {'C', 'D', 'A', 'B'};
    printf("Your answer(use capital letter): ");
    scanf(" %c", &answer);
    score += checkAnswer(answer, a[count]);
    printf("score = %d\n", score);
    fun_call++;
}
int main()
{
    int count = 0;
    displayQuestion("Q1.  Who is the father of C language?", "Steve Jobs", "James Gosling", "Dennis Ritchie", "Rasmus Lerdorf");
    ans(count);
    count++;
    displayQuestion("Q2. All keywords in C are in ____", "LowerCase letter", "UpperCase letters", "CamelCase letters", "None of the mentioned");
    ans(count);
    count++;
    displayQuestion("Q3. Which of the following is not a valid C variable name?", "int number;", "float rate;", "int variable_count;", "int $main");
    ans(count);
    count++;
    displayQuestion("Q4. Which is valid C expression?", "int my_num = 100,000;", "int my_num = 100000;", "int my num = 1000;", "int $my_num = 10000");
    ans(count);
    count++;
    if (fun_call == 4)
    {
        printf("\nYour score: %d out of 4\n", score);
    }
    return 0;
}