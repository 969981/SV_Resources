/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6f118; name: FUN_01f6f118
 */


void FUN_01f6f118(long param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_01f6f208(param_1);
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


