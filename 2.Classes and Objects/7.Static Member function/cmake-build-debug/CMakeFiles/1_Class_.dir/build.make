# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/qasim/Desktop/cpp11/2.Classes and Objects/7.Static Member function"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/qasim/Desktop/cpp11/2.Classes and Objects/7.Static Member function/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/1_Class_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1_Class_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1_Class_.dir/flags.make

CMakeFiles/1_Class_.dir/main.cpp.o: CMakeFiles/1_Class_.dir/flags.make
CMakeFiles/1_Class_.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/qasim/Desktop/cpp11/2.Classes and Objects/7.Static Member function/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1_Class_.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/1_Class_.dir/main.cpp.o -c "/Users/qasim/Desktop/cpp11/2.Classes and Objects/7.Static Member function/main.cpp"

CMakeFiles/1_Class_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1_Class_.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/qasim/Desktop/cpp11/2.Classes and Objects/7.Static Member function/main.cpp" > CMakeFiles/1_Class_.dir/main.cpp.i

CMakeFiles/1_Class_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1_Class_.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/qasim/Desktop/cpp11/2.Classes and Objects/7.Static Member function/main.cpp" -o CMakeFiles/1_Class_.dir/main.cpp.s

CMakeFiles/1_Class_.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/1_Class_.dir/main.cpp.o.requires

CMakeFiles/1_Class_.dir/main.cpp.o.provides: CMakeFiles/1_Class_.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/1_Class_.dir/build.make CMakeFiles/1_Class_.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/1_Class_.dir/main.cpp.o.provides

CMakeFiles/1_Class_.dir/main.cpp.o.provides.build: CMakeFiles/1_Class_.dir/main.cpp.o


CMakeFiles/1_Class_.dir/Student.cpp.o: CMakeFiles/1_Class_.dir/flags.make
CMakeFiles/1_Class_.dir/Student.cpp.o: ../Student.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/qasim/Desktop/cpp11/2.Classes and Objects/7.Static Member function/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/1_Class_.dir/Student.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/1_Class_.dir/Student.cpp.o -c "/Users/qasim/Desktop/cpp11/2.Classes and Objects/7.Static Member function/Student.cpp"

CMakeFiles/1_Class_.dir/Student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1_Class_.dir/Student.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/qasim/Desktop/cpp11/2.Classes and Objects/7.Static Member function/Student.cpp" > CMakeFiles/1_Class_.dir/Student.cpp.i

CMakeFiles/1_Class_.dir/Student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1_Class_.dir/Student.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/qasim/Desktop/cpp11/2.Classes and Objects/7.Static Member function/Student.cpp" -o CMakeFiles/1_Class_.dir/Student.cpp.s

CMakeFiles/1_Class_.dir/Student.cpp.o.requires:

.PHONY : CMakeFiles/1_Class_.dir/Student.cpp.o.requires

CMakeFiles/1_Class_.dir/Student.cpp.o.provides: CMakeFiles/1_Class_.dir/Student.cpp.o.requires
	$(MAKE) -f CMakeFiles/1_Class_.dir/build.make CMakeFiles/1_Class_.dir/Student.cpp.o.provides.build
.PHONY : CMakeFiles/1_Class_.dir/Student.cpp.o.provides

CMakeFiles/1_Class_.dir/Student.cpp.o.provides.build: CMakeFiles/1_Class_.dir/Student.cpp.o


# Object files for target 1_Class_
1_Class__OBJECTS = \
"CMakeFiles/1_Class_.dir/main.cpp.o" \
"CMakeFiles/1_Class_.dir/Student.cpp.o"

# External object files for target 1_Class_
1_Class__EXTERNAL_OBJECTS =

1_Class_: CMakeFiles/1_Class_.dir/main.cpp.o
1_Class_: CMakeFiles/1_Class_.dir/Student.cpp.o
1_Class_: CMakeFiles/1_Class_.dir/build.make
1_Class_: CMakeFiles/1_Class_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/qasim/Desktop/cpp11/2.Classes and Objects/7.Static Member function/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 1_Class_"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/1_Class_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1_Class_.dir/build: 1_Class_

.PHONY : CMakeFiles/1_Class_.dir/build

CMakeFiles/1_Class_.dir/requires: CMakeFiles/1_Class_.dir/main.cpp.o.requires
CMakeFiles/1_Class_.dir/requires: CMakeFiles/1_Class_.dir/Student.cpp.o.requires

.PHONY : CMakeFiles/1_Class_.dir/requires

CMakeFiles/1_Class_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/1_Class_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/1_Class_.dir/clean

CMakeFiles/1_Class_.dir/depend:
	cd "/Users/qasim/Desktop/cpp11/2.Classes and Objects/7.Static Member function/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/qasim/Desktop/cpp11/2.Classes and Objects/7.Static Member function" "/Users/qasim/Desktop/cpp11/2.Classes and Objects/7.Static Member function" "/Users/qasim/Desktop/cpp11/2.Classes and Objects/7.Static Member function/cmake-build-debug" "/Users/qasim/Desktop/cpp11/2.Classes and Objects/7.Static Member function/cmake-build-debug" "/Users/qasim/Desktop/cpp11/2.Classes and Objects/7.Static Member function/cmake-build-debug/CMakeFiles/1_Class_.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/1_Class_.dir/depend

