# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/hangwu/Documents/cplus_test/4_Professional_C++_5ed/partII/ch4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hangwu/Documents/cplus_test/4_Professional_C++_5ed/partII/ch4/build

# Include any dependencies generated for this target.
include CMakeFiles/run_partII.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/run_partII.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/run_partII.dir/flags.make

CMakeFiles/run_partII.dir/test.cpp.o: CMakeFiles/run_partII.dir/flags.make
CMakeFiles/run_partII.dir/test.cpp.o: ../test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hangwu/Documents/cplus_test/4_Professional_C++_5ed/partII/ch4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/run_partII.dir/test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_partII.dir/test.cpp.o -c /home/hangwu/Documents/cplus_test/4_Professional_C++_5ed/partII/ch4/test.cpp

CMakeFiles/run_partII.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_partII.dir/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hangwu/Documents/cplus_test/4_Professional_C++_5ed/partII/ch4/test.cpp > CMakeFiles/run_partII.dir/test.cpp.i

CMakeFiles/run_partII.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_partII.dir/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hangwu/Documents/cplus_test/4_Professional_C++_5ed/partII/ch4/test.cpp -o CMakeFiles/run_partII.dir/test.cpp.s

# Object files for target run_partII
run_partII_OBJECTS = \
"CMakeFiles/run_partII.dir/test.cpp.o"

# External object files for target run_partII
run_partII_EXTERNAL_OBJECTS =

run_partII: CMakeFiles/run_partII.dir/test.cpp.o
run_partII: CMakeFiles/run_partII.dir/build.make
run_partII: CMakeFiles/run_partII.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hangwu/Documents/cplus_test/4_Professional_C++_5ed/partII/ch4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable run_partII"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/run_partII.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/run_partII.dir/build: run_partII

.PHONY : CMakeFiles/run_partII.dir/build

CMakeFiles/run_partII.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/run_partII.dir/cmake_clean.cmake
.PHONY : CMakeFiles/run_partII.dir/clean

CMakeFiles/run_partII.dir/depend:
	cd /home/hangwu/Documents/cplus_test/4_Professional_C++_5ed/partII/ch4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hangwu/Documents/cplus_test/4_Professional_C++_5ed/partII/ch4 /home/hangwu/Documents/cplus_test/4_Professional_C++_5ed/partII/ch4 /home/hangwu/Documents/cplus_test/4_Professional_C++_5ed/partII/ch4/build /home/hangwu/Documents/cplus_test/4_Professional_C++_5ed/partII/ch4/build /home/hangwu/Documents/cplus_test/4_Professional_C++_5ed/partII/ch4/build/CMakeFiles/run_partII.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/run_partII.dir/depend

