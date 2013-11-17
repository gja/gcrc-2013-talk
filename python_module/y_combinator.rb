def y(&f)
  lambda { |x| x[x] } [ 
    lambda { |yf| lambda { |*args| f[yf[yf]][*args] } } ]
end
