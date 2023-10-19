section .data
	hello db "Hello, Holberton",0   ; Null-terminated string

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, hello
	call printf
	add rsp, 8  ; Cleanup the stack
	mov rax, 60     ; syscall: exit
	xor rdi, rdi    ; status: 0
	syscall
