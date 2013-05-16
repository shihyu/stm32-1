/*! \file fc_net.h
 *
 * Define the Flight Computer network information
 *
 */

#ifndef _FC_NET_H
#define _FC_NET_H


#if LWIP_NETCONN
	#include "lwip/ip_addr.h"
	#define         IP_PSAS_FC(p)           IP4_ADDR(p, 192, 168, 0, 200)
#endif
#define         FC_LISTEN_PORT_IMU_A_MPU     36000
#define         FC_LISTEN_PORT_IMU_A_ADIS    36020

#endif
