all: rectangle.so

rectangle.so: rectangle_wrap.cxx rectangle.cpp
	g++ -fPIC -I/usr/lib/ruby/1.8/i486-linux -lruby1.8 -shared -o $@ $^

rectangle_wrap.cxx: rectangle.h
	swig -ruby -c++ $<
