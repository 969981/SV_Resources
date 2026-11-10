/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01335c30; name: FUN_01335c30
 */


void FUN_01335c30(long param_1,undefined2 param_2)

{
  undefined2 local_28 [4];
  
  local_28[0] = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x120));
  *(undefined1 *)(param_1 + 0x108) = 1;
  FUN_022170e8(*(undefined8 *)(param_1 + 200),local_28);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x120));
  return;
}


