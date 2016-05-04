
	global	addition
	global	subtract
	global  gcd	

	section	.text

addition:
	mov	rax, rdi	;put the first number into rax
	mov	rcx, rsi	;put the second number intro rcx
	add	rax, rcx	;add the two values (in rax and rcx) together
	ret

subtract:
	mov	rax, rdi	;put the minuend into rax
	mov	rcx, rsi	;put the subtrahend into rcx
	sub	rax, rcx	;subtract the subtrahend from the minuend
	ret
gcd:
	cmp	rsi, 0		;check if the second number is zero
	jne	find		  ;if the second number does equal zero jump to find	
	mov	rax, rdi	;put the first number into rax	
	ret
	
find:
	mov	rax, rdi	;put the first number into rax
	xor	rdx, rdx	;clear rdx
	div	rsi		    ;divide by the second number
	mov	rdi, rsi	;put the quotient in first argument
	mov	rsi, rdx	;put the remainder in second argument
	call	gcd
	ret
