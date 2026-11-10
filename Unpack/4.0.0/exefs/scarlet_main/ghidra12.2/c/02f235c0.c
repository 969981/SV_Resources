/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f235c0; name: FUN_02f235c0
 */


void FUN_02f235c0(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_68;
  undefined8 *local_60;
  uint *local_58;
  uint local_50;
  uint local_4c;
  
  local_68 = param_1 + 0xa8;
  uVar13 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x7f8);
  local_60 = *(undefined8 **)(param_2 + 0x4e0);
  local_58 = *(uint **)(param_1[0xaa] + (long)(int)param_1[0xab] * 8 + -8);
  local_50 = *local_58 >> 0x10;
  local_4c = *local_58 & 0xffff;
  *(uint *)(param_1 + 0xa9) = (int)param_1[0xa9] - (*local_58 & 0xffff);
  if (param_3 != 0) {
    *(long ***)(param_3 + 0x30) = &local_68;
  }
  lVar7 = *(long *)*param_1;
  puVar8 = *(undefined4 **)(*(long *)(lVar7 + 0x540) + (long)*(int *)(lVar7 + 0x548) * 8 + -8);
  uVar2 = *puVar8;
  uVar3 = *puVar8;
  *(undefined4 **)(lVar7 + 0x740) = puVar8;
  *(short *)(lVar7 + 0x748) = (short)((uint)uVar2 >> 0x10);
  *(short *)(lVar7 + 0x74a) = (short)uVar3;
  *(int *)(lVar7 + 0x74c) = -*(int *)(lVar7 + 0x538);
  iVar5 = (int)param_1[0xa5];
  if (0 < iVar5) {
    lVar14 = 0;
    lVar7 = 0;
    do {
      if (*(int *)(param_1[0xa4] + lVar14 + 0xc) != 0) {
        FUN_02f23a6c(uVar13,param_1[0xa4] + lVar14,&local_68);
        puVar1 = (undefined8 *)(param_1[0xa4] + lVar14);
        *puVar1 = 0;
        *(undefined4 *)((long)puVar1 + 0xc) = 0;
        puVar1[2] = 0;
        *(long *)(param_1[0xa6] + lVar7 * 8) = param_1[0xa4] + lVar14;
        iVar5 = (int)param_1[0xa5];
      }
      lVar7 = lVar7 + 1;
      lVar14 = lVar14 + 0x20;
    } while (lVar7 < iVar5);
  }
  while( true ) {
    puVar1 = local_60;
    lVar7 = *(long *)*param_1;
    iVar5 = *(int *)(lVar7 + 0x74c) + *(int *)(lVar7 + 0x538);
    if (iVar5 == 0) {
      lVar10 = (long)*(int *)(lVar7 + 0x548) + -1;
      lVar14 = *(long *)(lVar7 + 0x540);
    }
    else {
      lVar10 = (long)*(int *)(lVar7 + 0x548) + -1;
      lVar14 = *(long *)(lVar7 + 0x540);
      puVar11 = *(uint **)(lVar7 + 0x740);
      if ((puVar11 != *(uint **)(lVar14 + lVar10 * 8)) &&
         ((uint)*(ushort *)(lVar7 + 0x74a) == (*puVar11 & 0xffff))) {
        puVar11 = *(uint **)(puVar11 + 2);
        *(undefined4 *)(lVar7 + 0x748) = 0;
      }
      *(short *)(lVar7 + 0x74a) = (short)*puVar11 - *(short *)(lVar7 + 0x74a);
      *(uint **)(lVar7 + 0x740) = puVar11;
    }
    *(int *)(lVar7 + 0x74c) = iVar5;
    uVar9 = *(undefined8 *)(lVar7 + 0x748);
    local_90 = *(undefined8 *)(lVar7 + 0x740);
    local_80 = *(undefined8 *)(lVar7 + 0x750);
    puVar8 = *(undefined4 **)(lVar14 + lVar10 * 8);
    uVar2 = *puVar8;
    uVar3 = *puVar8;
    *(undefined4 **)(lVar7 + 0x740) = puVar8;
    *(short *)(lVar7 + 0x748) = (short)((uint)uVar2 >> 0x10);
    *(short *)(lVar7 + 0x74a) = (short)uVar3;
    *(int *)(lVar7 + 0x74c) = -*(int *)(lVar7 + 0x538);
    local_88._4_4_ = (int)((ulong)uVar9 >> 0x20);
    local_88 = uVar9;
    if (local_88._4_4_ == 0) break;
    lVar7 = *(long *)*param_1;
    puVar8 = *(undefined4 **)(*(long *)(lVar7 + 0x540) + (long)*(int *)(lVar7 + 0x548) * 8 + -8);
    uVar2 = *puVar8;
    uVar3 = *puVar8;
    *(undefined4 **)(lVar7 + 0x740) = puVar8;
    *(short *)(lVar7 + 0x748) = (short)((uint)uVar2 >> 0x10);
    *(short *)(lVar7 + 0x74a) = (short)uVar3;
    *(int *)(lVar7 + 0x74c) = -*(int *)(lVar7 + 0x538);
    FUN_02f23a6c(uVar13,&local_90,&local_68);
  }
  if (local_4c == 0) {
    plVar12 = local_68 + 3;
    iVar5 = (int)*plVar12;
    if (iVar5 < 2) goto LAB_02f23880;
    iVar4 = *(int *)(local_60 + 0xb);
    lVar14 = *(long *)(local_68[2] + (long)(iVar5 + -2) * 8);
    lVar7 = local_60[1];
    *(undefined8 *)(lVar7 + (long)iVar4 * 8) = *(undefined8 *)(local_68[2] + (long)(iVar5 + -1) * 8)
    ;
    *(int *)(local_60 + 0xb) = iVar4 + 1;
    if (*(int *)((long)local_60 + 0x5c) <= iVar4 + 1) {
      (**(code **)(*(long *)*local_60 + 0x28))((long *)*local_60,lVar7 + (long)(iVar4 + -5) * 8,6);
      *(int *)(puVar1 + 0xb) = iVar4 + -5;
    }
    *(undefined8 *)(lVar14 + 8) = 0;
    uVar6 = 0xffffffff;
  }
  else {
LAB_02f23880:
    plVar12 = local_68 + 1;
    local_58[2] = 0;
    local_58[3] = 0;
    *local_58 = *local_58 & 0xffff0000 | local_4c & 0xffff;
    *local_58 = *local_58 & 0xffff | local_50 << 0x10;
    uVar6 = local_4c;
  }
  *(uint *)plVar12 = (int)*plVar12 + uVar6;
  local_68 = (long *)0x0;
  local_58 = (uint *)0x0;
  if (param_3 != 0) {
    *(undefined8 *)(param_3 + 0x30) = 0;
  }
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar7 = 0;
  do {
    lVar15 = *(long *)(*param_1 + lVar7 * 8);
    FUN_031c2be4(lVar15 + 0x530,*(undefined8 *)(lVar15 + 0x4e0));
    FUN_031c2be4(lVar15 + 0x630,*(undefined8 *)(lVar15 + 0x4e0));
    puVar1 = local_60;
    lVar7 = lVar7 + 1;
    puVar8 = *(undefined4 **)(*(long *)(lVar15 + 0x540) + (long)*(int *)(lVar15 + 0x548) * 8 + -8);
    uVar2 = *puVar8;
    uVar3 = *puVar8;
    *(undefined4 **)(lVar15 + 0x740) = puVar8;
    *(short *)(lVar15 + 0x748) = (short)((uint)uVar2 >> 0x10);
    *(short *)(lVar15 + 0x74a) = (short)uVar3;
    *(int *)(lVar15 + 0x74c) = -*(int *)(lVar15 + 0x538);
    lVar14 = *(long *)(lVar15 + 8);
    *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)(lVar14 + 0x490);
    *(undefined8 *)(lVar15 + 0x48) = *(undefined8 *)(lVar14 + 0x8f8);
    lVar10 = *(long *)(lVar14 + 0x8b8);
    *(long *)(lVar15 + 0x10) = lVar10 + 0x20;
    *(long *)(lVar15 + 0x18) = lVar10 + 0xa20;
    lVar10 = *(long *)(*(long *)(lVar14 + 0x8a8) + 0x48);
    uVar6 = *(uint *)(*(long *)(lVar14 + 0x8a8) + 0x50);
    *(long *)(lVar15 + 0x20) = lVar10;
    *(ulong *)(lVar15 + 0x28) = lVar10 + (ulong)uVar6 * 0x50;
    lVar10 = *(long *)(*(long *)(lVar14 + 0x8b0) + 0x40);
    iVar5 = *(int *)(*(long *)(lVar14 + 0x8b0) + 0x48);
    *(long *)(lVar15 + 0x30) = lVar10;
    *(long *)(lVar15 + 0x38) = lVar10 + (long)iVar5 * 0x70;
    *(undefined8 *)(lVar15 + 0x500) = *(undefined8 *)(lVar14 + 0x118);
  } while (lVar7 < (int)param_1[1]);
  if (local_68 == (long *)0x0) {
    return;
  }
  if (local_4c == 0) {
    plVar12 = local_68 + 3;
    iVar5 = (int)*plVar12;
    if (1 < iVar5) {
      iVar4 = *(int *)(local_60 + 0xb);
      lVar14 = *(long *)(local_68[2] + (long)(iVar5 + -2) * 8);
      lVar7 = local_60[1];
      *(undefined8 *)(lVar7 + (long)iVar4 * 8) =
           *(undefined8 *)(local_68[2] + (long)(iVar5 + -1) * 8);
      *(int *)(local_60 + 0xb) = iVar4 + 1;
      if (*(int *)((long)local_60 + 0x5c) <= iVar4 + 1) {
        (**(code **)(*(long *)*local_60 + 0x28))((long *)*local_60,lVar7 + (long)(iVar4 + -5) * 8,6)
        ;
        *(int *)(puVar1 + 0xb) = iVar4 + -5;
      }
      *(undefined8 *)(lVar14 + 8) = 0;
      local_4c = 0xffffffff;
      goto LAB_02f23a40;
    }
  }
  plVar12 = local_68 + 1;
  local_58[2] = 0;
  local_58[3] = 0;
  *local_58 = *local_58 & 0xffff0000 | local_4c & 0xffff;
  *local_58 = *local_58 & 0xffff | local_50 << 0x10;
LAB_02f23a40:
  *(uint *)plVar12 = (int)*plVar12 + local_4c;
  return;
}


