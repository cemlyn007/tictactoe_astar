#ifndef TICTACTOE_ASTAR_RENDERER_H_
#define TICTACTOE_ASTAR_RENDERER_H_
#include "tictactoe_astar/renderer/shader.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <string>

namespace tictactoe_astar::renderer {

void init();

void terminate();

class Renderer {
private:
  const size_t _size;
  GLFWwindow *_window;
  Shader _shader;

public:
  Renderer(size_t size);
  ~Renderer();
  void render();
  bool should_close();

private:
  GLFWwindow *create_window();
  std::string read_shader(const std::string &file_path);
};

} // namespace tictactoe_astar::renderer

#endif
