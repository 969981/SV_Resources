/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00567128; name: FUN_00567128
 */


void FUN_00567128(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cdfe8 + 0x10);
  if (param_1[2] == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


