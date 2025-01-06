#include <stdio.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <linux/videodev2.h>

int main()
{
    int fd = open("/dev/video0", O_RDWR);
    if (fd != -1)
    {
        struct v4l2_fmtdesc fmtdesc{}; //={} is C++ style zero-initialization
        //memset(&fmtdesc,0,sizeof(fmtdesc)); //memset is C style zero-initialization

        fmtdesc.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
        while (::ioctl(fd,VIDIOC_ENUM_FMT,&fmtdesc) == 0)
        {
            printf("%s\n", fmtdesc.description);
            fmtdesc.index++;
        }
        close(fd);
    }
}
