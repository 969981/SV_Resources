/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299e3d4; name: FUN_0299e3d4
 */


bool FUN_0299e3d4(long param_1,undefined8 param_2)

{
  MutexType *pMVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x240);
  pMVar1 = (MutexType *)(lVar3 + 0x70);
  nn::os::LockMutex(pMVar1);
  lVar3 = FUN_01479658(lVar3,param_2);
  if (((lVar3 == 0) || (*(int *)(lVar3 + 0xc) < 1)) || (*(char *)(lVar3 + 0x10) != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(lVar3 + 0x11) == '\0';
  }
  nn::os::UnlockMutex(pMVar1);
  return bVar2;
}


