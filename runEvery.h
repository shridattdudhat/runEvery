#define runEvery(t) for (static typeof(t) _lasttime;\
                        (typeof(t))((typeof(t))millis() - _lasttime) > (t);\
                        _lasttime += (t))
