# Conditional Statements
## AIM
To understand the logic and syntax of conditional statements used in C++. The main conditional statements used:
- if-else
- switch
## THEORY
Conditional statements are used in programs to evaluate a given set of conditions and then make decisions as to whether the block of code given under each condition should be executed or not. As they help decide the direction of the flow of program executions they're also known as decision-making statements. The main types of conditional statements in C++ are if-else and switch.
- If-Else Statement<br />
  There are various complexities of if-else statements. The first is a simple 'if statement'. This checks the given condition and executes a block code specified under the if statement, if it holds true. if the condition is not satisfied the flow of the program goes to the code immediately following the if statement.<br />
  Second, is the 'if-else statement'. This statement also works the same way as the 'if statement', the only difference is that when the given condition is false, then the block of code given under the else statement is executed.<br />
  Third, is the 'if-else_if ladder'. This works similarly to the 'if-else statement', but it checks for more than 1 condition (i.e.) once, the if condition is rendered false, the next else-if condition is checked, followed by the rest of the conditions, and finally the code given under else statement is executed, if none of the other conditions hold true.<br />
  Syntax of 'if-else statements':<br />
  **_if(condition1) {<br />
  //code to be executed if condition1 true<br />
  }<br />
  else if(condition2){<br />
    //code to be executed if condition2 true<br />
  }<br />
  ...<br />
  else {<br />
    //code to be executed if all conditions false<br />
  }_**
- Switch Statement<br />
  This statement is used when we need to decide from many blocks of code. A switch statement has many cases and a block of code associated with each case. First, the expression is evaluated. This is done only once in the beginning. Then the value obtained after evaluation is compared with each case. Whichever case matches the value, that block of code is executed. Each case's block of code is followed by a break statement to ensure that no more cases are verified (this saves the execution time). Switch statements can also have an additional default block. This block of code is executed when none of the cases match the obtained value.<br />
  Syntax of 'switch statement':<br />
  **_switch(expression){<br />
  case value1:<br />
    //code to be executed;<br />
    break;<br />
  case value2:<br />
    //code to be executed;<br />
    break;<br />
  ...<br />
  default:<br />
    //code to be executed if none of the cases match;<br />
    break;_**
  ## ALGORITHM
  
