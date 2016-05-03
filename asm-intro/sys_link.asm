
	global	main
	
	section	.text
main: 
					
	push	rsi        
	mov     rax, 1                	; system call 1 is write
        mov     rdi, 1		        ; stdout
        mov     rsi, message	        ; the output string we need

        syscall                         ; invoke operating system to do the write

	pop	rsi			; since we pushed it 
	mov	rax, 86			; 86 is the syscall for link
	mov	rdi, [rsi + 8]		; first argument is moved into rdi
	mov	rsi, [rsi + 16]		; second argument is moved into rsi
	syscall				; invoke operating system to do the link

        mov     eax, 60                 ; system call 60 is exit
        xor     rdi, rdi                ; exit code 0
        syscall                         ; invoke operating system to exit
message:
	db	"The link worked!", 10
