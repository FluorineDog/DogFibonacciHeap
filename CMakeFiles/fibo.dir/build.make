# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mike/workplace/Advanced_DataStructure/DogFibonacciHeap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mike/workplace/Advanced_DataStructure/DogFibonacciHeap

# Include any dependencies generated for this target.
include CMakeFiles/fibo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fibo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fibo.dir/flags.make

CMakeFiles/fibo.dir/fiboheap.cpp.o: CMakeFiles/fibo.dir/flags.make
CMakeFiles/fibo.dir/fiboheap.cpp.o: fiboheap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mike/workplace/Advanced_DataStructure/DogFibonacciHeap/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/fibo.dir/fiboheap.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fibo.dir/fiboheap.cpp.o -c /home/mike/workplace/Advanced_DataStructure/DogFibonacciHeap/fiboheap.cpp

CMakeFiles/fibo.dir/fiboheap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fibo.dir/fiboheap.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mike/workplace/Advanced_DataStructure/DogFibonacciHeap/fiboheap.cpp > CMakeFiles/fibo.dir/fiboheap.cpp.i

CMakeFiles/fibo.dir/fiboheap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fibo.dir/fiboheap.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mike/workplace/Advanced_DataStructure/DogFibonacciHeap/fiboheap.cpp -o CMakeFiles/fibo.dir/fiboheap.cpp.s

CMakeFiles/fibo.dir/fiboheap.cpp.o.requires:

.PHONY : CMakeFiles/fibo.dir/fiboheap.cpp.o.requires

CMakeFiles/fibo.dir/fiboheap.cpp.o.provides: CMakeFiles/fibo.dir/fiboheap.cpp.o.requires
	$(MAKE) -f CMakeFiles/fibo.dir/build.make CMakeFiles/fibo.dir/fiboheap.cpp.o.provides.build
.PHONY : CMakeFiles/fibo.dir/fiboheap.cpp.o.provides

CMakeFiles/fibo.dir/fiboheap.cpp.o.provides.build: CMakeFiles/fibo.dir/fiboheap.cpp.o


# Object files for target fibo
fibo_OBJECTS = \
"CMakeFiles/fibo.dir/fiboheap.cpp.o"

# External object files for target fibo
fibo_EXTERNAL_OBJECTS =

libfibo.a: CMakeFiles/fibo.dir/fiboheap.cpp.o
libfibo.a: CMakeFiles/fibo.dir/build.make
libfibo.a: CMakeFiles/fibo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mike/workplace/Advanced_DataStructure/DogFibonacciHeap/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libfibo.a"
	$(CMAKE_COMMAND) -P CMakeFiles/fibo.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fibo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fibo.dir/build: libfibo.a

.PHONY : CMakeFiles/fibo.dir/build

CMakeFiles/fibo.dir/requires: CMakeFiles/fibo.dir/fiboheap.cpp.o.requires

.PHONY : CMakeFiles/fibo.dir/requires

CMakeFiles/fibo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fibo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fibo.dir/clean

CMakeFiles/fibo.dir/depend:
	cd /home/mike/workplace/Advanced_DataStructure/DogFibonacciHeap && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mike/workplace/Advanced_DataStructure/DogFibonacciHeap /home/mike/workplace/Advanced_DataStructure/DogFibonacciHeap /home/mike/workplace/Advanced_DataStructure/DogFibonacciHeap /home/mike/workplace/Advanced_DataStructure/DogFibonacciHeap /home/mike/workplace/Advanced_DataStructure/DogFibonacciHeap/CMakeFiles/fibo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fibo.dir/depend
