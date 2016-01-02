//
// Created by arrow on 2016-01-02.
//

#ifndef PTMUD_SCRATCH_CONNECTION_H
#define PTMUD_SCRATCH_CONNECTION_H

// Generic basic_connection class
class basic_connection : public std::enable_shared_from_this<basic_connection>
{
public:
    using pointer = std::shared_ptr<basic_connection>;

    template<typename T>
    static pointer create()
    {
        return std::make_shared<T>();
    }
};


#endif //PTMUD_SCRATCH_CONNECTION_H
