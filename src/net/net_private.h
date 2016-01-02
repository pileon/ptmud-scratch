//
// Created by arrow on 2016-01-02.
//

#ifndef PTMUD_SCRATCH_NET_PRIVATE_H
#define PTMUD_SCRATCH_NET_PRIVATE_H

#ifdef HAVE_STANDALONE_ASIO
# include <asio/io_service.hpp>
#else
# include <boost/asio/io_service.hpp>
namespace asio = boost::asio;
#endif

namespace net
{
    asio::io_service& service();
}

#endif //PTMUD_SCRATCH_NET_PRIVATE_H
