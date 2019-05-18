#!/bin/bash

MY_PWD=`pwd`

# bx
if [ -d ./bx ]; then
	cd ./bx
	git pull
	cd ${MY_PWD}
else
	git clone git://github.com/bkaradzic/bx.git
fi


# bimg
if [ -d ./bimg ]; then
	cd ./bimg
	git pull
	cd ${MY_PWD}
else
	git clone git://github.com/bkaradzic/bimg.git
fi


# bgfx
if [ -d ./bgfx ]; then
	cd ./bgfx
	git pull
	cd ${MY_PWD}
else
	git clone git://github.com/bkaradzic/bgfx.git
fi


# lua-bgfx
if [ -d ./lua-bgfx ]; then
	cd ./lua-bgfx
	git pull
	cd ${MY_PWD}
else
	git clone git://github.com/cloudwu/lua-bgfx.git
fi
