# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\alejo\Documents\Facultad\AyED\2do Parcial"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\alejo\Documents\Facultad\AyED\2do Parcial\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/2do_Parcial.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/2do_Parcial.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2do_Parcial.dir/flags.make

CMakeFiles/2do_Parcial.dir/main.cpp.obj: CMakeFiles/2do_Parcial.dir/flags.make
CMakeFiles/2do_Parcial.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\alejo\Documents\Facultad\AyED\2do Parcial\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/2do_Parcial.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\2do_Parcial.dir\main.cpp.obj -c "C:\Users\alejo\Documents\Facultad\AyED\2do Parcial\main.cpp"

CMakeFiles/2do_Parcial.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2do_Parcial.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\alejo\Documents\Facultad\AyED\2do Parcial\main.cpp" > CMakeFiles\2do_Parcial.dir\main.cpp.i

CMakeFiles/2do_Parcial.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2do_Parcial.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\alejo\Documents\Facultad\AyED\2do Parcial\main.cpp" -o CMakeFiles\2do_Parcial.dir\main.cpp.s

# Object files for target 2do_Parcial
2do_Parcial_OBJECTS = \
"CMakeFiles/2do_Parcial.dir/main.cpp.obj"

# External object files for target 2do_Parcial
2do_Parcial_EXTERNAL_OBJECTS =

2do_Parcial.exe: CMakeFiles/2do_Parcial.dir/main.cpp.obj
2do_Parcial.exe: CMakeFiles/2do_Parcial.dir/build.make
2do_Parcial.exe: CMakeFiles/2do_Parcial.dir/linklibs.rsp
2do_Parcial.exe: CMakeFiles/2do_Parcial.dir/objects1.rsp
2do_Parcial.exe: CMakeFiles/2do_Parcial.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\alejo\Documents\Facultad\AyED\2do Parcial\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 2do_Parcial.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\2do_Parcial.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2do_Parcial.dir/build: 2do_Parcial.exe

.PHONY : CMakeFiles/2do_Parcial.dir/build

CMakeFiles/2do_Parcial.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\2do_Parcial.dir\cmake_clean.cmake
.PHONY : CMakeFiles/2do_Parcial.dir/clean

CMakeFiles/2do_Parcial.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\alejo\Documents\Facultad\AyED\2do Parcial" "C:\Users\alejo\Documents\Facultad\AyED\2do Parcial" "C:\Users\alejo\Documents\Facultad\AyED\2do Parcial\cmake-build-debug" "C:\Users\alejo\Documents\Facultad\AyED\2do Parcial\cmake-build-debug" "C:\Users\alejo\Documents\Facultad\AyED\2do Parcial\cmake-build-debug\CMakeFiles\2do_Parcial.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/2do_Parcial.dir/depend
