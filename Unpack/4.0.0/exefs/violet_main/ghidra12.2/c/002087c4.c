/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002087c4; name: FUN_002087c4
 */


void FUN_002087c4(__shared_weak_count *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047cbbe8;
  *(undefined **)param_1 = PTR_DAT_047cbbd8 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar1 + 0x10;
  if (param_1[0xe8] != (__shared_weak_count)0x0) {
    FUN_00215a14(param_1 + 200);
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
  *(undefined **)(param_1 + 0x20) = PTR_DAT_047cbbe0 + 0x10;
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x30));
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


