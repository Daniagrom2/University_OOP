# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Danik/CLionProjects/UNI/FIrstPara

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Danik/CLionProjects/UNI/FIrstPara/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FIrstPara.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/FIrstPara.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FIrstPara.dir/flags.make

CMakeFiles/FIrstPara.dir/main.cpp.o: CMakeFiles/FIrstPara.dir/flags.make
CMakeFiles/FIrstPara.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Danik/CLionProjects/UNI/FIrstPara/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FIrstPara.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FIrstPara.dir/main.cpp.o -c /Users/Danik/CLionProjects/UNI/FIrstPara/main.cpp

CMakeFiles/FIrstPara.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FIrstPara.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Danik/CLionProjects/UNI/FIrstPara/main.cpp > CMakeFiles/FIrstPara.dir/main.cpp.i

CMakeFiles/FIrstPara.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FIrstPara.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Danik/CLionProjects/UNI/FIrstPara/main.cpp -o CMakeFiles/FIrstPara.dir/main.cpp.s

# Object files for target FIrstPara
FIrstPara_OBJECTS = \
"CMakeFiles/FIrstPara.dir/main.cpp.o"

# External object files for target FIrstPara
FIrstPara_EXTERNAL_OBJECTS =

FIrstPara: CMakeFiles/FIrstPara.dir/main.cpp.o
FIrstPara: CMakeFiles/FIrstPara.dir/build.make
FIrstPara: CMakeFiles/FIrstPara.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Danik/CLionProjects/UNI/FIrstPara/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FIrstPara"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FIrstPara.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FIrstPara.dir/build: FIrstPara
.PHONY : CMakeFiles/FIrstPara.dir/build

CMakeFiles/FIrstPara.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FIrstPara.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FIrstPara.dir/clean

CMakeFiles/FIrstPara.dir/depend:
	cd /Users/Danik/CLionProjects/UNI/FIrstPara/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Danik/CLionProjects/UNI/FIrstPara /Users/Danik/CLionProjects/UNI/FIrstPara /Users/Danik/CLionProjects/UNI/FIrstPara/cmake-build-debug /Users/Danik/CLionProjects/UNI/FIrstPara/cmake-build-debug /Users/Danik/CLionProjects/UNI/FIrstPara/cmake-build-debug/CMakeFiles/FIrstPara.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FIrstPara.dir/depend

