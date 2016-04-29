
	      global	main
	
	      section	.text
main:
					
        mov     rax, 1                	; system call 1 is write
        mov     rdi, [rsi + 8]          ; move to next argument, the new name
        mov     rsi, [rsi + 16]         ; address of string to output

        syscall                         ; invoke operating system to do the write

        ; exit(0)
        mov     eax, 60                 ; system call 60 is exit
        xor     rdi, rdi                ; exit code 0
        syscall                         ; invoke operating system to exit

