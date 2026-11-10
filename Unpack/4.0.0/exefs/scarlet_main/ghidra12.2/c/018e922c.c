/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018e922c; name: FUN_018e922c
 */


void FUN_018e922c(long *param_1,long param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  char cVar11;
  
  plVar8 = (long *)(**(code **)(*param_1 + 0x60))(param_1,0);
  if ((param_3 & 1) == 0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
    lVar9 = (**(code **)(*param_1 + 0x60))(param_1,0);
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
      sVar7 = FUN_00cf44f4();
      bVar2 = sVar7 != 0;
    }
    else {
      bVar2 = true;
    }
    bVar3 = true;
    plVar8 = (long *)(**(code **)(*param_1 + 0x60))(param_1,1);
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2 + 0x158);
    lVar9 = (**(code **)(*param_1 + 0x60))(param_1,1);
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
      sVar7 = FUN_00cf44f4();
      bVar3 = sVar7 != 0;
    }
    plVar8 = (long *)(**(code **)(*param_1 + 0x60))(param_1,2);
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2 + 0x2b0);
    lVar9 = (**(code **)(*param_1 + 0x60))(param_1,2);
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
      sVar7 = FUN_00cf44f4();
      bVar4 = sVar7 != 0;
    }
    else {
      bVar4 = true;
    }
    plVar8 = (long *)(**(code **)(*param_1 + 0x60))(param_1,3);
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2 + 0x408);
    lVar9 = (**(code **)(*param_1 + 0x60))(param_1,3);
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
      sVar7 = FUN_00cf44f4();
      bVar5 = sVar7 != 0;
    }
    else {
      bVar5 = true;
    }
    plVar8 = (long *)(**(code **)(*param_1 + 0x60))(param_1,4);
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2 + 0x560);
    lVar9 = (**(code **)(*param_1 + 0x60))(param_1,4);
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
      sVar7 = FUN_00cf44f4();
      bVar6 = sVar7 != 0;
    }
    else {
      bVar6 = true;
    }
    cVar11 = bVar3 + bVar2 + bVar4 + bVar5 + bVar6;
    plVar8 = (long *)(**(code **)(*param_1 + 0x60))(param_1,5);
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2 + 0x6b8);
  }
  else {
    FUN_00f13ad8(plVar8,param_2);
    lVar9 = (**(code **)(*param_1 + 0x60))(param_1,0);
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
      sVar7 = FUN_00cf44f4();
      bVar2 = sVar7 != 0;
    }
    else {
      bVar2 = true;
    }
    bVar3 = true;
    uVar10 = (**(code **)(*param_1 + 0x60))(param_1,1);
    FUN_00f13ad8(uVar10,param_2 + 0x158);
    lVar9 = (**(code **)(*param_1 + 0x60))(param_1,1);
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
      sVar7 = FUN_00cf44f4();
      bVar3 = sVar7 != 0;
    }
    uVar10 = (**(code **)(*param_1 + 0x60))(param_1,2);
    FUN_00f13ad8(uVar10,param_2 + 0x2b0);
    lVar9 = (**(code **)(*param_1 + 0x60))(param_1,2);
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
      sVar7 = FUN_00cf44f4();
      bVar4 = sVar7 != 0;
    }
    else {
      bVar4 = true;
    }
    uVar10 = (**(code **)(*param_1 + 0x60))(param_1,3);
    FUN_00f13ad8(uVar10,param_2 + 0x408);
    lVar9 = (**(code **)(*param_1 + 0x60))(param_1,3);
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
      sVar7 = FUN_00cf44f4();
      bVar5 = sVar7 != 0;
    }
    else {
      bVar5 = true;
    }
    uVar10 = (**(code **)(*param_1 + 0x60))(param_1,4);
    FUN_00f13ad8(uVar10,param_2 + 0x560);
    lVar9 = (**(code **)(*param_1 + 0x60))(param_1,4);
    if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
      sVar7 = FUN_00cf44f4();
      bVar6 = sVar7 != 0;
    }
    else {
      bVar6 = true;
    }
    cVar11 = bVar3 + bVar2 + bVar4 + bVar5 + bVar6;
    uVar10 = (**(code **)(*param_1 + 0x60))(param_1,5);
    FUN_00f13ad8(uVar10,param_2 + 0x6b8);
  }
  lVar9 = (**(code **)(*param_1 + 0x60))(param_1,5);
  if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
    sVar7 = FUN_00cf44f4();
    bVar2 = sVar7 != 0;
  }
  else {
    bVar2 = true;
  }
  cVar1 = *(char *)(param_2 + 0x810);
  *(char *)(param_1 + 0x12) = cVar1;
  *(undefined1 *)((long)param_1 + 0x91) = *(undefined1 *)(param_2 + 0x811);
  if ((char)(cVar11 + bVar2) != cVar1) {
    *(char *)(param_1 + 0x12) = cVar11 + bVar2;
  }
  return;
}


