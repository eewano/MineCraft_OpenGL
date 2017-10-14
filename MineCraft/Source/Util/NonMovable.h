#ifndef NonMovable_h
#define NonMovable_h

class NonMovable {
public:
    NonMovable(NonMovable &&) = delete;

    NonMovable &operator=(NonMovable &&) = delete;

protected:
    NonMovable() = default;
};

#endif /* NonMovable_h */
