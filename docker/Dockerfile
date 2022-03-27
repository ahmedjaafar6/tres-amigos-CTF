FROM debian:buster-slim


RUN apt-get update \
    && apt-get install -y \
    gcc \
    clang \
    gdb \
    gpg \
    crunch \
    hexedit \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

RUN mkdir tres-amigos
COPY part1.c tres-amigos/part1.c
COPY part2.c tres-amigos/part2.c
COPY part3.c tres-amigos/part3.c
COPY get_password.c tres-amigos/get_password.c
COPY destination.txt tres-amigos/destination.txt
COPY run.sh tres-amigos/run.sh

WORKDIR /tres-amigos