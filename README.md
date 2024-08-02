# The Full Monty Bytecode Interpreter

>*"Put down and piss off."*<br>
\-Dave, 'The Full Monty'

## Contents

[Synopsis](#synopsis)<br>
[Description](#description)<br>
[Use Instructions](#use-instructions)<br>
[Opcodes](#opcodes)<br>
[Error Handling](#error-handling)<br>
[Example](#example)<br>
[Author](#author)

## Synopsis

The Full Monty Bytecode Interpreter is a simple interpreter for Monty bytecode files. Monty bytecode is a scripting language that utilizes a stack data structure. This project interprets Monty bytecode files and executes the specified stack operations.

## Description

Monty is a simple stack-based language. The Full Monty Bytecode Interpreter reads a bytecode file and executes commands sequentially. The interpreter supports various stack operations such as pushing, popping, and manipulating stack values. Each opcode in the bytecode file specifies a particular operation that the interpreter will perform on the stack.

## Use Instructions

**Clone into The Full Monty's Repository:**
```
git clone https://github.com/internashionalist/atlas-monty.git
```
**Open the Shell Directory:**
```
cd atlas-monty
```
**Compile Contents:**
```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
**Run Interpreter:**
```
./monty <file>
```

## Opcodes
```
•push
	- pushes an element to the stack

•pall
	- prints all the values on the stack, starting from the top

•pint
	- prints the value at the top of the stack

•pop
	- removes the top element of the stack

•swap
	- swaps the top two elements of the stack

•add
	- adds the top two elements of the stack - the result is stored in the second elements, and the top element is removed

•nop
	- does nothing

```


## Error Handling
```
The interpreter prints error messages to stderr and exits with EXIT_FAILURE status in the following cases:

- incorrect number of arguments
- inability to open file
- invalid instructions
- stand underflow errors
```


## Example

Monty Bytecode file bytecodes/00.m:
```
push 1
push 2
push 3
pall
```

Run The Full Monty:
```
./monty bytecodes/00.m
```

Output:
```
3
2
1
```

## Author

[@internashionalist](https://github.com/internashionalist/internashionalist/blob/main/README.md)

