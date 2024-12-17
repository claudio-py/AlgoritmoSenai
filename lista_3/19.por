programa {
  funcao inicio() {
  inteiro fib[32] = {
  0,1,1,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0
  }
  
  para(inteiro i = 3; i <= 31; i++){
    fib[i] = fib[i-2] + fib[i-1]
  }
    escreva(fib)
}
}
