/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005ed2cc; name: FUN_005ed2cc
 */


void FUN_005ed2cc(__shared_weak_count *param_1)

{
  *(undefined **)param_1 = PTR_DAT_047ceb18 + 0x10;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x60));
  FUN_005ed364(param_1 + 0x40,*(undefined8 *)(param_1 + 0x48));
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


