# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\Data_Structrues_And_Algorithms_C\Data_Structures_And_Algorithms_C\point_func

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\Data_Structrues_And_Algorithms_C\Data_Structures_And_Algorithms_C\point_func\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/point_func.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/point_func.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/point_func.dir/flags.make

CMakeFiles/point_func.dir/main.c.obj: CMakeFiles/point_func.dir/flags.make
CMakeFiles/point_func.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Data_Structrues_And_Algorithms_C\Data_Structures_And_Algorithms_C\point_func\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/point_func.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\point_func.dir\main.c.obj   -c F:\Data_Structrues_And_Algorithms_C\Data_Structures_And_Algorithms_C\point_func\main.c

CMakeFiles/point_func.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/point_func.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\Data_Structrues_And_Algorithms_C\Data_Structures_And_Algorithms_C\point_func\main.c > CMakeFiles\point_func.dir\main.c.i

CMakeFiles/point_func.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/point_func.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\Data_Structrues_And_Algorithms_C\Data_Structures_And_Algorithms_C\point_func\main.c -o CMakeFiles\point_func.dir\main.c.s

# Object files for target point_func
point_func_OBJECTS = \
"CMakeFiles/point_func.dir/main.c.obj"

# External object files for target point_func
point_func_EXTERNAL_OBJECTS =

point_func.exe: CMakeFiles/point_func.dir/main.c.obj
point_func.exe: CMakeFiles/point_func.dir/build.make
point_func.exe: CMakeFiles/point_func.dir/linklibs.rsp
point_func.exe: CMakeFiles/point_func.dir/objects1.rsp
point_func.exe: CMakeFiles/point_func.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\Data_Structrues_And_Algorithms_C\Data_Structures_And_Algorithms_C\point_func\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable point_func.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\point_func.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/point_func.dir/build: point_func.exe

.PHONY : CMakeFiles/point_func.dir/build

CMakeFiles/point_func.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\point_func.dir\cmake_clean.cmake
.PHONY : CMakeFiles/point_func.dir/clean

CMakeFiles/point_func.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\Data_Structrues_And_Algorithms_C\Data_Structures_And_Algorithms_C\point_func F:\Data_Structrues_And_Algorithms_C\Data_Structures_And_Algorithms_C\point_func F:\Data_Structrues_And_Algorithms_C\Data_Structures_And_Algorithms_C\point_func\cmake-build-debug F:\Data_Structrues_And_Algorithms_C\Data_Structures_And_Algorithms_C\point_func\cmake-build-debug F:\Data_Structrues_And_Algorithms_C\Data_Structures_And_Algorithms_C\point_func\cmake-build-debug\CMakeFiles\point_func.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/point_func.dir/depend
