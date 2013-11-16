all: librupy_backend.so librupy.so clean

librupy_backend.so: librupy_backend.c
	gcc -fPIC `PKG_CONFIG_PATH=/Users/gja/.rbenv/versions/2.0.0-p247/lib/pkgconfig/ pkg-config --cflags --libs ruby-2.0` -shared -o $@ $< ~/.rbenv/versions/2.0.0-p247/lib/libruby-static.a
	rm -rf $@.dSYM

librupy.so: librupy.c
	gcc -fPIC `python2.7-config --cflags --libs` -shared -o $@ $<
	rm -rf $@.dSYM

clean:
	rm -rf *.dSYM
