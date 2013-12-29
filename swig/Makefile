all: ruby.so

rectangle.so: rectangle_wrap.c rectangle.c
	g++ -fPIC -I/usr/lib/ruby/1.8/i486-linux -lruby1.8 -shared -o $@ $^

rectangle_wrap.c: rectangle.h
	swig -ruby $<
