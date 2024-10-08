#ifndef TICTACTOE_AI_RENDERER_GRID_H_
#define TICTACTOE_AI_RENDERER_GRID_H_

#include "tictactoe_ai/renderer/shader.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <vector>

namespace tictactoe_ai::renderer {

class Grid {
private:
  int _vertices_size;
  GLuint _vertex_buffer_object;
  GLuint _vertex_array_object;
  Shader &_shader;

public:
  Grid(int size, float line_width, Shader &shader);
  ~Grid();
  void draw();

private:
  std::vector<float> create_grid_vectices(int size, float line_width);
};

} // namespace tictactoe_ai::renderer

#endif
