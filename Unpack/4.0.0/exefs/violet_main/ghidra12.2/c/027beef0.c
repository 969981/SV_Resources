/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027beef0; name: FUN_027beef0
 */


void FUN_027beef0(long param_1)

{
  FUN_027bf110();
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x170));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x148));
  FUN_027bf154(param_1);
  return;
}


