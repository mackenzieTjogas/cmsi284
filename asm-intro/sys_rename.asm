
	global	main
	
	section	.text
main:
					
        mov     rax, 82                	; system call number to rename is 82
        mov     rdi, [rsi + 8]          ; move to next argument, the new name
        mov     rsi, [rsi + 16]         ; second argument, address of string to output

        syscall                         ; invoke operating system to do the write

        mov     eax, 60                 ; system call 60 is exit
        xor     rdi, rdi                ; exit code 0
        syscall                         ; invoke operating system to exit

