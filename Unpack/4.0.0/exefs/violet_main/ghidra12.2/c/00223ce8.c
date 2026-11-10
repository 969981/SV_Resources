/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00223ce8; name: FUN_00223ce8
 */


void FUN_00223ce8(char *param_1)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  size_t __n;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  void *__dest;
  char *pcVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte local_a8 [16];
  undefined8 local_98;
  byte local_90;
  undefined5 uStack_8f;
  undefined2 uStack_8a;
  undefined6 local_88;
  undefined2 uStack_82;
  char *local_80;
  uint local_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  byte local_70;
  undefined1 uStack_6f;
  undefined4 uStack_6e;
  undefined2 uStack_6a;
  void *pvStack_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined6 uStack_56;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_047cbb08;
  puVar10 = *(undefined4 **)(param_1 + 0x18);
  if (puVar10 == (undefined4 *)0x0) {
    return;
  }
  if (*param_1 != '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    local_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    local_70 = 0;
    uStack_6f = 0;
    uStack_6e = 0;
    local_90 = 0;
    uStack_8f = 0;
    uStack_8a = 0;
    local_88 = 0;
    *puVar10 = 0;
    if ((*(byte *)(puVar10 + 2) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(puVar10 + 6));
    }
    *(undefined2 *)(puVar10 + 2) = 0;
    *(ulong *)(puVar10 + 4) = CONCAT44(uStack_6e,CONCAT13(uStack_6f,CONCAT12(local_70,uStack_72)));
    *(undefined8 *)(puVar10 + 6) = 0;
    *(ulong *)((long)puVar10 + 10) = CONCAT26(uStack_72,CONCAT24(uStack_74,local_78));
    if ((*(byte *)(puVar10 + 8) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(puVar10 + 0xc));
    }
    *(undefined2 *)(puVar10 + 8) = 0;
    *(ulong *)(puVar10 + 10) = CONCAT62(local_88,uStack_8a);
    *(undefined8 *)(puVar10 + 0xc) = 0;
    *(ulong *)((long)puVar10 + 0x22) = CONCAT26(uStack_8a,CONCAT51(uStack_8f,local_90));
    goto LAB_00224030;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar12 = (ulong)(byte)*(ulong *)(param_1 + 0x38);
    if (uVar12 == 0) goto LAB_00223df4;
    pcVar14 = param_1 + 0x39;
joined_r0x00223de8:
    if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar12 < 0x17) {
      local_90 = (byte)((int)uVar12 << 1);
      pcVar3 = (char *)((ulong)&local_90 | 1);
      if (uVar12 < 0x40) goto LAB_00223e44;
LAB_00223e30:
      if ((pcVar3 < pcVar14 + uVar12) && (pcVar14 < pcVar3 + uVar12)) goto LAB_00223e44;
      uVar8 = uVar12 & 0xffffffffffffffc0;
      pcVar5 = pcVar14 + uVar8;
      pcVar6 = pcVar3 + uVar8;
      pcVar3 = pcVar3 + 0x20;
      pcVar7 = pcVar14 + 0x20;
      uVar11 = uVar8;
      do {
        uVar16 = *(undefined8 *)(pcVar7 + -0x20);
        uVar18 = *(undefined8 *)(pcVar7 + -8);
        uVar17 = *(undefined8 *)(pcVar7 + -0x10);
        uVar11 = uVar11 - 0x40;
        uVar20 = *(undefined8 *)(pcVar7 + 8);
        uVar19 = *(undefined8 *)pcVar7;
        uVar22 = *(undefined8 *)(pcVar7 + 0x18);
        uVar21 = *(undefined8 *)(pcVar7 + 0x10);
        *(undefined8 *)(pcVar3 + -0x18) = *(undefined8 *)(pcVar7 + -0x18);
        *(undefined8 *)(pcVar3 + -0x20) = uVar16;
        *(undefined8 *)(pcVar3 + -8) = uVar18;
        *(undefined8 *)(pcVar3 + -0x10) = uVar17;
        *(undefined8 *)(pcVar3 + 8) = uVar20;
        *(undefined8 *)pcVar3 = uVar19;
        *(undefined8 *)(pcVar3 + 0x18) = uVar22;
        *(undefined8 *)(pcVar3 + 0x10) = uVar21;
        pcVar3 = pcVar3 + 0x40;
        pcVar7 = pcVar7 + 0x40;
      } while (uVar11 != 0);
      if (uVar12 != uVar8) goto LAB_00223e4c;
    }
    else {
      uVar11 = uVar12 + 0x10 & 0xfffffffffffffff0;
      pcVar3 = (char *)FUN_0049e770(PTR_FUN_047cba38,uVar11);
      local_90 = (byte)uVar11 | 1;
      local_88 = (undefined6)uVar12;
      uStack_82 = (undefined2)(uVar12 >> 0x30);
      uStack_8f = (undefined5)(uVar11 >> 8);
      uStack_8a = (undefined2)(uVar11 >> 0x30);
      local_80 = pcVar3;
      if (0x3f < uVar12) goto LAB_00223e30;
LAB_00223e44:
      pcVar5 = pcVar14;
      pcVar6 = pcVar3;
LAB_00223e4c:
      do {
        pcVar3 = pcVar5 + 1;
        pcVar7 = pcVar6 + 1;
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar3;
        pcVar6 = pcVar7;
      } while (pcVar14 + uVar12 != pcVar3);
    }
    *pcVar6 = '\0';
  }
  else {
    uVar12 = *(ulong *)(param_1 + 0x38);
    if (uVar12 != 0) {
      pcVar14 = *(char **)(param_1 + 0x40);
      goto joined_r0x00223de8;
    }
LAB_00223df4:
    local_90 = 0;
    uStack_8f = 0;
    uStack_8a = 0;
    local_88 = 0;
    uStack_82 = 0;
    local_80 = (char *)0x0;
  }
  FUN_00224c68(local_a8,*(undefined8 *)(param_1 + 0x10));
  FUN_00223930(&local_78,iVar1,&local_90,local_a8);
  puVar9 = *(uint **)(param_1 + 0x18);
  *puVar9 = local_78;
  if ((puVar9[2] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(puVar9 + 6));
  }
  *(undefined8 *)(puVar9 + 6) = local_60;
  *(void **)(puVar9 + 4) = pvStack_68;
  *(ulong *)(puVar9 + 2) = CONCAT26(uStack_6a,CONCAT42(uStack_6e,CONCAT11(uStack_6f,local_70)));
  local_70 = 0;
  uStack_6f = 0;
  puVar13 = puVar9 + 8;
  if ((*puVar13 & 1) == 0) {
    *(undefined8 *)(puVar9 + 0xc) = local_48;
    *(undefined8 *)(puVar9 + 10) = uStack_50;
    *(ulong *)puVar13 = CONCAT62(uStack_56,local_58);
    local_58 = 0;
joined_r0x00223f50:
    if ((local_a8[0] & 1) == 0) goto LAB_00223f28;
LAB_00223f54:
    FUN_0049e790(PTR_LAB_047cba48,local_98);
    if ((local_90 & 1) != 0) goto LAB_00223f6c;
LAB_00223f30:
    pcVar14 = *(char **)(param_1 + 0x20);
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(puVar9 + 0xc));
    *(undefined8 *)(puVar9 + 0xc) = local_48;
    *(undefined8 *)(puVar9 + 10) = uStack_50;
    *(ulong *)puVar13 = CONCAT62(uStack_56,local_58);
    local_58 = 0;
    if ((local_70 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_60);
      goto joined_r0x00223f50;
    }
    if ((local_a8[0] & 1) != 0) goto LAB_00223f54;
LAB_00223f28:
    if ((local_90 & 1) == 0) goto LAB_00223f30;
LAB_00223f6c:
    FUN_0049e790(PTR_LAB_047cba48,local_80);
    pcVar14 = *(char **)(param_1 + 0x20);
  }
  if (pcVar14 == (char *)0x0) goto LAB_00224030;
  lVar15 = *(long *)(param_1 + 8);
  __n = strlen(pcVar14);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_78 = CONCAT31(local_78._1_3_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_78 | 1);
    if (__n != 0) goto LAB_00223fe4;
  }
  else {
    uVar12 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar12);
    local_78 = (uint)uVar12 | 1;
    uStack_74 = (undefined2)(uVar12 >> 0x20);
    uStack_72 = (undefined2)(uVar12 >> 0x30);
    local_70 = (byte)__n;
    uStack_6f = (undefined1)(__n >> 8);
    uStack_6e = (undefined4)(__n >> 0x10);
    uStack_6a = (undefined2)(__n >> 0x30);
    pvStack_68 = __dest;
LAB_00223fe4:
    memcpy(__dest,pcVar14,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_001fcec0(lVar15 + 0x138,&local_78);
  if ((local_78 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,pvStack_68);
  }
  plVar4 = *(long **)puVar2;
  (**(code **)(*plVar4 + 0x58))(plVar4,*(undefined8 *)(param_1 + 0x20));
LAB_00224030:
  uStack_c8 = *(undefined8 *)(param_1 + 0x38);
  local_d0 = *(undefined8 *)(param_1 + 0x30);
  uStack_b8 = *(undefined8 *)(param_1 + 0x48);
  uStack_c0 = *(undefined8 *)(param_1 + 0x40);
  plVar4 = *(long **)puVar2;
  (**(code **)(*plVar4 + 0x148))(plVar4,&local_d0);
  return;
}


