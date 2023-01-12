all:
	g++ -std=c++1z -I ext/include -L ext/lib -o sdl-app src/*.cpp -lmingw32 -lSDL2main -lSDL2 -lSDL2_image