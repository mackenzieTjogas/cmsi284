	global	main
	extern	madlib_by_numbers
	extern  puts

	section	.text

main:
	push 	  rbx			
	mov	    rcx, rdi		    ;put the words to add into rcx
	sub	    rcx, 2			    ;need to subtract for ./a.out and the template
	mov	    rdi, [rsi+8]		;template goes into rdi
	add	    rsi, 16			    ;words to add goes into rsi
	mov	    rdx, rsi		    ;put the words to add into rdx
	mov	    rsi, rcx		    
	call	  madlib_by_numbers	
	mov	    rdi, rax		    ;put the result into rdi 
	call	  puts			      ;print 
	pop	    rbx			
	ret
