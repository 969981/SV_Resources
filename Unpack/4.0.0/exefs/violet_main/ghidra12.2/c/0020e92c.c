/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0020e92c; name: FUN_0020e92c
 */


void FUN_0020e92c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cba40 + 0x10);
  if (param_1[2] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


