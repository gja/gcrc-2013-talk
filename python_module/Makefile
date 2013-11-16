librupy.so: librupy.c
	gcc -fPIC `python2.7-config --cflags --libs` `PKG_CONFIG_PATH=/Users/gja/.rbenv/versions/2.0.0-p247/lib/pkgconfig/ pkg-config --cflags ruby-2.0` -shared -o $@ $<
	rm -rf $@.dSYM
