data:
  [message db "Hello, Holberton\n", 0]

text:
  [global main]

  [extern printf]
  
main:

  push   rbp
  mov    rbp, rsp

  lea   rdi, [message]
  xor    eax, eax
  call  printf

  mov    rsp, rbp
  pop   rbp

  xor   eax, eax
  ret