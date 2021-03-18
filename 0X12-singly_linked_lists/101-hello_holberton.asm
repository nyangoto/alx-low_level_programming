;-------------------------------------------------------------------------------
;
; An x64 assembly language program that prints out 'Hello,
; Holberton, followed by a new line.
; Compiled using nasm and gcc as follows
; nasm -f elf64 101-hello_holberton.asm && gcc 101-hello_holberton.o -o hello
;
;-------------------------------------------------------------------------------

section .data
format db "%s", 10, 0
message db "Hello, Holberton", 0

section .text
extern printf ;C function to be called.
global main ;main function

main:
	push rbp
	mov rdi, format
	mov rsi, mesage
	mov rax, 0
	call printf

	pop rbp

	mov rax, 0
	ret
