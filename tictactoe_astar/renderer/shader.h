#ifndef TICTACTOE_ASTAR_RENDERER_SHADER_H_
#define TICTACTOE_ASTAR_RENDERER_SHADER_H_
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <string>

namespace tictactoe_astar::renderer {

class Shader {
public:
  Shader(std::string vertex_source_code, std::string fragment_source_code);
  ~Shader();
  void use();

  void set_uniform(std::string name, float x, float y);

private:
  GLuint _program;

  GLuint load_program(std::string vertex_source_code,
                      std::string fragment_source_code);
  GLuint load_vertex_shader(std::string vertex_source_code);
  GLuint load_fragment_shader(std::string fragment_source);
};

} // namespace tictactoe_astar::renderer
#endif