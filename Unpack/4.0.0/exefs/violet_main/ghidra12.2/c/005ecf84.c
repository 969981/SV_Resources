/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


