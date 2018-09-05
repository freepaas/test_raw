#include <stdio.h>
#include <sys/socket.h>
#include <errno.h>
#include <netinet/in.h>

int main()
{
	int i, sockfd;
	sockfd = socket(AF_INET, SOCK_RAW, IPPROTO_ICMP);
	if (sockfd < 0)
	{
		perror("error");
	}
}
