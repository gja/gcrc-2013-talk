import sys
import os
sys.path.insert(0, os.path.dirname(os.path.realpath(__file__)))
import librupy

librupy.eval("puts 'Hello From Ruby!'")

librupy.require("factorial")
print librupy.eval("factorial(4)")

print librupy.eval('"#{98 + 1} bottles of beer"')
