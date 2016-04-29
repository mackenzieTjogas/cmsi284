	global	main
	extern	puts	
	extern	reverse_range_in_place
	extern	strlen
	
	section	.text
main:
  push    rdi		                	;rdi holds the string 
  push    rsi			                ;rsi holds the starting index
	sub     rsp, 8         		      ;align the stack before call

  mov     rdi, [rsi]      	      ;the argument string to display
  call	  strlen			            ;length of the word
	mov	    rdx, rax		            ;put end index into rdx	(strlen stores it in rax)
	mov	    rdi, [rsi]		          ;put the string into rdi
	mov	    rsi, 0			            ;put the starting index, 0, into rsi
	push	  rdi
	call	  reverse_range_in_place
	pop	    rdi
 	
	call    puts                    ; print it
	add     rsp, 8                  ; restore %rsp to pre-aligned value
  pop     rsi                     ; restore registers puts used
 	pop	    rdi
        
	add     rsi, 8                  ; point to next argument
  dec     rdi                     ; count down
  jnz     main                    ; if not done counting keep going

  ret
