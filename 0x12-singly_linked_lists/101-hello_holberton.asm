global main
extern    printf
main:
	  mov   rdi, format
	mov rsi, message
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret
message: db `Hello, Holberton\n`,0
format: db "%s\n",0

