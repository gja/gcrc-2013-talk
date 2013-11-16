all: librupy_backend.a librupy.so clean

librupy_backend.a: librupy_backend.c
	gcc -fPIC -shared -o $@ $< -Wl,-undefined,dynamic_lookup -lpthread -ldl -lm -lrt -lcrypt -I/usr/lib/ruby/1.8/i486-linux /usr/lib/libruby1.8-static.a
	rm -rf $@.dSYM

librupy.so: librupy.c librupy_backend.a
	gcc -fPIC `python2.6-config --cflags --libs` -shared -o $@ $< librupy_backend.a
	rm -rf $@.dSYM

clean:
	rm -rf *.dSYM
