#include <glfw/glfw3.h>

#if _MSC_VER
  #pragma comment(lib, "gdi32.lib")
  #pragma comment(lib, "user32.lib")
  #pragma comment(lib, "shell32.lib")
  #pragma comment(lib, "glfw3.lib")
  #pragma comment(lib, "opengl32.lib")
#elif __GNUC__
  // TODO: Linux
#endif

#define WINDOW_CAPTION "GLFW Application"
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
