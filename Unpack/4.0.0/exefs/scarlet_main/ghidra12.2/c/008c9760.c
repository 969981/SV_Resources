/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c9760; name: FUN_008c9760
 */


undefined8 FUN_008c9760(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *(undefined8 *)(param_1 + 0x170) = param_2[4];
  *(undefined8 *)(param_1 + 0x178) = param_2[5];
  uVar7 = (param_2[3] - 0x20) / 0x38;
  iVar6 = (int)uVar7;
  *(int *)(param_1 + 0x1b4) = iVar6;
  lVar3 = param_2[2];
  if ((uVar7 & 0xffffffff) != 0) {
    lVar8 = (long)iVar6 * 0x38;
    lVar4 = lVar3 + 0x18;
    do {
      *(long *)lVar4 = lVar4;
      *(long *)(lVar4 + 8) = lVar4;
      lVar8 = lVar8 + -0x38;
      *(undefined4 *)(lVar4 + -0x18) = 2;
      *(long *)(lVar4 + 0x10) = lVar4 + 0x10;
      *(long *)(lVar4 + 0x18) = lVar4 + 0x10;
      *(undefined8 *)(lVar4 + -0x10) = 0;
      *(undefined8 *)(lVar4 + -8) = 0;
      lVar4 = lVar4 + 0x38;
    } while (lVar8 != 0);
  }
  *(long *)(param_1 + 0x1a8) = lVar3;
  *(long *)(param_1 + 0x1d0) = lVar3;
  plVar5 = *(long **)(param_1 + 0x188);
  while (plVar5 != (long *)(param_1 + 0x180)) {
    plVar1 = (long *)plVar5[1];
    lVar3 = *plVar1;
    *(long **)(*plVar5 + 8) = plVar1;
    *plVar1 = *plVar5;
    *(long **)(lVar3 + 8) = plVar5;
    *plVar5 = lVar3;
    plVar5 = *(long **)(param_1 + 0x188);
  }
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  local_48 = 0;
  FUN_00fab560(&local_50);
  local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(param_2 + 1));
  FUN_00fab558(*param_2,&local_50);
  local_48 = param_2[4];
  local_50 = CONCAT44((int)param_2[5],(undefined4)local_50);
  FUN_00ddef7c(param_1 + 0x50,*param_2,&local_50);
  local_60 = 0;
  uStack_58 = 0;
  FUN_008f0470(&local_60);
  lVar3 = param_1 + 8;
  local_60 = CONCAT44(*(undefined4 *)((long)param_2 + 0xc),(int)param_2[5]);
  FUN_008f0810(lVar3,*param_2,&local_60,param_1 + 0x50,0);
  uVar2 = FUN_008f06e0(*param_2,&local_60);
  *(undefined8 *)(param_1 + 0x1c8) = uVar2;
  uVar2 = FUN_008f0928(lVar3);
  *(undefined8 *)(param_1 + 0x170) = uVar2;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 2;
  FUN_008f0980(lVar3,param_1 + 0x1d8);
  return 1;
}


