;--------------------------------------------------------
; writes Hello, Holberton to stdout using system calls
; on x64 Linux
; To assemble and run
; nasm -f elf64 [filename] 
;--------------------------------------------------------
global _start

	section .text
_start: mov	rax, 1
	mov	rdi, 1
	mov	rsi, message
	mov	rdx, 17
	syscall
	mov	rax, 60
	xor	rdi, rdi
	syscall

	section .data
message: db	"Hello, Holberton", 10
end:
