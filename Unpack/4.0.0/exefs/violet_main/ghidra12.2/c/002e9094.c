/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e9094; name: FUN_002e9094
 */


void FUN_002e9094(logic_error *param_1)

{
  std::logic_error::logic_error
            (param_1,"allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  *(undefined **)param_1 = PTR_vtable_047cc8d0 + 0x10;
  return;
}


