import ruby

ruby.require("y_combinator")

ruby.eval("acc_fac = y { |rec| lambda { |n,acc| n < 2 ? acc : rec[n-1, n*acc] } }")
ruby.eval("tail_fac = lambda { |n| acc_fac[n, 1] }")
result = ruby.eval("tail_fac[5]")

print "The result is %d" % result
