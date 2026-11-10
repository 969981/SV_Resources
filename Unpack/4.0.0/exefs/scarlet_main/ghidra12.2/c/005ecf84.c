/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005ecf84; name: FUN_005ecf84
 */


void FUN_005ecf84(__shared_weak_count *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047ceb10;
  *(undefined **)param_1 = PTR_DAT_047ceb08 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar1 + 0x10;
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x70));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x50));
  FUN_027c2bd0(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


