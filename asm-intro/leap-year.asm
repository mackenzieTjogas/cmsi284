

	global  main
	extern	atoi
	extern  printf
	extern	puts

	section	.text
				      
main:
	mov	  rdi, [rsi + 8]
	call	atoi

	xor	  rdx, rdx		;clear rdx	
	mov	  rsi, rax        	;put the year in rsi so I can print it later 	
	div   qword [four_hundred]	;Is the year divisible by 400
	mov	  r12, rdx		;store remainder in r12	
	cmp	  r12, 0		 	;is the remainder 0			
	mov	  rax, rsi	
	je	  true			;if the remainder does not equal zero jump to false
	
	xor   rdx, rdx
	div	  qword [one_hundred]	;does it know where the year is to do this???		
	mov	  r13, rdx		;store remainder in r13	
	cmp	  r13, 0
	mov	  rax, rsi	
	je	  false			;the year cannot be divisible by 100
	
	xor	  rdx, rdx	
	div	  qword [four]		;does it know where the year is to do this???
	mov	  r14, rdx		;store remainder in r14
	cmp 	r14, 0
	je	  true			;else jump to true

four_hundred:
	dq	  400
one_hundred:
	dq	  100
four:
	dq	  4

true:
	mov	  rdi, true_message
	xor	  rax, rax
	call	printf
        ret

false:
	mov	  rdi, false_message
	xor	  rax, rax
	call	printf
        ret

true_message:
	db	  "%d is a leap year", 10, 0

false_message:
	db	  "%d is not a leap year", 10, 0
