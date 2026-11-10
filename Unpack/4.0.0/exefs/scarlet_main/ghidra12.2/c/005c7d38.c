/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005c7d38; name: FUN_005c7d38
 */


void FUN_005c7d38(long param_1)

{
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


