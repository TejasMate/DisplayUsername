all:
	echo"build, run, clean"

build:
	g++ main.cpp welcome.cpp thanks.cpp -o rt

run:
	./rt

clean:
	rm rt
