/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011ba820; name: FUN_011ba820
 */


bool FUN_011ba820(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x428));
  uVar2 = FUN_011ba878(param_1);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x748) = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x428));
  return bVar1;
}


