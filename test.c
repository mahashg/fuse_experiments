#include<fuse.h>
#include<stdio.h>
#include <errno.h>
#include <fcntl.h>

/*
Get File Attributes
*/
static int hello_getattr(const char *path, struct stat *stbuf)
{
}

/*

*/
static int hello_readdir(const char *path, void *buf, fuse_fill_dir_t filler,
                         off_t offset, struct fuse_file_info *fi)
{
}

static int hello_open(const char *path, struct fuse_file_info *fi)
{
}

static int test_read(const char *path, char *buf, size_t size, off_t offset, struct fuse_file_info *fi){

}


static struct fuse_operations test_oper = {
        .read = test_read,
};


int main(int argc, char *argv[]){
        int ret = fuse_main(argc, argv, &test_oper);
        printf("return value is %d\n", ret);
        return 0;
}

