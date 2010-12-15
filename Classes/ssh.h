/*
 *  ssh.h
 *  MacSleep
 *
 *  Created by Eduard Litau on 12/11/10.
 *  Copyright 2010 FH Köln, simfy GmbH. All rights reserved.
 *
 */

#include "libssh2_config.h"
#include "libssh2.h"
# include <sys/socket.h>
# include <netinet/in.h>
# include <arpa/inet.h>
#include <unistd.h>

#ifdef HAVE_WINSOCK2_H
# include <winsock2.h>
#endif
#ifdef HAVE_SYS_SOCKET_H

#endif
#ifdef HAVE_NETINET_IN_H
# include <netinet/in.h>
#endif
#ifdef HAVE_SYS_SELECT_H
# include <sys/select.h>
#endif
# ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#ifdef HAVE_ARPA_INET_H
# include <arpa/inet.h>
#endif

#include <sys/time.h>
#include <sys/types.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <ctype.h>

int connectMac(int argc, char *argv[]);