//
// Created by arrow on 2016-01-02.
//

#ifndef PTMUD_SCRATCH_BASIC_SERVER_H
#define PTMUD_SCRATCH_BASIC_SERVER_H


class basic_server
{
protected:
    basic_server(asio::io_service& ios)
            : io_service_(ios)
    {}

private:
    asio::io_service& io_service_;
};


#endif //PTMUD_SCRATCH_BASIC_SERVER_H
