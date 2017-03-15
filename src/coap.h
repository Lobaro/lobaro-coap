/*******************************************************************************
 * Copyright (c)  2015  Dipl.-Ing. Tobias Rohde, http://www.lobaro.com
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *******************************************************************************/

#ifndef COAP_H_
#define COAP_H_

#ifdef __cplusplus
extern "C" {
#endif

//"glue" and actual system related functions
//go there to see what to do adapting the library to your platform
#include "interface/coap_interface.h"
#include "liblobaro_coap.h"

//Internal stack functions


#define MAX_PAYLOAD_SIZE        (256)  //should not exceed 1024 bytes (see 4.6 RFC7252) (must be power of 2 to fit with blocksize option!)
#define PREFERED_PAYLOAD_SIZE    (64)   //also size of inital pResp message payload buffer in user resource handler

#define COAP_VERSION (1)

//V1.2
#define LOBARO_COAP_VERSION_MAJOR (1)
#define LOBARO_COAP_VERSION_MINOR (2)

#include "coap_options.h"
#include "coap_message.h"
#include "option-types/coap_option_blockwise.h"
#include "option-types/coap_option_ETag.h"
#include "option-types/coap_option_cf.h"
#include "option-types/coap_option_uri.h"
#include "option-types/coap_option_observe.h"
#include "coap_resource.h"
#include "coap_interaction.h"
#include "coap_main.h"


#ifdef __cplusplus
	}
	#endif

#endif /* COAP_H_ */
