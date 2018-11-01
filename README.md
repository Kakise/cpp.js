# CPP.JS
So, I figured out today that we lacked another satanic esolang, and I had some free time. So I made one.

# Specifications
This project is an interpreter for the cpp.js lang. It works by running it into a console and passing a folder as an argument.

The folder will be checked for other folder in it and in the subfolders, it will read every file in it, multiply the size of the file by 42, add the number of files in the folder times 666 and modulo it by 52645.

After that, the interpreter will use the following table to translate the code:

| Value	        | Instruction							    |
|:-------------:|:-----------------------------------------:|
| 471			| Adds one to the pointer					|
| 17524			| Substracts one to the pointer				|
| 4				| Adds one to the value of the pointer      |
| 31			| Substracts one to the value of the pointer|
| 0				| Display the value of the pointer (ASCII)  |
| 21			| Reserved									|
| 22			|											|