# Self-Test Exercise (Variables, Expressions, and Assignment Statements) page 43.
1. Give the declaration for two variables called feet and inches. Both variables are of type int and both are to be initialized to zero in the declaration. 
   Give both initialization alternatives.

A: int feet(0), inches(0);
   int feet = 0, inches = 0;


2. Give the declaration for two variables called count and distance. count is of type int and is initialized to zero. 
   distance is of type double and is initialized to 1.5. Give both initialization alternatives.

A: int count(0); double distance(1.5);
   int count = 0; double distance = 1.5;


3. Write a program that contains statements that output the values of five or six variables that have been defined, but not initialized.
   Compile and run the program. What is the output? Explain.

A: With my current setup using Visual Studio 2022 the compilation fails before a new executable is produced.
   I receive "error C4700" for all variables in the program: feet, inches, meters, guns, and roses.
   The program therefore produces no output.

   This is because the variables are defined, but not initialized.
   The program attempts to use their values before they have been assigned a value.
