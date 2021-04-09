CFLAGS = -Wall -Wextra -Werror -I src
CPPFLAGS = -MMD

bin/geometry: obj/src/geometry/geometry.o obj/libhello.a
	$(CC) $(CFLAGS) -o $@ $^

obj/src/geometry/geometry.o: src/geometry/geometry.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/libhello.a: obj/src/libgeometry/checkgeometry.o
	ar rcs $@ $^

obj/src/libgeometry/checkgeometry.o: src/libgeometry/checkgeometry.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

.PHONY : clean

clean:
	rm -rf obj/src/libgeometry/*.o obj/src/geometry/*.o bin/geometry

-include geometry.d checkgeometry.d
