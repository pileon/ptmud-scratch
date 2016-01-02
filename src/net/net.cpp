//
// Created by arrow on 2015-12-29.
//

#include "../ptmud.h"
#include <iostream>
#include <thread>
#include <forward_list>
#include <memory>

#include "net.h"
#include "net_private.h"
#include "basic_connection.h"
#include "basic_server.h"

namespace
{
    asio::io_service                                     io_service;
    std::thread                                          io_service_thread;
    std::forward_list<std::shared_ptr<basic_server>>     servers;           // We can have multiple "servers"
    std::forward_list<std::shared_ptr<basic_connection>> connections;       // All connections for all servers
}

namespace net
{
    void init()
    {
        io_service_thread = std::thread(
                // Note: CLion treats the lambda as an error, it's a known bug
                []()
                {
                    io_service.run();
                });

        // TODO: Start the acceptor
    }

    void clean()
    {
        io_service.stop();
        io_service_thread.join();
    }

    asio::io_service& service()
    {
        return io_service;
    }
}
