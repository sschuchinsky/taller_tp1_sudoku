#ifndef __SOCKET_H__
#define __SOCKET_H__
#include <stddef.h>

typedef struct {
    int fd;
} socket_t;

void socket_create(socket_t *self);

void socket_destroy(socket_t *self);

int socket_send(socket_t *self, char *buffer, size_t length);

int socket_recv(socket_t *self, char *buffer, size_t length);

int socket_connect(socket_t *self, const char *host, const char *service);

int socket_bind_and_listen(socket_t *self, const char *service);

int socket_accept(socket_t *self, socket_t *new_socket);

#endif
