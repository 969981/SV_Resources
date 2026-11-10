/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e5238; name: FUN_008e5238
 */


void FUN_008e5238(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_047d2680 + 0x10);
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_008ca534(param_1[0x14] + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x270;
    } while (lVar6 < *(int *)((long)param_1 + 0x6c));
  }
  iVar3 = *(int *)((long)param_1 + 100);
  if (0 < iVar3) {
    uVar5 = 0;
    do {
      lVar6 = *(long *)(param_1[0x13] + uVar5 * 8);
      if (lVar6 != 0) {
        FUN_008daa84(lVar6,0);
        FUN_008d43e0("vfx system deleted the registered binary. resource id : %d.",
                     uVar5 & 0xffffffff);
        iVar3 = *(int *)((long)param_1 + 100);
      }
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)iVar3);
  }
  FUN_008c98f4(param_1 + 0x299,param_1[7]);
  plVar2 = (long *)FUN_008d4390();
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1[0x2d6]);
  plVar2 = (long *)FUN_008d4390();
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1[0x2d7]);
  plVar2 = param_1 + 8;
  FUN_008ee5b8(param_1 + 0x263,param_1[7],plVar2);
  if (0 < (int)param_1[0xe]) {
    lVar6 = 0;
    lVar4 = 0x828;
    puVar1 = PTR_DAT_047d2688 + 0x10;
    do {
      *(undefined **)(param_1[0x15] + lVar4) = puVar1;
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x840;
    } while (lVar6 < (int)param_1[0xe]);
  }
  if (param_1[0x118] != 0) {
    FUN_008cd88c();
  }
  if (0 < (int)param_1[1]) {
    lVar6 = 0;
    lVar4 = 0x110;
    do {
      FUN_008edbf8(param_1[2] + lVar4,param_1[7]);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x9e8;
    } while (lVar6 < (int)param_1[1]);
  }
  *(int *)(param_1 + 0xb) = (int)param_1[0xb] + -1;
  (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],param_1[0x241]);
  FUN_008d9b80(param_1[7]);
  FUN_008d9f3c();
  FUN_008d4520();
  FUN_008ee260(param_1[7],plVar2);
  FUN_008d42a0(0);
  FUN_008d4380(0);
  FUN_008de494(plVar2);
  FUN_008e15e4(plVar2);
  FUN_008eb774(plVar2);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2dc));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2d8));
  param_1[0x299] = (long)(PTR_DAT_047d24f8 + 0x10);
  FUN_01327a58(param_1 + 0x2a3);
  FUN_008f080c(param_1 + 0x29a);
  FUN_01327a58(param_1 + 0x26e);
  FUN_008f080c(param_1 + 0x263);
  return;
}


