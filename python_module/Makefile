all: librupy_backend.so librupy.so clean

librupy_backend.a: librupy_backend.c
	gcc -fPIC `PKG_CONFIG_PATH=/Users/gja/.rbenv/versions/2.0.0-p247/lib/pkgconfig/ pkg-config --cflags --libs ruby-2.0` -o $@ $< ~/.rbenv/versions/2.0.0-p247/lib/libruby-static.a
	rm -rf $@.dSYM

librupy.so: librupy.c librupy_backend.a
	gcc -fPIC `python2.7-config --cflags --libs` -shared -o $@ $< librupy_backend.a
	rm -rf $@.dSYM

clean:
	rm -rf *.dSYM
