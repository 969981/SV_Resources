/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008069e4; name: FUN_008069e4
 */


void FUN_008069e4(long param_1)

{
  MutexType *pMVar1;
  
  pMVar1 = (MutexType *)(*(long *)(param_1 + 0x58) + 0x1378);
  nn::os::LockMutex(pMVar1);
  FUN_008014c4(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x1308));
  *(undefined1 *)(param_1 + 0x82) = 0;
  nn::os::UnlockMutex(pMVar1);
  return;
}


