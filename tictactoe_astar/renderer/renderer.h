#ifndef TICTACTOE_ASTAR_RENDERER_H_
#define TICTACTOE_ASTAR_RENDERER_H_
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <stdlib.h>

namespace tictactoe_astar::renderer {

void init();

void terminate();

class Renderer {
private:
  const size_t _size;
  GLFWwindow *_window;
  GLuint _vertex_buffer_object;
  GLuint _vertex_array_object;
  GLuint _vertex_shader;
  GLuint _fragment_shader;
  GLuint _shader_program;

public:
  Renderer(size_t size);
  ~Renderer();
  void render();
  bool should_close();
};

} // namespace tictactoe_astar::renderer

#endif
