FROM ubuntu:latest

RUN apt-get update && \
	apt-get install -y build-essential git cmake autoconf libtool pkg-config