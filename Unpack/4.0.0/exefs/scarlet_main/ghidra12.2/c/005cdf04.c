/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005cdf04; name: FUN_005cdf04
 */


void FUN_005cdf04(__shared_weak_count *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047ce7f8;
  *(undefined **)param_1 = PTR_DAT_047ce7e8 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar1 + 0x10;
  if (param_1[0x128] != (__shared_weak_count)0x0) {
    FUN_00606de0(param_1 + 200);
    if (param_1[0xa0] != (__shared_weak_count)0x0) {
      FUN_01cfa44c(param_1 + 0xa8,*(undefined8 *)(param_1 + 0xb0));
    }
    if (((byte)param_1[0x80] & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x18))
                (*(long **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x90),
                 *(ulong *)(param_1 + 0x80) & 0xfffffffffffffffe,1);
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x58));
  *(undefined **)(param_1 + 0x20) = PTR_DAT_047ce7f0 + 0x10;
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x30));
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


