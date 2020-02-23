- add catch2 tests.

# fix api
- only have to use has_member()
- to not have to use decltype 
- to not have to use ::remove_reference_t
- so a reference is handled correctly without using to use std::remove_reference_t

example:

if constexpr (HAS_MEMBER(std::remove_reference_t<decltype(msg)>, aField)) {

# clean up 
- fix as it can build in clang++
- fix so it can build using msbuild from command line
- add cmake support.
