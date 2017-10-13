#ifndef NonCopyable_h
#define NonCopyable_h

struct NonCopyable {
    NonCopyable() = default;

    NonCopyable(const NonCopyable &) = delete;

    NonCopyable &operator=(const NonCopyable &) = delete;
};

#endif /* NonCopyable_h */
