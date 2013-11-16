librupy.so: librupy.c
	gcc -fPIC `python2.7-config --cflags --libs` -shared -o $@ $<
	rm -rf $@.dSYM
