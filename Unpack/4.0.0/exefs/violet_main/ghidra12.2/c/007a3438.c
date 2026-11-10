/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a3438; name: FUN_007a3438
 */


void FUN_007a3438(long *param_1,long param_2,undefined4 param_3,long param_4)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  long lVar5;
  
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[9] = param_4;
  *param_1 = (long)(PTR_DAT_047d0ab0 + 0x10);
  param_1[1] = param_2;
  *(undefined1 *)((long)param_1 + 0x14) = 0x11;
  param_1[3] = 0x1e;
  uVar4 = FUN_0079c0a0(param_4);
  if (((uVar4 & 1) == 0) && (uVar4 = FUN_0079c92c(param_4), (uVar4 & 1) == 0)) {
    bVar1 = false;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined2 *)((long)param_1 + 0x42) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_4 + 0x60);
    uVar3 = FUN_007ec514(param_4);
    *(undefined2 *)(param_1 + 5) = uVar3;
    lVar5 = FUN_007ec50c(param_4);
    param_1[6] = lVar5;
    nn::os::LockMutex((MutexType *)(param_4 + 0x1f8));
    if (*(long *)(param_4 + 0x218) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_027e983c();
    }
    nn::os::UnlockMutex((MutexType *)(param_4 + 0x1f8));
    param_1[7] = lVar5;
    uVar2 = FUN_007a07fc(param_4);
    *(undefined1 *)(param_1 + 8) = uVar2;
    *(undefined2 *)((long)param_1 + 0x42) = *(undefined2 *)(param_4 + 0x114e);
    bVar1 = *(int *)(param_4 + 0x1c0) == 1;
  }
  *(bool *)((long)param_1 + 0x44) = bVar1;
  return;
}


