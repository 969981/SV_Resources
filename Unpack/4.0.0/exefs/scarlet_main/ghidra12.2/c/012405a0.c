/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012405a0; name: FUN_012405a0
 */


void FUN_012405a0(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long local_28;
  
  if (*(char *)(*param_3 + 0x89) != '\0') {
    return;
  }
  *(undefined1 *)(*param_3 + 0x89) = 1;
  if (((int *)*param_3)[1] == 0) {
    return;
  }
  if (*(int *)*param_3 == 0) {
    return;
  }
  plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  uVar5 = (**(code **)(*plVar4 + 0x208))();
  if ((uVar5 & 1) == 0) {
    return;
  }
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0);
  uVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
  cVar1 = FUN_01481420(uVar8,uVar2);
  if (cVar1 == '\n') {
    return;
  }
  uVar5 = (**(code **)(*plVar4 + 0x4d0))(plVar4,0x1a);
  if ((uVar5 & 1) != 0) {
    return;
  }
  puVar9 = (undefined4 *)*param_3;
  plVar6 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*puVar9);
  uVar5 = (**(code **)(*plVar6 + 0x220))(plVar6,0x22);
  if (((uVar5 & 1) != 0) &&
     ((puVar9[1] != 4 || (iVar3 = FUN_01921d0c(*(undefined8 *)(param_1 + 8)), iVar3 != 2)))) {
    FUN_0124fe20(param_1,*param_3);
    return;
  }
  puVar9 = (undefined4 *)*param_3;
  if ((*(byte *)(puVar9 + 0x16) & 0x18) != 0) {
    FUN_0124cb7c(*(undefined8 *)(param_1 + 0x20),*puVar9,*(undefined1 *)(puVar9 + 0x17),
                 puVar9 + 0x18);
    puVar9 = (undefined4 *)*param_3;
  }
  FUN_01240d7c(*(undefined8 *)(param_1 + 0x38),puVar9);
  (**(code **)(*plVar4 + 0x508))(plVar4,0);
  lVar10 = *param_3;
  switch(*(undefined4 *)(lVar10 + 4)) {
  case 1:
    local_28 = lVar10;
    FUN_012522cc(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x680),auStack_48,&local_28);
    break;
  case 2:
    FUN_01242180(param_1,lVar10);
    break;
  case 3:
    FUN_012409bc(param_1,lVar10);
    break;
  case 4:
    uVar5 = FUN_01242114(param_1,lVar10);
    if ((uVar5 & 1) == 0) break;
    lVar10 = *(long *)(param_1 + 0x40);
    uVar7 = 8;
    goto LAB_01240760;
  case 5:
    FUN_01241cec(param_1,lVar10);
    break;
  case 6:
    FUN_01240ca4(param_1,lVar10);
    break;
  case 7:
    FUN_01240d04(param_1,lVar10);
    break;
  case 8:
    lVar10 = *(long *)(param_1 + 0x40);
    uVar7 = 7;
LAB_01240760:
    **(undefined1 **)(lVar10 + 0x28) = uVar7;
    break;
  case 10:
    FUN_012410e0(param_1,lVar10);
    break;
  case 0xb:
    FUN_01240d40(param_1,lVar10);
    break;
  case 0xc:
    FUN_01240cd4(param_1,lVar10);
    break;
  case 0xd:
    FUN_01242520(param_1,lVar10);
    break;
  case 0xe:
    FUN_01241124(param_1,lVar10);
  case 0xf:
    if (*(char *)(lVar10 + 0x4c) == '\x02') {
      FUN_012519ac(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1f80));
    }
    else if (*(char *)(lVar10 + 0x4c) == '\x01') {
      FUN_0124cc24();
    }
  }
  if ((**(char **)(*(long *)(param_1 + 0x40) + 0x28) != '\a') &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) != 0)) {
    uVar8 = FUN_01240950(*(undefined8 *)(param_1 + 0x78));
    FUN_01240958(uVar8,auStack_58,auStack_50);
  }
  if (*(int *)(*param_3 + 4) - 1U < 2) {
    (**(code **)(*plVar4 + 0x508))(plVar4,1);
    lVar10 = *(long *)(param_1 + 0x20);
    lVar11 = *(long *)(lVar10 + 0x20);
    uVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
    plVar6 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(lVar11 + 0x10) + 0x30),uVar2);
    (**(code **)(*plVar6 + 0x4d8))(plVar6,0);
    uVar8 = *(undefined8 *)(lVar10 + 0x18);
    uVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
    FUN_0129aff0(uVar8,0x1e,uVar2,0);
  }
  if (**(char **)(*(long *)(param_1 + 0x40) + 0x28) != '\b') {
    puVar9 = (undefined4 *)*param_3;
    uVar8 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*puVar9);
    FUN_012409e4(*(undefined8 *)(param_1 + 0x38),uVar8,puVar9[1]);
  }
  return;
}


