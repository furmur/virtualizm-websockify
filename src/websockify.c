#include "stdlib.h"

#include "WebsocketBridge.h"

/* python3 -m websockets ws://127.0.0.1:52525
 * nc -l 127.0.0.1 5000 */

int main(int argc, char **argv)
{
    start("127.0.0.1");
    return EXIT_SUCCESS;
}