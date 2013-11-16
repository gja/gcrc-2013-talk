import sys
import os
sys.path.insert(0, os.path.dirname(os.path.realpath(__file__)))
import librupy

librupy.require("factorial")
print librupy.eval("factorial(4)")
