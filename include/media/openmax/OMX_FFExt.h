/*
 * Copyright 2012 Michael Chen <omxcodec@gmail.com>
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

#ifndef OMX_FFExt_h
#define OMX_FFExt_h

/** @defgroup video OpenMAX IL Video Domain
 * @ingroup iv
 * Structures for OpenMAX IL Video domain
 * @{
 */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/**
 * Each OMX header must include all required header files to allow the
 * header to compile without errors.  The includes below are required
 * for this header file to compile successfully 
 */

#include <OMX_Types.h>
#include <OMX_Core.h>

/* Index */
typedef enum OMX_FF_INDEXTYPE {
    /* Vendor specific area for storing indices */
    OMX_IndexParamAudioFFmpeg =
        ((OMX_INDEXTYPE)OMX_IndexVendorStartUnused + 1),
    OMX_IndexParamVideoFFmpeg,
} OMX_FF_INDEXTYPE;

/* Video */
typedef enum OMX_FF_VIDEO_CODINGTYPE {
    OMX_VIDEO_CodingFFMPEG =
        (OMX_VIDEO_CODINGTYPE) OMX_VIDEO_CodingVendorStartUnused + 1,
}OMX_FF_VIDEO_CODINGTYPE;

typedef struct OMX_VIDEO_PARAM_FFMPEGTYPE {
    OMX_U32 nSize;
    OMX_VERSIONTYPE nVersion;
    OMX_U32 nPortIndex;

    OMX_S32 eCodecId;              /**< enum AVCodecID */
    OMX_U32 nWidth;
    OMX_U32 nHeight;
} OMX_VIDEO_PARAM_FFMPEGTYPE;

/* Audio */
typedef enum OMX_FF_AUDIO_CODINGTYPE {
    OMX_AUDIO_CodingFFMPEG =
        (OMX_AUDIO_CODINGTYPE) OMX_AUDIO_CodingVendorStartUnused + 1,
}OMX_FF_AUDIO_CODINGTYPE;

typedef struct OMX_AUDIO_PARAM_FFMPEGTYPE {
    OMX_U32 nSize;
    OMX_VERSIONTYPE nVersion;
    OMX_U32 nPortIndex;

    OMX_S32 eCodecId;              /**< enum AVCodecID */
    OMX_U32 nChannels;             /**< Number of channels */
    OMX_U32 nBitRate;              /**< Bit rate of the input data.  Use 0 for variable
                                        rate or unknown bit rates */
    OMX_U32 nBitsPerSample;        /**< Number of bits in each sample */
    OMX_U32 nSampleRate;           /**< Sampling rate of the source data.  Use 0 for
                                        variable or unknown sampling rate. */
    OMX_U32 nBlockAlign;           /**< is the block alignment, or block size, in bytes of the audio codec */

    OMX_S32 eSampleFormat;         /**< enum AVSampleFormat */
} OMX_AUDIO_PARAM_FFMPEGTYPE;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
/* File EOF */

