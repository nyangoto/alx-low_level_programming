section .data
	str: db "Hello, Holberton", 10, 0

section .text
global _start
_start:
	MOV RAX, 1
	MOV RDI, 1
	MOV RSI, str
	MOV RDX, 17
	syscall

	MOV RAX, 60
	MOV RDI, 0
	syscall
