/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a3e24; name: FUN_007a3e24
 */


void FUN_007a3e24(long *param_1,long param_2,undefined4 param_3,undefined1 param_4,long param_5)

{
  undefined *puVar1;
  MutexType *pMVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[10] = param_5;
  puVar1 = PTR_DAT_047d0ae0 + 0x10;
  *(undefined1 *)((long)param_1 + 0x14) = param_4;
  *param_1 = (long)puVar1;
  param_1[1] = param_2;
  param_1[3] = 0x26;
  uVar7 = FUN_0079c0a0(param_5);
  if (((uVar7 & 1) == 0) && (uVar7 = FUN_0079c92c(param_5), (uVar7 & 1) == 0)) {
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    param_1[7] = 0;
    *(undefined8 *)((long)param_1 + 0x44) = 0;
    return;
  }
  pMVar2 = (MutexType *)(param_5 + 0x1f8);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_5 + 100);
  nn::os::LockMutex(pMVar2);
  if (*(long *)(param_5 + 0x218) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_027e983c();
  }
  nn::os::UnlockMutex(pMVar2);
  param_1[5] = lVar8;
  uVar5 = FUN_0079f0cc(param_5);
  *(undefined2 *)(param_1 + 6) = uVar5;
  *(undefined2 *)((long)param_1 + 0x32) = *(undefined2 *)(param_5 + 0x114e);
  uVar3 = FUN_007a07fc(param_5);
  *(undefined1 *)(param_1 + 8) = uVar3;
  nn::os::LockMutex(pMVar2);
  bVar4 = (**(code **)(**(long **)(param_5 + 0x218) + 0x30))();
  *(byte *)((long)param_1 + 0x41) = bVar4 & 1;
  lVar8 = (**(code **)(**(long **)(param_5 + 0x218) + 0x38))();
  param_1[7] = lVar8;
  uVar6 = FUN_00798434(*(undefined8 *)(param_5 + 0x218));
  *(undefined4 *)((long)param_1 + 0x44) = uVar6;
  uVar6 = FUN_027e9a44(*(undefined8 *)(param_5 + 0x218));
  *(undefined4 *)(param_1 + 9) = uVar6;
  nn::os::UnlockMutex(pMVar2);
  return;
}


