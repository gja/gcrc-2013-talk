def factorial(n, partial = 1)
  n == 0 ? partial : factorial(n - 1, partial * n)
end
