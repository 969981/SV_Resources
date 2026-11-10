/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03093404; name: FUN_03093404
 */


long FUN_03093404(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  uVar2 = *(uint *)(param_1 + 0x118);
  iVar4 = uVar2 + param_2;
  if ((int)(*(uint *)(param_1 + 0x11c) & 0x7fffffff) < iVar4) {
    FUN_03095650(param_1 + 0x110,PTR_PTR_047d1a50,(long)iVar4);
    uVar2 = *(uint *)(param_1 + 0x118);
  }
  if ((int)uVar2 < iVar4) {
    *(int *)(param_1 + 0x118) = iVar4;
    memset((void *)(*(long *)(param_1 + 0x110) + (long)(int)uVar2 * 2),0xff,
           (ulong)(iVar4 + ~uVar2) * 2 + 2);
  }
  else if (iVar4 < (int)uVar2) {
    *(int *)(param_1 + 0x118) = iVar4;
  }
  lVar5 = (long)*(int *)(param_1 + 0x158) + (long)*(int *)(param_1 + 0x60) * (long)param_2;
  iVar4 = (int)lVar5;
  if ((int)(*(uint *)(param_1 + 0x15c) & 0x7fffffff) < iVar4) {
    FUN_02e9b320(param_1 + 0x150,PTR_PTR_047d1a50,lVar5);
  }
  iVar1 = *(int *)(param_1 + 0xe8);
  iVar3 = iVar1 + param_2;
  *(int *)(param_1 + 0x158) = iVar4;
  if ((int)(*(uint *)(param_1 + 0xec) & 0x7fffffff) < iVar3) {
    nn::os::LockMutex(*(MutexType **)(param_1 + 0x1a8));
    iVar4 = *(int *)(param_1 + 0xe8);
    lVar5 = (long)iVar4 + (long)param_2;
    iVar3 = (int)lVar5;
    if ((int)(*(uint *)(param_1 + 0xec) & 0x7fffffff) < iVar3) {
      FUN_0309515c(param_1 + 0xe0,PTR_PTR_047d1a50,lVar5);
    }
    lVar5 = *(long *)(param_1 + 0xe0) + (long)iVar4 * 0x14;
    *(int *)(param_1 + 0xe8) = iVar3;
    nn::os::UnlockMutex(*(MutexType **)(param_1 + 0x1a8));
  }
  else {
    *(int *)(param_1 + 0xe8) = iVar3;
    lVar5 = *(long *)(param_1 + 0xe0) + (long)iVar1 * 0x14;
  }
  return lVar5;
}


