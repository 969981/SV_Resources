/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0020e90c; name: FUN_0020e90c
 */


void FUN_0020e90c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cba40 + 0x10);
  if (param_1[2] == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


