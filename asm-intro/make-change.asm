	global main
	extern printf
	extern atoi
	
	section  .text

main:
	add       rsi, 8
	mov	  rdi, [rsi]
	call      atoi

quarters:
	xor	  rdx, rdx	          ;clear rdx	
	div   	  qword [quarter]	  ;find out how many quarters we need
	mov	  r12, rdx	          ;store remainder in r12, do i need brackets?
	mov	  rsi, rax	
	mov	  rdi, quarters_message
	xor	  rax, rax
	call	  printf
	
dimes:  
	xor	  rdx, rdx	          ;clear rdx before division	
	mov	  rax, r12	
	div   	  qword [dime]	          ;divide previous remainder by 10-does it save in r12???
	mov	  r13, rdx	          ;store previous remainder in r13
	mov	  rsi, rax	
	mov	  rdi, dimes_message
	xor	  rax, rax
	call	  printf
nickels:
	xor	  rdx, rdx	            ;clear rdx before division		
	mov	  rax, r13	
	div	  qword [nickel]	    ;divide previous remainder by 5--does it save in rax or r13?
	mov	  r14, rdx	
	mov	  rsi, rax	
	mov	  rdi, nickels_message
	xor	  rax, rax
	call	  printf 

pennies:
	mov	  rsi, r14	
	mov	  rdi, pennies_message
	xor	  rax, rax

	call	  printf		    ;print the final remainder-the number of pennies

	ret

quarter:
	dq	  25            	    ;make the quarter variable 
dime:
	dq	  10
nickel:
	dq	  5

quarters_message:
	db	  "Quarters: %d", 10, 0
dimes_message:
	db	  "Dimes: %d", 10, 0
nickels_message:	
	db	  "Nickels: %d", 10, 0
pennies_message:
	db	  "Pennies: %d", 10, 0
