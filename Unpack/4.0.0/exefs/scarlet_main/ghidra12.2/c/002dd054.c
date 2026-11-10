/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002dd054; name: FUN_002dd054
 */


void FUN_002dd054(logic_error *param_1)

{
  std::logic_error::logic_error
            (param_1,"allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  *(undefined **)param_1 = PTR_vtable_047cc8d0 + 0x10;
  return;
}


