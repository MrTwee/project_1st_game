# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = "/home/kukusu/project_1st_game/almost2 (origin)"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/kukusu/project_1st_game/almost2 (origin)/build"

# Include any dependencies generated for this target.
include CMakeFiles/MyGame.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MyGame.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MyGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyGame.dir/flags.make

CMakeFiles/MyGame.dir/main.c.o: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/main.c.o: ../main.c
CMakeFiles/MyGame.dir/main.c.o: CMakeFiles/MyGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kukusu/project_1st_game/almost2 (origin)/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MyGame.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyGame.dir/main.c.o -MF CMakeFiles/MyGame.dir/main.c.o.d -o CMakeFiles/MyGame.dir/main.c.o -c "/home/kukusu/project_1st_game/almost2 (origin)/main.c"

CMakeFiles/MyGame.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MyGame.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/kukusu/project_1st_game/almost2 (origin)/main.c" > CMakeFiles/MyGame.dir/main.c.i

CMakeFiles/MyGame.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MyGame.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/kukusu/project_1st_game/almost2 (origin)/main.c" -o CMakeFiles/MyGame.dir/main.c.s

CMakeFiles/MyGame.dir/game.c.o: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/game.c.o: ../game.c
CMakeFiles/MyGame.dir/game.c.o: CMakeFiles/MyGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kukusu/project_1st_game/almost2 (origin)/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/MyGame.dir/game.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyGame.dir/game.c.o -MF CMakeFiles/MyGame.dir/game.c.o.d -o CMakeFiles/MyGame.dir/game.c.o -c "/home/kukusu/project_1st_game/almost2 (origin)/game.c"

CMakeFiles/MyGame.dir/game.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MyGame.dir/game.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/kukusu/project_1st_game/almost2 (origin)/game.c" > CMakeFiles/MyGame.dir/game.c.i

CMakeFiles/MyGame.dir/game.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MyGame.dir/game.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/kukusu/project_1st_game/almost2 (origin)/game.c" -o CMakeFiles/MyGame.dir/game.c.s

CMakeFiles/MyGame.dir/utility.c.o: CMakeFiles/MyGame.dir/flags.make
CMakeFiles/MyGame.dir/utility.c.o: ../utility.c
CMakeFiles/MyGame.dir/utility.c.o: CMakeFiles/MyGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kukusu/project_1st_game/almost2 (origin)/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/MyGame.dir/utility.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyGame.dir/utility.c.o -MF CMakeFiles/MyGame.dir/utility.c.o.d -o CMakeFiles/MyGame.dir/utility.c.o -c "/home/kukusu/project_1st_game/almost2 (origin)/utility.c"

CMakeFiles/MyGame.dir/utility.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MyGame.dir/utility.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/kukusu/project_1st_game/almost2 (origin)/utility.c" > CMakeFiles/MyGame.dir/utility.c.i

CMakeFiles/MyGame.dir/utility.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MyGame.dir/utility.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/kukusu/project_1st_game/almost2 (origin)/utility.c" -o CMakeFiles/MyGame.dir/utility.c.s

# Object files for target MyGame
MyGame_OBJECTS = \
"CMakeFiles/MyGame.dir/main.c.o" \
"CMakeFiles/MyGame.dir/game.c.o" \
"CMakeFiles/MyGame.dir/utility.c.o"

# External object files for target MyGame
MyGame_EXTERNAL_OBJECTS =

MyGame: CMakeFiles/MyGame.dir/main.c.o
MyGame: CMakeFiles/MyGame.dir/game.c.o
MyGame: CMakeFiles/MyGame.dir/utility.c.o
MyGame: CMakeFiles/MyGame.dir/build.make
MyGame: CMakeFiles/MyGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/kukusu/project_1st_game/almost2 (origin)/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable MyGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyGame.dir/build: MyGame
.PHONY : CMakeFiles/MyGame.dir/build

CMakeFiles/MyGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyGame.dir/clean

CMakeFiles/MyGame.dir/depend:
	cd "/home/kukusu/project_1st_game/almost2 (origin)/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/kukusu/project_1st_game/almost2 (origin)" "/home/kukusu/project_1st_game/almost2 (origin)" "/home/kukusu/project_1st_game/almost2 (origin)/build" "/home/kukusu/project_1st_game/almost2 (origin)/build" "/home/kukusu/project_1st_game/almost2 (origin)/build/CMakeFiles/MyGame.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/MyGame.dir/depend

