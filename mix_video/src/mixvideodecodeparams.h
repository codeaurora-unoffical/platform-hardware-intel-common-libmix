/*
 INTEL CONFIDENTIAL
 Copyright 2009 Intel Corporation All Rights Reserved.
 The source code contained or described herein and all documents related to the source code ("Material") are owned by Intel Corporation or its suppliers or licensors. Title to the Material remains with Intel Corporation or its suppliers and licensors. The Material contains trade secrets and proprietary and confidential information of Intel or its suppliers and licensors. The Material is protected by worldwide copyright and trade secret laws and treaty provisions. No part of the Material may be used, copied, reproduced, modified, published, uploaded, posted, transmitted, distributed, or disclosed in any way without Intel’s prior express written permission.

 No license under any patent, copyright, trade secret or other intellectual property right is granted to or conferred upon you by disclosure or delivery of the Materials, either expressly, by implication, inducement, estoppel or otherwise. Any license under such intellectual property rights must be express and approved by Intel in writing.
 */

#ifndef __MIX_VIDEODECODEPARAMS_H__
#define __MIX_VIDEODECODEPARAMS_H__

#include <mixparams.h>
#include "mixvideodef.h"

G_BEGIN_DECLS

/**
 * MIX_TYPE_VIDEODECODEPARAMS:
 *
 * Get type of class.
 */
#define MIX_TYPE_VIDEODECODEPARAMS (mix_videodecodeparams_get_type ())

/**
 * MIX_VIDEODECODEPARAMS:
 * @obj: object to be type-casted.
 */
#define MIX_VIDEODECODEPARAMS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MIX_TYPE_VIDEODECODEPARAMS, MixVideoDecodeParams))

/**
 * MIX_IS_VIDEODECODEPARAMS:
 * @obj: an object.
 *
 * Checks if the given object is an instance of #MixParams
 */
#define MIX_IS_VIDEODECODEPARAMS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MIX_TYPE_VIDEODECODEPARAMS))

/**
 * MIX_VIDEODECODEPARAMS_CLASS:
 * @klass: class to be type-casted.
 */
#define MIX_VIDEODECODEPARAMS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), MIX_TYPE_VIDEODECODEPARAMS, MixVideoDecodeParamsClass))

/**
 * MIX_IS_VIDEODECODEPARAMS_CLASS:
 * @klass: a class.
 *
 * Checks if the given class is #MixParamsClass
 */
#define MIX_IS_VIDEODECODEPARAMS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), MIX_TYPE_VIDEODECODEPARAMS))

/**
 * MIX_VIDEODECODEPARAMS_GET_CLASS:
 * @obj: a #MixParams object.
 *
 * Get the class instance of the object.
 */
#define MIX_VIDEODECODEPARAMS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), MIX_TYPE_VIDEODECODEPARAMS, MixVideoDecodeParamsClass))

typedef struct _MixVideoDecodeParams MixVideoDecodeParams;
typedef struct _MixVideoDecodeParamsClass MixVideoDecodeParamsClass;

/**
 * MixVideoDecodeParams:
 *
 * MI-X VideoDecode Parameter object
 */
struct _MixVideoDecodeParams {
	/*< public > */
	MixParams parent;

	/*< public > */

	/* TODO: Add properties */
	
	/* Presentation timestamp for the video 
	 * frame data, in milliseconds */
	guint64 timestamp;
	
	/* Indicates a discontinuity in the stream */
	gboolean discontinuity;

    /* output only, indicate if stream contains a new sequence */
    gboolean new_sequence;
    
	/* Reserved for future use */	
	void *reserved1;
	
	/* Reserved for future use */	
	void *reserved2;
	
	/* Reserved for future use */	
	void *reserved3;
	
	/* Reserved for future use */	
	void *reserved4;
};

/**
 * MixVideoDecodeParamsClass:
 *
 * MI-X VideoDecode object class
 */
struct _MixVideoDecodeParamsClass {
	/*< public > */
	MixParamsClass parent_class;

	/* class members */
};

/**
 * mix_videodecodeparams_get_type:
 * @returns: type
 *
 * Get the type of object.
 */
GType mix_videodecodeparams_get_type(void);

/**
 * mix_videodecodeparams_new:
 * @returns: A newly allocated instance of #MixVideoDecodeParams
 *
 * Use this method to create new instance of #MixVideoDecodeParams
 */
MixVideoDecodeParams *mix_videodecodeparams_new(void);
/**
 * mix_videodecodeparams_ref:
 * @mix: object to add reference
 * @returns: the #MixVideoDecodeParams instance where reference count has been increased.
 *
 * Add reference count.
 */
MixVideoDecodeParams *mix_videodecodeparams_ref(MixVideoDecodeParams * mix);

/**
 * mix_videodecodeparams_unref:
 * @obj: object to unref.
 *
 * Decrement reference count of the object.
 */
#define mix_videodecodeparams_unref(obj) mix_params_unref(MIX_PARAMS(obj))

/* Class Methods */

/* TODO: Add getters and setters for properties */


/**
 * mix_videodecodeparams_set_timestamp:
 * @obj: #MixVideoDecodeParams object
 * @timestamp: Presentation timestamp for the video frame data, in milliseconds    
 * @returns: <link linkend="MixVideo-mixvideodef">Common Video Error Return Codes</link>
 *
 * Set Presentation timestamp 
 */
MIX_RESULT mix_videodecodeparams_set_timestamp(MixVideoDecodeParams * obj,
		guint64 timestamp);

/**
 * mix_videodecodeparams_get_timestamp:
 * @obj: #MixVideoDecodeParams object
 * @timestamp: Presentation timestamp for the video frame data, in milliseconds to be returned.     
 * @returns: <link linkend="MixVideo-mixvideodef">Common Video Error Return Codes</link>
 *
 * Get Presentation timestamp 
 */
MIX_RESULT mix_videodecodeparams_get_timestamp(MixVideoDecodeParams * obj,
		guint64 * timestamp);

/**
 * mix_videodecodeparams_set_discontinuity:
 * @obj: #MixVideoDecodeParams object
 * @discontinuity: Flag to indicate a discontinuity in the stream.     
 * @returns: <link linkend="MixVideo-mixvideodef">Common Video Error Return Codes</link>
 *
 * Set discontinuity flag
 */
MIX_RESULT mix_videodecodeparams_set_discontinuity(MixVideoDecodeParams * obj,
		gboolean discontinuity);


/**
 * mix_videodecodeparams_get_discontinuity:
 * @obj: #MixVideoDecodeParams object
 * @discontinuity: Discontinuity flag to be returned     
 * @returns: <link linkend="MixVideo-mixvideodef">Common Video Error Return Codes</link>
 *
 * Get discontinuity flag
 */
MIX_RESULT mix_videodecodeparams_get_discontinuity(MixVideoDecodeParams * obj,
		gboolean *discontinuity);


/**
 * mix_videodecodeparams_set_new_sequence:
 * @obj: #MixVideoDecodeParams object
 * @new_sequence: Flag to indicate if stream contains a new sequence.     
 * @returns: <link linkend="MixVideo-mixvideodef">Common Video Error Return Codes</link>
 *
 * Set new_sequence flag
 */
MIX_RESULT mix_videodecodeparams_set_new_sequence(MixVideoDecodeParams * obj,
		gboolean new_sequence);


/**
 * mix_videodecodeparams_get_new_sequence:
 * @obj: #MixVideoDecodeParams object
 * @new_sequence: new_sequence flag to be returned     
 * @returns: <link linkend="MixVideo-mixvideodef">Common Video Error Return Codes</link>
 *
 * Get new_sequence flag
 */
MIX_RESULT mix_videodecodeparams_get_new_sequence(MixVideoDecodeParams * obj,
		gboolean *new_sequence);
		

G_END_DECLS

#endif /* __MIX_VIDEODECODEPARAMS_H__ */
