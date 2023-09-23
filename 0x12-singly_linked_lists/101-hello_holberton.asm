section .data
    theMessage db "Hello, Holberton",0   ; message to be printed
    format db "%s", 10, 0           ; format for printf function

section .text
    global main

extern printf

main:
    push rbp
    mov rdi, format
    mov rsi, theMessage
    call printf
    pop rbp

    mov rax, 60         ; leave the program
    xor rdi, rdi        ; ~
    syscall
