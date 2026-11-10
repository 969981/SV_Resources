/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00199670; name: FUN_00199670
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00199670(long param_1,long param_2,long param_3,ulong param_4,long *param_5,
                 undefined4 param_6)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  *(long *)(param_1 + 0x28) = 2L << (param_4 & 0x3f);
  if (param_3 == 0) {
    return;
  }
  lVar4 = param_5[1];
  if ((param_5[3] - lVar4) + *param_5 + -0x10 < 0x48) {
LAB_0019976c:
    lVar4 = (**(code **)PTR_PTR_047cb890)(0x48,0x10);
    if (lVar4 == 0) {
      FUN_0015ed40(0x48);
    }
    puVar5 = &LAB_001a2e60;
  }
  else {
    uVar1 = lVar4 + 0x50;
    if (uVar1 <= (ulong)(*param_5 + param_5[3])) {
      uVar2 = param_5[2];
      if ((ulong)param_5[2] <= uVar1) {
        uVar2 = uVar1;
      }
      param_5[1] = uVar1;
      param_5[2] = uVar2;
      *(undefined8 *)(lVar4 + 8) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      *(undefined8 *)(lVar4 + 0x30) = 0;
      if (lVar4 != 0) {
        puVar5 = &LAB_001a2e20;
        goto LAB_001997a8;
      }
      goto LAB_0019976c;
    }
    if ((int)param_5[4] == 0) {
LAB_00199744:
      _DAT_00000008 = 0;
      _DAT_00000030 = 0;
      _DAT_00000028 = 0;
      _DAT_00000020 = 0;
      _DAT_00000018 = 0;
      goto LAB_0019976c;
    }
    lVar4 = (**(code **)PTR_PTR_047cb890)(0x50,0x10);
    if (lVar4 == 0) {
      FUN_0015ed40(0x50);
      goto LAB_00199744;
    }
    puVar5 = &LAB_001a2e20;
  }
  *(undefined8 *)(lVar4 + 8) = 0;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
LAB_001997a8:
  *(undefined1 **)(param_1 + 0x30) = puVar5;
  FUN_001a2ea4(lVar4,param_4 & 0xffffffff,param_4 & 0xffffffff,0x10,param_5,param_6);
  lVar6 = param_3 - param_2;
  if (lVar6 == 0) {
    *(long *)(lVar4 + 0x18) = param_3;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
    if ((4 < *(int *)(param_1 + 4)) && (*(int *)(lVar7 + 0x28) != 0)) {
      if (*(int *)(lVar7 + 0x24) <= lVar6) {
        lVar6 = (long)*(int *)(lVar7 + 0x24);
      }
    }
    iVar3 = *(int *)(lVar7 + 0x14);
    lVar7 = lVar6;
    if (iVar3 <= lVar6) {
      lVar7 = (long)iVar3;
    }
    if (iVar3 < 1) {
      lVar7 = lVar6;
    }
    if (0x3ffffff < lVar7) {
      lVar7 = 0x4000000;
    }
    FUN_001a300c(lVar4,param_2,param_3,lVar7);
  }
  *(long *)(param_1 + 0x20) = lVar4;
  return;
}


