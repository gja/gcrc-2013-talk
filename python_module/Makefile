all: ruby.so

ruby.so: python_ruby.c
	gcc -fPIC `python2.6-config --cflags --libs` -I/usr/lib/ruby/1.8/i486-linux -lruby1.8 -shared -o $@ $<
