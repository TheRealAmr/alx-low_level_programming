section .data
    hello db "Hello, Holberton",0   ; Null-terminated string
    format db "%s", 10, 0           ; Format string for printf

section .text
    global main

extern printf

main:
    push rbp
    mov rdi, format
    mov rsi, hello
    call printf
    pop rbp

    ; Exit the program
    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; status: 0
    syscall
