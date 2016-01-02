//
// Created by arrow on 2016-01-02.
//

#ifndef PTMUD_SCRATCH_BASIC_SERVER_H
#define PTMUD_SCRATCH_BASIC_SERVER_H

namespace net
{
    class basic_server
    {
    protected:
        basic_server(asio::io_service& ios)
                : io_service_(ios)
        {
        }

        template <typename Protocol>
        void bind()
        {

        }

    private:
        asio::io_service& io_service_;
    };

    template<typename Protocol>
    class protocolled_server : public basic_server
    {
    public:
        protocolled_server(asio::io_service& ios, typename Protocol::endpoint const& endpoint)
                : basic_server(ios),
                  endpoint_(endpoint)
        {
        }

        void bind()
        {
            basic_server::bind<Protocol>();
        }

    private:
        typename Protocol::endpoint const endpoint_;
    };

    using tcp_server = protocolled_server<asio::ip::tcp>;

}

#endif //PTMUD_SCRATCH_BASIC_SERVER_H
