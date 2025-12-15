CC = gcc

.RECIPEPREFIX = |

#simpleGame:*.c
#| $(CC) -g m_main.c -Wall -Werror -w -lGL -lGLU -lglut -lm -o simpleGame

# Your source files
SRCS = m_main.c

# Output executable name
TARGET = simpleGame

# Directory for static libraries (adjust path as necessary)
LIB_DIR = /usr/local/lib64/
# Directory for include files (adjust path as necessary)
INCLUDE_DIR = /usr/include/GL/

# Compiler flags
# -I specifies the include path
# -D FREEGLUT_STATIC is crucial for Windows to use the static library headers correctly
# For Linux/macOS, it might not be strictly needed but doesn't hurt.
CFLAGS = -I$(INCLUDE_DIR) -D FREEGLUT_STATIC

# Linker flags and libraries
# -L specifies the library path
# -Wl,-Bstatic tells the linker to prefer static linking for libraries that follow
# -lfreeglut (or -lglut depending on how it was compiled) links the freeglut library
# Add other necessary system libraries (-lGL, -lGLU, etc.)
# Order matters: dependent libraries should come after the libraries that depend on them

# For Linux (adjust paths/libraries as needed)
LDFLAGS = -L$(LIB_DIR) -Wall -Werror -w -lGL -lGLU -lglut -lm

# For Windows (MinGW, adjust paths/libraries as needed)
# The -Wl,--subsystem,windows flag prevents a console window from opening
# LDFLAGS = -L$(LIB_DIR) -static -lfreeglut -lopengl32 -lglu32 -Wl,--subsystem,windows

# The default target
all: $(TARGET)

$(TARGET): $(SRCS)
| $(CC) $(SRCS) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

clean:
| rm -f $(TARGET) *.o

