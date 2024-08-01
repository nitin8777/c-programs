#include <iostream>

using namespace std;

int main()
{
  string a[] = {"Q)1 Who is the father of C language?", "Q)2 Which of the following is not a valid C variable name?", "Q)3 All keywords in C are in __?", "Q)4 Which is valid C expression?"};
  string b[] = {" a) Steve Jobs\n b) James Gosling\n c) Dennis Ritchie\n d) Rasmus Lerdorf", " a) int number;\n b) float rate;\n c) int variable_count;\n d) int $main\n", " a) LowerCase letters\n b) UpperCase letters\n c) CamelCase letters\n d) None of the above", " a) int my_num = 100,000;\n b) int my_num = 100000;\n c) int my num = 1000;\n d) int $my_num = 10000;"};
  string c[] = {"c", "d", "a", "b"};
  string ans;

  cout<<"welcom to the quiz\n";
  cout << "\n";

  for (int i = 0; i < 4; i++)
  {
    cout << a[i] << "\n";
    cout << b[i] << "\n";
    cout << "Enter your answer: ";
    cin >> ans;
    if (ans == c[i])
    {
      cout << "Correct answer\n";
    }
    else
    {
      cout << "Wrong answer correct answer is: " << c[i] << "\n";
    }
    cout << "\n";
  }
  return 0;
}