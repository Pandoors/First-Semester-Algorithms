# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bartosz/CLionProjects/First-Semester-Algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bartosz/CLionProjects/First-Semester-Algorithms/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/zadanie-1-1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/zadanie-1-1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/zadanie-1-1.dir/flags.make

CMakeFiles/zadanie-1-1.dir/zadanie-1-1.cpp.o: CMakeFiles/zadanie-1-1.dir/flags.make
CMakeFiles/zadanie-1-1.dir/zadanie-1-1.cpp.o: ../zadanie-1-1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bartosz/CLionProjects/First-Semester-Algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/zadanie-1-1.dir/zadanie-1-1.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zadanie-1-1.dir/zadanie-1-1.cpp.o -c /Users/bartosz/CLionProjects/First-Semester-Algorithms/zadanie-1-1.cpp

CMakeFiles/zadanie-1-1.dir/zadanie-1-1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zadanie-1-1.dir/zadanie-1-1.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bartosz/CLionProjects/First-Semester-Algorithms/zadanie-1-1.cpp > CMakeFiles/zadanie-1-1.dir/zadanie-1-1.cpp.i

CMakeFiles/zadanie-1-1.dir/zadanie-1-1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zadanie-1-1.dir/zadanie-1-1.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bartosz/CLionProjects/First-Semester-Algorithms/zadanie-1-1.cpp -o CMakeFiles/zadanie-1-1.dir/zadanie-1-1.cpp.s

# Object files for target zadanie-1-1
zadanie__1__1_OBJECTS = \
"CMakeFiles/zadanie-1-1.dir/zadanie-1-1.cpp.o"

# External object files for target zadanie-1-1
zadanie__1__1_EXTERNAL_OBJECTS =

zadanie-1-1: CMakeFiles/zadanie-1-1.dir/zadanie-1-1.cpp.o
zadanie-1-1: CMakeFiles/zadanie-1-1.dir/build.make
zadanie-1-1: CMakeFiles/zadanie-1-1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bartosz/CLionProjects/First-Semester-Algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable zadanie-1-1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/zadanie-1-1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/zadanie-1-1.dir/build: zadanie-1-1

.PHONY : CMakeFiles/zadanie-1-1.dir/build

CMakeFiles/zadanie-1-1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/zadanie-1-1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/zadanie-1-1.dir/clean

CMakeFiles/zadanie-1-1.dir/depend:
	cd /Users/bartosz/CLionProjects/First-Semester-Algorithms/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bartosz/CLionProjects/First-Semester-Algorithms /Users/bartosz/CLionProjects/First-Semester-Algorithms /Users/bartosz/CLionProjects/First-Semester-Algorithms/cmake-build-debug /Users/bartosz/CLionProjects/First-Semester-Algorithms/cmake-build-debug /Users/bartosz/CLionProjects/First-Semester-Algorithms/cmake-build-debug/CMakeFiles/zadanie-1-1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/zadanie-1-1.dir/depend

