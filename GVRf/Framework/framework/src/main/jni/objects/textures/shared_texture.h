/* Copyright 2015 Samsung Electronics Co., LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SHARED_TEXTURE_H_
#define SHARED_TEXTURE_H_

#define __gl2_h_
#include <GLES3/gl3.h>
#include <GLES2/gl2ext.h>

#include "objects/textures/texture.h"

namespace gvr {

class SharedTexture: public Texture {
public:
    SharedTexture(int id) :
            Texture(new GLTexture(TARGET, id)) {
    }

    GLenum getTarget() const {
        return TARGET;
    }

private:
    static const GLenum TARGET = GL_TEXTURE_2D;
};

}
#endif
