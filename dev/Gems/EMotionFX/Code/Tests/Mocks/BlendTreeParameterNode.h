/*
* All or portions of this file Copyright (c) Amazon.com, Inc. or its affiliates or
* its licensors.
*
* For complete copyright and license terms please see the LICENSE at the root of this
* distribution (the "License"). All use of this software is governed by the License,
* or, if provided, by the license below or the license accompanying this file. Do not
* remove or modify any license notices. This file is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*
*/

namespace EMotionFX
{
    class EMFX_API BlendTreeParameterNode
        : public AnimGraphNode
        , public ObjectAffectedByParameterChanges
    {
    public:
        AZ_RTTI(BlendTreeParameterNode, "{4510529A-323F-40F6-B773-9FA8FC4DE53D}", AnimGraphNode, ObjectAffectedByParameterChanges)
    };
} // namespace EMotionFX
