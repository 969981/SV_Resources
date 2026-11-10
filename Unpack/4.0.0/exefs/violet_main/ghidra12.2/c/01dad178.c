/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dad178; name: FUN_01dad178
 */


void FUN_01dad178(long param_1)

{
  long *plVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x158));
  plVar1 = *(long **)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x38) = 0;
  for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_00f074a0(plVar1[3]);
  }
  FUN_020dd810(param_1 + 0x48);
  FUN_020dd8c0(param_1 + 0xb0);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x158));
  return;
}


