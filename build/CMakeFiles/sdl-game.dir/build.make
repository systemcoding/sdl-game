# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/revanth/Dev/sdl-game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/revanth/Dev/sdl-game/build

# Include any dependencies generated for this target.
include CMakeFiles/sdl-game.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sdl-game.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sdl-game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sdl-game.dir/flags.make

CMakeFiles/sdl-game.dir/src/Application.cpp.o: CMakeFiles/sdl-game.dir/flags.make
CMakeFiles/sdl-game.dir/src/Application.cpp.o: /home/revanth/Dev/sdl-game/src/Application.cpp
CMakeFiles/sdl-game.dir/src/Application.cpp.o: CMakeFiles/sdl-game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/revanth/Dev/sdl-game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sdl-game.dir/src/Application.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sdl-game.dir/src/Application.cpp.o -MF CMakeFiles/sdl-game.dir/src/Application.cpp.o.d -o CMakeFiles/sdl-game.dir/src/Application.cpp.o -c /home/revanth/Dev/sdl-game/src/Application.cpp

CMakeFiles/sdl-game.dir/src/Application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sdl-game.dir/src/Application.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/revanth/Dev/sdl-game/src/Application.cpp > CMakeFiles/sdl-game.dir/src/Application.cpp.i

CMakeFiles/sdl-game.dir/src/Application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sdl-game.dir/src/Application.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/revanth/Dev/sdl-game/src/Application.cpp -o CMakeFiles/sdl-game.dir/src/Application.cpp.s

CMakeFiles/sdl-game.dir/src/Window.cpp.o: CMakeFiles/sdl-game.dir/flags.make
CMakeFiles/sdl-game.dir/src/Window.cpp.o: /home/revanth/Dev/sdl-game/src/Window.cpp
CMakeFiles/sdl-game.dir/src/Window.cpp.o: CMakeFiles/sdl-game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/revanth/Dev/sdl-game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sdl-game.dir/src/Window.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sdl-game.dir/src/Window.cpp.o -MF CMakeFiles/sdl-game.dir/src/Window.cpp.o.d -o CMakeFiles/sdl-game.dir/src/Window.cpp.o -c /home/revanth/Dev/sdl-game/src/Window.cpp

CMakeFiles/sdl-game.dir/src/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sdl-game.dir/src/Window.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/revanth/Dev/sdl-game/src/Window.cpp > CMakeFiles/sdl-game.dir/src/Window.cpp.i

CMakeFiles/sdl-game.dir/src/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sdl-game.dir/src/Window.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/revanth/Dev/sdl-game/src/Window.cpp -o CMakeFiles/sdl-game.dir/src/Window.cpp.s

CMakeFiles/sdl-game.dir/src/Game.cpp.o: CMakeFiles/sdl-game.dir/flags.make
CMakeFiles/sdl-game.dir/src/Game.cpp.o: /home/revanth/Dev/sdl-game/src/Game.cpp
CMakeFiles/sdl-game.dir/src/Game.cpp.o: CMakeFiles/sdl-game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/revanth/Dev/sdl-game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/sdl-game.dir/src/Game.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sdl-game.dir/src/Game.cpp.o -MF CMakeFiles/sdl-game.dir/src/Game.cpp.o.d -o CMakeFiles/sdl-game.dir/src/Game.cpp.o -c /home/revanth/Dev/sdl-game/src/Game.cpp

CMakeFiles/sdl-game.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sdl-game.dir/src/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/revanth/Dev/sdl-game/src/Game.cpp > CMakeFiles/sdl-game.dir/src/Game.cpp.i

CMakeFiles/sdl-game.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sdl-game.dir/src/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/revanth/Dev/sdl-game/src/Game.cpp -o CMakeFiles/sdl-game.dir/src/Game.cpp.s

# Object files for target sdl-game
sdl__game_OBJECTS = \
"CMakeFiles/sdl-game.dir/src/Application.cpp.o" \
"CMakeFiles/sdl-game.dir/src/Window.cpp.o" \
"CMakeFiles/sdl-game.dir/src/Game.cpp.o"

# External object files for target sdl-game
sdl__game_EXTERNAL_OBJECTS =

sdl-game: CMakeFiles/sdl-game.dir/src/Application.cpp.o
sdl-game: CMakeFiles/sdl-game.dir/src/Window.cpp.o
sdl-game: CMakeFiles/sdl-game.dir/src/Game.cpp.o
sdl-game: CMakeFiles/sdl-game.dir/build.make
sdl-game: /usr/lib/x86_64-linux-gnu/libSDL2main.a
sdl-game: /usr/lib/x86_64-linux-gnu/libSDL2.so
sdl-game: /usr/lib/x86_64-linux-gnu/libSDL2main.a
sdl-game: /usr/lib/x86_64-linux-gnu/libSDL2_image.so
sdl-game: /usr/lib/x86_64-linux-gnu/libSDL2.so
sdl-game: /usr/lib/x86_64-linux-gnu/libSDL2_image.so
sdl-game: CMakeFiles/sdl-game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/revanth/Dev/sdl-game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable sdl-game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sdl-game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sdl-game.dir/build: sdl-game
.PHONY : CMakeFiles/sdl-game.dir/build

CMakeFiles/sdl-game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sdl-game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sdl-game.dir/clean

CMakeFiles/sdl-game.dir/depend:
	cd /home/revanth/Dev/sdl-game/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/revanth/Dev/sdl-game /home/revanth/Dev/sdl-game /home/revanth/Dev/sdl-game/build /home/revanth/Dev/sdl-game/build /home/revanth/Dev/sdl-game/build/CMakeFiles/sdl-game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sdl-game.dir/depend

