/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f49b6c; name: FUN_02f49b6c
 */


void FUN_02f49b6c(long *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  long lVar2;
  MutexType *pMVar3;
  long lVar4;
  
  pMVar3 = *(MutexType **)(*param_1 + 0x48);
  nn::os::LockMutex(pMVar3);
  lVar4 = *param_1;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | param_3;
  iVar1 = *(int *)(lVar4 + 0x40);
  lVar2 = (long)iVar1;
  if ((int)(*(uint *)(lVar4 + 0x44) & 0x7fffffff) <= iVar1) {
    FUN_02f49fa8(lVar4 + 0x38,lVar2 + 1);
    iVar1 = *(int *)(lVar4 + 0x40);
  }
  *(long **)(*(long *)(lVar4 + 0x38) + (long)iVar1 * 8) = param_1;
  *(int *)(lVar4 + 0x40) = (int)(lVar2 + 1);
  nn::os::UnlockMutex(pMVar3);
  return;
}


