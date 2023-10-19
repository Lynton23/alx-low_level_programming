section .data
    hello db 'Hello, Holberton', 0

section .text
    global main
    extern printf

main:
    ; printf("Hello, Holberton")
    mov rdi, hello
    xor rax, rax
    call printf

    ; return 0
    xor eax, eax
    ret
