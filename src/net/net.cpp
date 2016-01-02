//
// Created by arrow on 2015-12-29.
//

#include "../ptmud.h"
#include <iostream>
#include <thread>

#ifdef HAVE_STANDALONE_ASIO
# include <asio/io_service.hpp>
#else
# include <boost/asio/io_service.hpp>
#endif

#include "net.h"

namespace net
{
    asio::io_service io_service;
    std::thread io_service_thread;

    void init()
    {
        io_service_thread = std::thread(
                []()
                {
                    io_service.run();
                });
    }

    void clean()
    {
        io_service.stop();
        io_service_thread.join();
    }
}
