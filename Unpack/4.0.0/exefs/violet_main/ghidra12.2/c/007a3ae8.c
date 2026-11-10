/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a3ae8; name: FUN_007a3ae8
 */


void FUN_007a3ae8(long *param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined2 uVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(PTR_DAT_047d0ad0 + 0x10);
  param_1[1] = param_2;
  *(undefined1 *)((long)param_1 + 0x14) = 0x41;
  param_1[3] = 0x16;
  if (param_4 == 0) {
    uVar1 = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_4 + 0x1f8));
    if (*(long *)(param_4 + 0x218) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_027e983c();
    }
    nn::os::UnlockMutex((MutexType *)(param_4 + 0x1f8));
    param_1[5] = lVar2;
    lVar2 = FUN_007ec50c(param_4);
    param_1[6] = lVar2;
    uVar1 = FUN_007ec514(param_4);
  }
  *(undefined2 *)(param_1 + 7) = uVar1;
  return;
}


