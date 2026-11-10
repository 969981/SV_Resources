/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001b6670; name: FUN_001b6670
 */


undefined8
FUN_001b6670(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  undefined4 *puVar4;
  long lVar5;
  byte bVar6;
  bool bVar7;
  undefined8 *__src;
  undefined8 *puVar8;
  char *pcVar9;
  int iVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined1 auStack_c0 [32];
  int local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80 [4];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  iVar10 = (int)param_3;
  lVar2 = param_1 + 0x140;
  puVar4 = *(undefined4 **)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x20);
  puVar21 = *(uint **)(param_1 + 0x28);
  lVar15 = *(long *)(param_1 + 0x1c8);
  local_80[0] = *(undefined8 *)(lVar2 + ((ulong)(uint)-iVar10 & 7) * 8);
  local_80[1] = *(undefined8 *)(lVar2 + ((ulong)(1 - iVar10) & 7) * 8);
  local_80[2] = *(undefined8 *)(lVar2 + ((ulong)(2 - iVar10) & 7) * 8);
  local_80[3] = *(undefined8 *)(lVar2 + ((ulong)(3 - iVar10) & 7) * 8);
  local_60 = *(undefined8 *)(lVar2 + ((ulong)(4 - iVar10) & 7) * 8);
  local_58 = *(undefined8 *)(lVar2 + ((ulong)(5 - iVar10) & 7) * 8);
  local_50 = *(undefined8 *)(lVar2 + ((ulong)(6 - iVar10) & 7) * 8);
  local_48 = *(undefined8 *)(lVar2 + ((ulong)(7 - iVar10) & 7) * 8);
  __src = *(undefined8 **)(param_1 + 0x38);
  local_88 = 0xfffffff8;
  local_90 = 0xfffffff8fffffff8;
  local_a0 = -8;
  uStack_9c = 0xfffffff8;
  uStack_98 = 0xfffffff8fffffff8;
  if (0xf < (long)param_4 - (long)param_3) {
    param_3 = param_4 + -2;
  }
  uVar16 = lVar15 - ((long)param_3 - (long)param_2 >> 6);
  uVar16 = uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU);
  puVar22 = puVar21 + *(long *)(param_1 + 0x30);
  uVar17 = (ulong)param_2 & 7;
  puVar24 = puVar4;
  if ((long)uVar16 < lVar15) {
    pbVar19 = (byte *)local_80[uVar17];
    puVar20 = puVar21;
    do {
      while( true ) {
        puVar23 = puVar24;
        bVar6 = *pbVar19;
        lVar15 = lVar15 + -1;
        local_80[uVar17] = pbVar19 + 1;
        local_84 = *puVar23;
        uVar18 = (ulong)(bVar6 >> 3) & 3;
        puVar21 = puVar20 + 1;
        uVar17 = (ulong)*puVar20;
        if (uVar18 != 3) {
          puVar21 = puVar20;
          uVar17 = uVar18;
        }
        *param_2 = *__src;
        if (((8 < uVar17) && (param_2[1] = __src[1], 0x10 < uVar17)) &&
           (param_2[2] = __src[2], 0x18 < uVar17)) {
          if ((long)param_3 - (long)param_2 < (long)uVar17) {
            FUN_0015c3d0();
            pcVar14 = *(code **)PTR_PTR_047cb868;
            if (pcVar14 == (code *)0x0) goto LAB_001b6b50;
            pcVar9 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
            pcVar12 = "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n";
            uVar11 = 0x2ac;
            goto LAB_001b6b48;
          }
          uVar16 = lVar15 - ((long)(((long)param_3 - (long)param_2) - uVar17) >> 6);
          uVar17 = uVar17 - 0x18;
          puVar8 = __src + 3;
          puVar13 = param_2 + 3;
          do {
            __src = puVar8 + 1;
            uVar17 = uVar17 - 8;
            param_2 = puVar13 + 1;
            *puVar13 = *puVar8;
            puVar8 = __src;
            puVar13 = param_2;
          } while (0 < (long)uVar17);
          uVar16 = uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU);
        }
        puVar8 = (undefined8 *)((long)param_2 + uVar17);
        __src = (undefined8 *)((long)__src + uVar17);
        piVar3 = (int *)(((ulong)auStack_c0 | 0x20) + (ulong)(bVar6 >> 5) * 4);
        local_a0 = *piVar3;
        uVar18 = (ulong)local_a0;
        bVar7 = (ulong)(bVar6 >> 5) == 7;
        *(undefined8 *)(piVar3 + -5) = *(undefined8 *)(piVar3 + -6);
        *(undefined8 *)(piVar3 + -7) = *(undefined8 *)(piVar3 + -8);
        *(undefined8 *)(piVar3 + -1) = *(undefined8 *)(piVar3 + -2);
        *(undefined8 *)(piVar3 + -3) = *(undefined8 *)(piVar3 + -4);
        if (uVar18 < (ulong)(param_5 - (long)puVar8)) goto LAB_001b6af4;
        puVar13 = (undefined8 *)((long)puVar8 + uVar18);
        lVar2 = ((ulong)bVar6 & 7) + 2;
        puVar20 = puVar21;
        if (lVar2 == 9) break;
        param_2 = (undefined8 *)((long)puVar8 + lVar2);
        *puVar8 = *puVar13;
        uVar17 = (ulong)param_2 & 7;
        pbVar19 = (byte *)local_80[uVar17];
LAB_001b684c:
        puVar24 = puVar23 + bVar7;
        if (lVar15 <= (long)uVar16) goto LAB_001b6924;
      }
      if (puVar22 <= puVar21) goto LAB_001b6be0;
      puVar22 = puVar22 + -1;
      uVar1 = *puVar22 + 6;
      param_2 = (undefined8 *)((long)puVar8 + (ulong)uVar1);
      *puVar8 = *puVar13;
      puVar8[1] = puVar13[1];
      uVar17 = (ulong)param_2 & 7;
      pbVar19 = (byte *)local_80[uVar17];
      if (uVar1 < 0x11) goto LAB_001b684c;
      if ((ulong)((long)param_4 + (-8 - (long)puVar8)) < (ulong)uVar1) goto LAB_001b6c0c;
      puVar8[2] = puVar13[2];
      for (puVar8 = puVar8 + 3; puVar8 < param_2; puVar8 = puVar8 + 1) {
        *puVar8 = *(undefined8 *)((long)puVar8 + uVar18);
      }
      uVar16 = lVar15 - ((long)param_3 - (long)param_2 >> 6);
      uVar16 = uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU);
      puVar24 = puVar23 + bVar7;
    } while ((long)uVar16 < lVar15);
LAB_001b6924:
    uVar17 = (ulong)param_2 & 7;
    puVar24 = puVar23 + bVar7;
  }
  if (0 < lVar15) {
    pbVar19 = (byte *)local_80[uVar17];
    puVar20 = puVar21;
    do {
      bVar6 = *pbVar19;
      uVar16 = (ulong)(bVar6 >> 3) & 3;
      local_80[uVar17] = pbVar19 + 1;
      local_84 = *puVar24;
      puVar21 = puVar20 + 1;
      uVar17 = (ulong)*puVar20;
      if (uVar16 != 3) {
        puVar21 = puVar20;
        uVar17 = uVar16;
      }
      if ((long)param_3 - (long)param_2 < (long)uVar17) {
        FUN_0015c3d0();
        pcVar14 = *(code **)PTR_PTR_047cb868;
        if (pcVar14 == (code *)0x0) goto LAB_001b6b50;
        pcVar9 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
        pcVar12 = "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n";
        uVar11 = 0x26d;
        goto LAB_001b6b48;
      }
      *param_2 = *__src;
      if (((8 < uVar17) && (param_2[1] = __src[1], 0x10 < uVar17)) &&
         (param_2[2] = __src[2], 0x18 < uVar17)) {
        uVar17 = uVar17 - 0x18;
        puVar8 = __src + 3;
        puVar13 = param_2 + 3;
        do {
          __src = puVar8 + 1;
          uVar17 = uVar17 - 8;
          param_2 = puVar13 + 1;
          *puVar13 = *puVar8;
          puVar8 = __src;
          puVar13 = param_2;
        } while (0 < (long)uVar17);
      }
      puVar8 = (undefined8 *)((long)param_2 + uVar17);
      piVar3 = (int *)(((ulong)auStack_c0 | 0x20) + (ulong)(bVar6 >> 5) * 4);
      local_a0 = *piVar3;
      uVar16 = (ulong)local_a0;
      __src = (undefined8 *)((long)__src + uVar17);
      *(undefined8 *)(piVar3 + -1) = *(undefined8 *)(piVar3 + -2);
      *(undefined8 *)(piVar3 + -3) = *(undefined8 *)(piVar3 + -4);
      *(undefined8 *)(piVar3 + -5) = *(undefined8 *)(piVar3 + -6);
      *(undefined8 *)(piVar3 + -7) = *(undefined8 *)(piVar3 + -8);
      if (uVar16 < (ulong)(param_5 - (long)puVar8)) goto LAB_001b6af4;
      puVar13 = (undefined8 *)((long)puVar8 + uVar16);
      lVar2 = ((ulong)bVar6 & 7) + 2;
      if (lVar2 == 9) {
        if (puVar22 <= puVar21) goto LAB_001b6be0;
        puVar22 = puVar22 + -1;
        uVar1 = *puVar22 + 6;
        param_2 = (undefined8 *)((long)puVar8 + (ulong)uVar1);
        *puVar8 = *puVar13;
        puVar8[1] = puVar13[1];
        uVar17 = (ulong)param_2 & 7;
        pbVar19 = (byte *)local_80[uVar17];
        if (0x10 < uVar1) {
          if ((ulong)((long)param_4 + (-8 - (long)puVar8)) < (ulong)uVar1) goto LAB_001b6c0c;
          puVar8[2] = puVar13[2];
          for (puVar8 = puVar8 + 3; puVar8 < param_2; puVar8 = puVar8 + 1) {
            *puVar8 = *(undefined8 *)((long)puVar8 + uVar16);
          }
        }
      }
      else {
        param_2 = (undefined8 *)((long)puVar8 + lVar2);
        *puVar8 = *puVar13;
        uVar17 = (ulong)param_2 & 7;
        pbVar19 = (byte *)local_80[uVar17];
      }
      lVar15 = lVar15 + -1;
      puVar24 = puVar24 + ((ulong)(bVar6 >> 5) == 7);
      puVar20 = puVar21;
    } while (0 < lVar15);
  }
  if (param_2 < param_4) {
    memcpy(param_2,__src,(long)param_4 - (long)param_2);
  }
  else if (param_2 != param_4) {
    FUN_0015c3d0();
    pcVar14 = *(code **)PTR_PTR_047cb868;
    if (pcVar14 == (code *)0x0) goto LAB_001b6b50;
    pcVar9 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_outer.inl";
    pcVar12 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    uVar11 = 0x198;
    goto LAB_001b6b48;
  }
  if (puVar24 == puVar4 + lVar5) {
    if (puVar21 == puVar22) {
      return 1;
    }
    FUN_0015c3d0();
    pcVar14 = *(code **)PTR_PTR_047cb868;
    if (pcVar14 == (code *)0x0) goto LAB_001b6b50;
    pcVar9 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_outer.inl";
    pcVar12 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
    uVar11 = 0x1a2;
  }
  else {
    FUN_0015c3d0();
    pcVar14 = *(code **)PTR_PTR_047cb868;
    if (pcVar14 == (code *)0x0) goto LAB_001b6b50;
    pcVar9 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_outer.inl";
    pcVar12 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
    uVar11 = 0x1a1;
  }
LAB_001b6b48:
  (*pcVar14)(0,pcVar9,uVar11,pcVar12);
LAB_001b6b50:
  FUN_0015c3f0();
  return 0;
LAB_001b6af4:
  FUN_0015c3d0();
  pcVar14 = *(code **)PTR_PTR_047cb868;
  if (pcVar14 == (code *)0x0) goto LAB_001b6b50;
  pcVar9 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
  pcVar12 = "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n";
  uVar11 = 0x2f1;
  goto LAB_001b6b48;
LAB_001b6be0:
  FUN_0015c3d0();
  pcVar14 = *(code **)PTR_PTR_047cb868;
  if (pcVar14 == (code *)0x0) goto LAB_001b6b50;
  pcVar9 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
  pcVar12 = "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n";
  uVar11 = 0x313;
  goto LAB_001b6b48;
LAB_001b6c0c:
  FUN_0015c3d0();
  pcVar14 = *(code **)PTR_PTR_047cb868;
  if (pcVar14 == (code *)0x0) goto LAB_001b6b50;
  pcVar9 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
  pcVar12 = "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n";
  uVar11 = 0x331;
  goto LAB_001b6b48;
}


