#include "ttdnsd.h"

int main()
{
    DNSServer* dns_srv = DNSServer::getInstance();
    dns_srv->startDNSServer();
    return 0;
}
