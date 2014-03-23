#pragma once
#include <Precompiled.h>
#include <ShaderUtility.h>

#define BUFFER_OFFSET(x)  (reinterpret_cast<const void *>(x))

class ChapterTwo
{
public:

    ChapterTwo( void );
    ~ChapterTwo( void );
    ChapterTwo( const ChapterTwo &other ) = delete;
    ChapterTwo &operator= ( const ChapterTwo &other ) = delete;

    void Initialize( void );
    void Draw( void );
    void Step( double time_step );

private:
    enum class vertex_array_object_identifiers
    {
        triangles,
        num_arrays
    };

    enum class buffer_object_identifiers
    {
        array_buffer,
        num_buffers
    };

    enum class attribute_object_identifiers
    {
        vertex_position = 0,
        num_attributes
    };

    std::vector<GLuint> vertex_array_objects;
    std::vector<GLuint> buffer_objects;

    enum class uniform_block_identifiers
    {
        translation,
        scale,
        rotation,
        enabled,
        num_uniforms
    };

    const GLuint num_vertices;
};