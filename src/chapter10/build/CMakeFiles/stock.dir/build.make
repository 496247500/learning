# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mjc/workspace/learning/src/chapter10

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mjc/workspace/learning/src/chapter10/build

# Include any dependencies generated for this target.
include CMakeFiles/stock.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stock.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stock.dir/flags.make

CMakeFiles/stock.dir/src/stack.cc.o: CMakeFiles/stock.dir/flags.make
CMakeFiles/stock.dir/src/stack.cc.o: ../src/stack.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mjc/workspace/learning/src/chapter10/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stock.dir/src/stack.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stock.dir/src/stack.cc.o -c /home/mjc/workspace/learning/src/chapter10/src/stack.cc

CMakeFiles/stock.dir/src/stack.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stock.dir/src/stack.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mjc/workspace/learning/src/chapter10/src/stack.cc > CMakeFiles/stock.dir/src/stack.cc.i

CMakeFiles/stock.dir/src/stack.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stock.dir/src/stack.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mjc/workspace/learning/src/chapter10/src/stack.cc -o CMakeFiles/stock.dir/src/stack.cc.s

# Object files for target stock
stock_OBJECTS = \
"CMakeFiles/stock.dir/src/stack.cc.o"

# External object files for target stock
stock_EXTERNAL_OBJECTS =

libstock.a: CMakeFiles/stock.dir/src/stack.cc.o
libstock.a: CMakeFiles/stock.dir/build.make
libstock.a: CMakeFiles/stock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mjc/workspace/learning/src/chapter10/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libstock.a"
	$(CMAKE_COMMAND) -P CMakeFiles/stock.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stock.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stock.dir/build: libstock.a

.PHONY : CMakeFiles/stock.dir/build

CMakeFiles/stock.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stock.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stock.dir/clean

CMakeFiles/stock.dir/depend:
	cd /home/mjc/workspace/learning/src/chapter10/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mjc/workspace/learning/src/chapter10 /home/mjc/workspace/learning/src/chapter10 /home/mjc/workspace/learning/src/chapter10/build /home/mjc/workspace/learning/src/chapter10/build /home/mjc/workspace/learning/src/chapter10/build/CMakeFiles/stock.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stock.dir/depend

