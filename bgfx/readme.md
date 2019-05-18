
### 下载

```
git clone git://github.com/bkaradzic/bx.git
git clone git://github.com/bkaradzic/bimg.git
git clone git://github.com/bkaradzic/bgfx.git
git clone git://github.com/cloudwu/lua-bgfx.git
```

### Windows msc编译

```
cd xxx\bgfx\bgfx
..\bx\tools\bin\windows\genie.exe --with-examples vs2015
```

### Ubuntu编译

```
sudo apt-get install mesa-common-dev
sudo apt-get install libgl1-mesa-dev libglu1-mesa-dev

cd xxx/bgfx
make linux-release64
```
