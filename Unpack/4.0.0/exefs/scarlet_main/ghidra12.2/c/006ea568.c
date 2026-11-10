/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006ea568; name: FUN_006ea568
 */


void FUN_006ea568(__shared_weak_count *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047cfea0;
  *(undefined **)param_1 = PTR_DAT_047cfe90 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar1 + 0x10;
  if (param_1[0xa0] != (__shared_weak_count)0x0) {
    FUN_007087d8(param_1 + 0x80);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x58));
  *(undefined **)(param_1 + 0x20) = PTR_DAT_047cfe98 + 0x10;
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x30));
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


