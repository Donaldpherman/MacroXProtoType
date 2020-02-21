add catch2 tests.


fix api to only have to use has_member()
fix api to not have to use decltype or ::remove_reference_t

msg is a const&

if constexpr (HAS_MEMBER(std::remove_reference_t<decltype(msg)>, aField)) {
