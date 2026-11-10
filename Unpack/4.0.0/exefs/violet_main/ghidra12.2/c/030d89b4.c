/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d89b4; name: FUN_030d89b4
 */


void FUN_030d89b4(long param_1,undefined4 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  uint local_d0 [2];
  uint local_c8 [2];
  uint local_c0 [2];
  uint local_b8 [2];
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_6c;
  uint local_68;
  uint uStack_64;
  uint local_60 [2];
  uint local_58 [2];
  
  uVar9 = 0;
  if (param_2 != (undefined4 *)0x0) {
    uVar9 = *param_2;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_0307bb6c(*(undefined8 *)(param_1 + 0x18),uVar9,param_3,&local_b0);
  puVar6 = PTR_DAT_047e4f38;
  iVar7 = *(int *)PTR_DAT_047e4f38;
  lVar12 = tpidr_el0;
  lVar10 = *(long *)(lVar12 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar12 + 0x1000b8) = lVar10;
  }
  if (*(long *)(lVar10 + (long)iVar7 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 0x18) + 0x40);
  if ((int)uVar3 < 1) {
    iVar7 = -1;
    uVar11 = 0xffffffff;
  }
  else {
    plVar15 = *(long **)(*(long *)(param_1 + 0x18) + 0x38);
    uVar11 = 0;
    plVar17 = plVar15;
    do {
      if ((*(int *)((long)plVar17 + 0x1c) == *(int *)(param_3 + 0x30)) && (*plVar17 != 0))
      goto LAB_030d8a80;
      uVar11 = uVar11 + 1;
      plVar17 = plVar17 + 0x20;
    } while (uVar3 != uVar11);
    uVar11 = 0xffffffff;
LAB_030d8a80:
    iVar7 = (int)uVar11;
    uVar11 = 0;
    do {
      if ((*(int *)((long)plVar15 + 0x1c) == *(int *)(param_3 + 0x34)) && (*plVar15 != 0))
      goto LAB_030d8ac0;
      uVar11 = uVar11 + 1;
      plVar15 = plVar15 + 0x20;
    } while (uVar3 != uVar11);
    uVar11 = 0xffffffff;
  }
LAB_030d8ac0:
  iVar16 = (int)uVar11;
  uVar3 = *(uint *)(param_3 + 0x38);
  uVar2 = *(uint *)(param_3 + 0x3c);
  uVar4 = uVar3 | iVar7 << 0x16;
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar7 * 8);
  uVar5 = uVar2 | iVar16 << 0x16;
  if (iVar7 == iVar16) {
    local_c0[0] = uVar2;
    local_b8[0] = uVar3;
    FUN_030e14d8(*(undefined4 *)(param_1 + 0x9c),uVar8,local_b8,local_c0,&local_b0,&local_90,
                 param_1 + 0x40);
  }
  else {
    local_d0[0] = uVar2;
    local_c8[0] = uVar3;
    FUN_030e176c(*(undefined4 *)(param_1 + 0x9c),uVar8,local_c8,&local_b0,
                 *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar16 * 8),local_d0,&local_90,
                 param_1 + 0x40);
  }
  if (param_2 != (undefined4 *)0x0) {
    FUN_030f0c68(param_2,uVar4,uVar5);
  }
  iVar13 = *(int *)puVar6;
  lVar10 = *(long *)(lVar12 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar12 + 0x1000b8) = lVar10;
  }
  if (*(long *)(lVar10 + (long)iVar13 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  lVar12 = *(long *)(*(long *)(param_1 + 0x18) + 0x38);
  lVar10 = *(long *)(*(long *)(lVar12 + ((ulong)(uVar4 >> 0xe) & 0x3ff00)) + 0x20);
  uVar11 = (ulong)uVar3 & 0x3fffff;
  iVar14 = (int)uVar11;
  iVar13 = iVar14 - *(int *)(lVar10 + 0x20);
  if (iVar14 < *(int *)(lVar10 + 0x20)) {
    iVar13 = iVar14;
    if ((*(int *)(lVar10 + 0x98) == 0) ||
       (iVar13 = *(int *)(*(long *)(lVar10 + 0x90) + uVar11 * 4), iVar13 != -1)) {
      lVar10 = *(long *)(lVar10 + 0xb0);
      goto LAB_030d8bc8;
    }
    lVar10 = *(long *)(lVar10 + 0x18) + uVar11 * 0x10;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0xd0);
LAB_030d8bc8:
    lVar10 = lVar10 + (long)iVar13 * 0x10;
  }
  uVar1 = 0xffffffff;
  if (*(short *)(lVar10 + 0xc) != -1) {
    uVar1 = (int)*(short *)(lVar10 + 0xc) | uVar3 & 0xffc00000 | iVar7 << 0x16;
  }
  uVar11 = (ulong)uVar2 & 0x3fffff;
  lVar12 = *(long *)(*(long *)(lVar12 + ((ulong)(uVar5 >> 0xe) & 0x3ff00)) + 0x20);
  iVar13 = (int)uVar11;
  iVar7 = iVar13 - *(int *)(lVar12 + 0x20);
  if (iVar13 < *(int *)(lVar12 + 0x20)) {
    iVar7 = iVar13;
    if ((*(int *)(lVar12 + 0x98) != 0) &&
       (iVar7 = *(int *)(*(long *)(lVar12 + 0x90) + uVar11 * 4), iVar7 == -1)) {
      lVar12 = *(long *)(lVar12 + 0x18) + uVar11 * 0x10;
      goto LAB_030d8c34;
    }
    lVar12 = *(long *)(lVar12 + 0xb0);
  }
  else {
    lVar12 = *(long *)(lVar12 + 0xd0);
  }
  lVar12 = lVar12 + (long)iVar7 * 0x10;
LAB_030d8c34:
  uVar3 = 0xffffffff;
  if (*(short *)(lVar12 + 0xc) != -1) {
    uVar3 = (int)*(short *)(lVar12 + 0xc) | uVar2 & 0xffc00000 | iVar16 << 0x16;
  }
  if ((uVar1 != uVar3 && uVar1 != 0xffffffff) && uVar3 != 0xffffffff) {
    if ((*(byte *)(local_b0 + 0x10) >> 5 & 1) == 0) {
      FUN_030bbc94(*(long *)(param_1 + 0x18),uVar3,uVar1,1,*(undefined2 *)(local_b0 + 0x12));
      if (param_2 == (undefined4 *)0x0) {
        if (0x3fffff < (uVar5 ^ uVar4)) {
          local_58[0] = uVar3 >> 0x16;
          local_60[0] = uVar1 >> 0x16;
          lVar12 = FUN_030f1b9c(param_1 + 0xb0,local_58,local_60);
          local_6c = 0;
          local_68 = uVar3;
          uStack_64 = uVar1;
          iVar7 = FUN_030f1224(lVar12 + 0x40,&local_68,&local_6c);
          lVar12 = *(long *)(lVar12 + 0x40) + (long)iVar7 * 0xc;
          *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
        }
      }
      else {
        FUN_030f1128(param_2,uVar3,uVar1);
      }
    }
    if ((*(byte *)(local_90 + 0x10) >> 5 & 1) == 0) {
      FUN_030bbc94(*(undefined8 *)(param_1 + 0x18),uVar1,uVar3,1,*(undefined2 *)(local_90 + 0x12));
      if (param_2 == (undefined4 *)0x0) {
        if (0x3fffff < (uVar5 ^ uVar4)) {
          local_58[0] = uVar1 >> 0x16;
          local_60[0] = uVar3 >> 0x16;
          lVar12 = FUN_030f1b9c(param_1 + 0xb0,local_58,local_60);
          local_6c = 0;
          local_68 = uVar1;
          uStack_64 = uVar3;
          iVar7 = FUN_030f1224(lVar12 + 0x40,&local_68,&local_6c);
          lVar12 = *(long *)(lVar12 + 0x40) + (long)iVar7 * 0xc;
          *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
        }
      }
      else {
        FUN_030f1128(param_2,uVar1,uVar3);
      }
    }
  }
  return;
}


