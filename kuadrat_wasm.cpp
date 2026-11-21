#include <emscripten/bind.h>

using namespace emscripten;

int kuadrat(int x) {
    return x * x;
}

EMSCRIPTEN_BINDINGS(modul_kuadrat) {
    function("kuadrat", &kuadrat);
}