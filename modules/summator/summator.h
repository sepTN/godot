/* summator.h */

#ifndef SUMMATOR_H
#define SUMMATOR_H

#include "core/object/ref_counted.h"

class Summator : public RefCounted {
    GDCLASS(Summator, RefCounted);

    int count;

protected:
    static void _bind_methods();

public:
    Resource res();
    void add(int p_value);
    void sub(int p_value);
    void reset();
    int get_total() const;
    int get_magic() const;
    Summator();
};

#endif // SUMMATOR_H