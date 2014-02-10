#include<fuse.h>
#include<stdio.h>
#include <errno.h>
#include <fcntl.h>
	

static int test_read(const char *path, char *buf, size_t size, off_t offset, struct fuse_file_info *fi){
  printf("Read operation");
}


static struct fuse_operations test_oper = {
	.read = test_read,
};


int main(int argc, char *argv[]){
	int ret = fuse_main(argc, argv, &test_oper);
	printf("return value is %d\n", ret);
	return 0;
}
