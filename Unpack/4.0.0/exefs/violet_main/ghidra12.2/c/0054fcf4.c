/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0054fcf4; name: FUN_0054fcf4
 */


undefined8 FUN_0054fcf4(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x128);
  bVar1 = FUN_001feef4(param_1 + 200);
  nn::os::LockMutex((MutexType *)(lVar2 + 0x38));
  *(byte *)(lVar2 + 0x58) = bVar1 & 1;
  *(undefined1 *)(lVar2 + 0x59) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x38));
  return 1;
}


