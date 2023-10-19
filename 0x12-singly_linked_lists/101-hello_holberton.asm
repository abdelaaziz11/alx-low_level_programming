section .data
	hello db "Hello, Holberton",10, 0 ; The string to print (with a newline and null terminator)
	format db "%s", 10, 0 ; The format string for printf

section .text
	global main

	extern printf

main:
	push rbp
	mov rdi, format		; Set the format string
	mov rdi, hello		; Set the string adress
	call printf		; Call printf
	add esp, 8 		; Adjust the stack pointer
	xor rax, rax		; Return 0
	pop rbp
	ret
