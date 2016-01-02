//
// Created by arrow on 2015-12-29.
//

#include "../ptmud.h"
#include <iostream>
#include <thread>
#include <forward_list>

#include "net.h"
#include "net_private.h"

namespace
{
    asio::io_service io_service;
    std::thread      io_service_thread;
    // std::forward_list<connection> connections;
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
