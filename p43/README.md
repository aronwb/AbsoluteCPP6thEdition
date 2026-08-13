# Self-Test Exercise (Variables, Expressions, and Assignment Statements) page 43.
1. Give the declaration for two variables called feet and inches. Both variables are of type int and both are to be initialized to zero in the declaration. 
   Give both initialization alternatives.

2. Give the declaration for two variables called count and distance. count is of type int and is initialized to zero. 

# Assignment Statements
In C++ the equal sign is used as the assignment operator.
An assignment statement always consists of a variable on the left-hand side of the equal sign and an expression on the right-hand side.
An assignment statement ends with a semicolon.

The expression on the right-hand side of the equal sign may be a variable, a number, or a more complicated expression made up of variables, numbers, operators, and function invocations.
Syntax: Variable = Expression;

Examples:
totalWeight = oneWeight * numberOfBeans;
temperature = 98.6;
count = count + 2;

# More Assignment Statements
A shorthand notation exists that combines the assignment operator (=) and an arithmetic operator so that a given variable can have its value changed by adding, subtracting, multiplying by,
or dividing by a specified value. The general form is
	
	Variable Operator = Expression

Which is equivalent to 

	Variable = Variable Operator (Expression)

The expression can be another variable, a constant, or a more complicated arithmetic expression.

	count += 2; -> count = count + 2;
	total -= discount; -> total = total - discount;
	bonus *= 2; -> bonus = bonus * 2;

# -assigning int values to double variables
There are some special cases in which it is permitted to assign a value of one type to a variable of another type.
It is acceptable to assign a value of an integer type, such as int, to a variable of a floating-point type, such as type double.

	double doubleVariable;
	doubleVariable = 2;

Both legal. 

# -integers and Booleans
When assigned to a variable of type bool, any nonzero integer will be stored as the value true. Zero will be stored as the value false.
When assigning a bool value to an integer variable, true will be stored as 1, and false will be stored as 0.

# Literals
A literal is a name for one specific value. Literals are often called constants in contrast to variables.
Literals or constants do not change value.

Constants of type char are expressed by placing the character in single quotes, as illustrated in what follows:

	char symbol = 'Z';

Constants for strings of characters are given in double quotes, as illustrated:

	cout << "Hello there!";

The type bool has two constants, true and false. These two constants may be
assigned to a variable of type bool or used anyplace else an expression of type bool is allowed. 
They must be spelled with all 
