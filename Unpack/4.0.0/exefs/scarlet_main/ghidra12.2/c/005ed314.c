/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005ed314; name: FUN_005ed314
 */


void FUN_005ed314(long param_1)

{
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x60));
  FUN_005ed364(param_1 + 0x40,*(undefined8 *)(param_1 + 0x48));
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


