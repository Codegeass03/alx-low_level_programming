section .data
    format db "Hello, Holberton\n",0

section .text
    global main
    extern printf

main: ;Calling printf
mov rdi, format  ; Load the address of the format string into rdi (1st argument)
xor rax, rax    ; Clear rax (no floating-point arguments)
call printf     ; Call the printf function

; Exit the program
mov rax, 60     ; syscall number for exit
xor rdi, rdi    ; Exit status 0
syscall
