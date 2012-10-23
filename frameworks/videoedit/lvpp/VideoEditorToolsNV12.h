/*************************************************************************************
 * INTEL CONFIDENTIAL
 * Copyright 2011 Intel Corporation All Rights Reserved.
 * The source code contained or described herein and all documents related
 * to the source code ("Material") are owned by Intel Corporation or its
 * suppliers or licensors. Title to the Material remains with Intel
 * Corporation or its suppliers and licensors. The Material contains trade
 * secrets and proprietary and confidential information of Intel or its
 * suppliers and licensors. The Material is protected by worldwide copyright
 * and trade secret laws and treaty provisions. No part of the Material may
 * be used, copied, reproduced, modified, published, uploaded, posted,
 * transmitted, distributed, or disclosed in any way without Intel's prior
 * express written permission.
 *
 * No license under any patent, copyright, trade secret or other intellectual
 * property right is granted to or conferred upon you by disclosure or delivery
 * of the Materials, either expressly, by implication, inducement, estoppel or
 * otherwise. Any license under such intellectual property rights must be express
 * and approved by Intel in writing.
 ************************************************************************************/
/*
 * Copyright (C) 2011 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef VIDEO_EDITOR_TOOLS_NV12_H
#define VIDEO_EDITOR_TOOLS_NV12_H

#include "M4OSA_Types.h"
#include "M4VIFI_FiltersAPI.h"
#include "M4VIFI_Clip.h"
#include "M4VIFI_Defines.h"
#include "M4OSA_Memory.h"

M4VIFI_UInt8 M4VIFI_RGB888toNV12(void *pUserData,
    M4VIFI_ImagePlane *pPlaneIn, M4VIFI_ImagePlane *pPlaneOut);

M4VIFI_UInt8 M4VIFI_NV12toNV12(void *user_data,
    M4VIFI_ImagePlane *pPlaneIn, M4VIFI_ImagePlane *pPlaneOut);

M4VIFI_UInt8 M4VIFI_ResizeBilinearNV12toNV12(void *pUserData,
    M4VIFI_ImagePlane *pPlaneIn, M4VIFI_ImagePlane *pPlaneOut);

M4VIFI_UInt8 M4VIFI_Rotate90LeftNV12toNV12(void* pUserData,
    M4VIFI_ImagePlane *pPlaneIn, M4VIFI_ImagePlane *pPlaneOut);

M4VIFI_UInt8 M4VIFI_Rotate90RightNV12toNV12(void* pUserData,
    M4VIFI_ImagePlane *pPlaneIn, M4VIFI_ImagePlane *pPlaneOut);

M4VIFI_UInt8 M4VIFI_Rotate180NV12toNV12(void* pUserData,
    M4VIFI_ImagePlane *pPlaneIn, M4VIFI_ImagePlane *pPlaneOut);

M4VIFI_UInt8 M4VIFI_ResizeBilinearNV12toBGR565(void *pUserData,
    M4VIFI_ImagePlane *pPlaneIn, M4VIFI_ImagePlane *pPlaneOut);

M4VIFI_UInt8 M4VIFI_ResizeBilinearNV12toYUV420(void *pUserData,
    M4VIFI_ImagePlane *pPlaneIn, M4VIFI_ImagePlane *pPlaneOut);

#endif

