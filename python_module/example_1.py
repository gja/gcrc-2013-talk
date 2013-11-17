import ruby

ruby.eval("""
def factorial(n, partial = 1)
  n == 0 ? partial : factorial(n - 1, partial * n)
end
""")

result = ruby.eval("factorial(5)")

print "The result is %d" % result
