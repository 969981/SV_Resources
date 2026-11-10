/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001b36b0; name: FUN_001b36b0
 */


undefined8
FUN_001b36b0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,long param_5)

{
  uint uVar1;
  byte *pbVar2;
  int *piVar3;
  undefined4 *puVar4;
  long lVar5;
  byte bVar6;
  undefined8 *__src;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  code *pcVar12;
  byte *pbVar14;
  byte *pbVar13;
  byte *pbVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  undefined4 *puVar22;
  undefined1 auStack_80 [32];
  int local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  puVar20 = *(uint **)(param_1 + 0x28);
  puVar4 = *(undefined4 **)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x20);
  pbVar13 = *(byte **)(param_1 + 0x1c0);
  puVar21 = puVar20 + *(long *)(param_1 + 0x30);
  __src = *(undefined8 **)(param_1 + 0x38);
  local_60 = -8;
  uStack_5c = 0xfffffff8;
  uStack_58 = 0xfffffff8fffffff8;
  local_50 = 0xfffffff8fffffff8;
  local_48 = 0xfffffff8;
  if (0xf < (long)param_4 - (long)param_3) {
    param_3 = param_4 + -2;
  }
  lVar16 = (long)param_3 - (long)param_2 >> 6;
  pbVar2 = pbVar13 + *(long *)(param_1 + 0x1c8);
  pbVar15 = pbVar2;
  if (lVar16 <= *(long *)(param_1 + 0x1c8)) {
    pbVar15 = pbVar13 + lVar16;
  }
  pbVar14 = pbVar13;
  puVar19 = puVar20;
  puVar22 = puVar4;
  if (pbVar13 < pbVar15) {
    do {
      while( true ) {
        pbVar13 = pbVar14 + 1;
        bVar6 = *pbVar14;
        local_44 = *puVar22;
        uVar17 = (ulong)(bVar6 >> 3) & 3;
        puVar20 = puVar19 + 1;
        uVar18 = (ulong)*puVar19;
        if (uVar17 != 3) {
          puVar20 = puVar19;
          uVar18 = uVar17;
        }
        *param_2 = *__src;
        if (((8 < uVar18) && (param_2[1] = __src[1], 0x10 < uVar18)) &&
           (param_2[2] = __src[2], 0x18 < uVar18)) {
          if ((long)param_3 - (long)param_2 < (long)uVar18) {
            FUN_0015c3d0();
            pcVar12 = *(code **)PTR_PTR_047cb868;
            if (pcVar12 == (code *)0x0) goto LAB_001b3ac4;
            pcVar8 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
            pcVar10 = "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n";
            uVar9 = 0x2ac;
            goto LAB_001b3abc;
          }
          lVar16 = (long)(((long)param_3 - (long)param_2) - uVar18) >> 6;
          uVar18 = uVar18 - 0x18;
          puVar7 = __src + 3;
          puVar11 = param_2 + 3;
          do {
            __src = puVar7 + 1;
            uVar18 = uVar18 - 8;
            param_2 = puVar11 + 1;
            *puVar11 = *puVar7;
            puVar7 = __src;
            puVar11 = param_2;
          } while (0 < (long)uVar18);
          pbVar15 = pbVar2;
          if (lVar16 <= (long)pbVar2 - (long)pbVar13) {
            pbVar15 = pbVar13 + lVar16;
          }
        }
        puVar7 = (undefined8 *)((long)param_2 + uVar18);
        uVar17 = (ulong)(bVar6 >> 5);
        __src = (undefined8 *)((long)__src + uVar18);
        piVar3 = (int *)(((ulong)auStack_80 | 0x20) + uVar17 * 4);
        local_60 = *piVar3;
        uVar18 = (ulong)local_60;
        *(undefined8 *)(piVar3 + -1) = *(undefined8 *)(piVar3 + -2);
        *(undefined8 *)(piVar3 + -3) = *(undefined8 *)(piVar3 + -4);
        *(undefined8 *)(piVar3 + -5) = *(undefined8 *)(piVar3 + -6);
        *(undefined8 *)(piVar3 + -7) = *(undefined8 *)(piVar3 + -8);
        if (uVar18 < (ulong)(param_5 - (long)puVar7)) goto LAB_001b3a68;
        puVar11 = (undefined8 *)((long)puVar7 + uVar18);
        lVar16 = ((ulong)bVar6 & 7) + 2;
        pbVar14 = pbVar13;
        puVar19 = puVar20;
        if (lVar16 == 9) break;
        param_2 = (undefined8 *)((long)puVar7 + lVar16);
        *puVar7 = *puVar11;
LAB_001b37e4:
        puVar22 = puVar22 + (uVar17 == 7);
        if (pbVar15 <= pbVar13) goto LAB_001b38bc;
      }
      if (puVar21 <= puVar20) goto LAB_001b3b54;
      puVar21 = puVar21 + -1;
      uVar1 = *puVar21 + 6;
      param_2 = (undefined8 *)((long)puVar7 + (ulong)uVar1);
      *puVar7 = *puVar11;
      puVar7[1] = puVar11[1];
      if (uVar1 < 0x11) goto LAB_001b37e4;
      if ((ulong)((long)param_4 + (-8 - (long)puVar7)) < (ulong)uVar1) goto LAB_001b3b80;
      puVar7[2] = puVar11[2];
      for (puVar7 = puVar7 + 3; puVar7 < param_2; puVar7 = puVar7 + 1) {
        *puVar7 = *(undefined8 *)((long)puVar7 + uVar18);
      }
      lVar16 = (long)param_3 - (long)param_2 >> 6;
      pbVar15 = pbVar2;
      if (lVar16 <= (long)pbVar2 - (long)pbVar13) {
        pbVar15 = pbVar13 + lVar16;
      }
      puVar22 = puVar22 + (uVar17 == 7);
    } while (pbVar13 < pbVar15);
  }
LAB_001b38bc:
  puVar19 = puVar20;
  if (pbVar13 < pbVar2) {
    do {
      pbVar15 = pbVar13 + 1;
      bVar6 = *pbVar13;
      uVar17 = (ulong)(bVar6 >> 3) & 3;
      local_44 = *puVar22;
      puVar20 = puVar19 + 1;
      uVar18 = (ulong)*puVar19;
      if (uVar17 != 3) {
        puVar20 = puVar19;
        uVar18 = uVar17;
      }
      if ((long)param_3 - (long)param_2 < (long)uVar18) {
        FUN_0015c3d0();
        pcVar12 = *(code **)PTR_PTR_047cb868;
        if (pcVar12 == (code *)0x0) goto LAB_001b3ac4;
        pcVar8 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
        pcVar10 = "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n";
        uVar9 = 0x26d;
        goto LAB_001b3abc;
      }
      *param_2 = *__src;
      if (((8 < uVar18) && (param_2[1] = __src[1], 0x10 < uVar18)) &&
         (param_2[2] = __src[2], 0x18 < uVar18)) {
        uVar18 = uVar18 - 0x18;
        puVar7 = __src + 3;
        puVar11 = param_2 + 3;
        do {
          __src = puVar7 + 1;
          uVar18 = uVar18 - 8;
          param_2 = puVar11 + 1;
          *puVar11 = *puVar7;
          puVar7 = __src;
          puVar11 = param_2;
        } while (0 < (long)uVar18);
      }
      puVar7 = (undefined8 *)((long)param_2 + uVar18);
      piVar3 = (int *)(((ulong)auStack_80 | 0x20) + (ulong)(bVar6 >> 5) * 4);
      __src = (undefined8 *)((long)__src + uVar18);
      local_60 = *piVar3;
      uVar18 = (ulong)local_60;
      *(undefined8 *)(piVar3 + -1) = *(undefined8 *)(piVar3 + -2);
      *(undefined8 *)(piVar3 + -3) = *(undefined8 *)(piVar3 + -4);
      *(undefined8 *)(piVar3 + -5) = *(undefined8 *)(piVar3 + -6);
      *(undefined8 *)(piVar3 + -7) = *(undefined8 *)(piVar3 + -8);
      if (uVar18 < (ulong)(param_5 - (long)puVar7)) goto LAB_001b3a68;
      puVar11 = (undefined8 *)((long)puVar7 + uVar18);
      lVar16 = ((ulong)bVar6 & 7) + 2;
      if (lVar16 == 9) {
        if (puVar21 <= puVar20) goto LAB_001b3b54;
        puVar21 = puVar21 + -1;
        uVar1 = *puVar21 + 6;
        param_2 = (undefined8 *)((long)puVar7 + (ulong)uVar1);
        *puVar7 = *puVar11;
        puVar7[1] = puVar11[1];
        if (0x10 < uVar1) {
          if ((ulong)((long)param_4 + (-8 - (long)puVar7)) < (ulong)uVar1) goto LAB_001b3b80;
          puVar7[2] = puVar11[2];
          for (puVar7 = puVar7 + 3; puVar7 < param_2; puVar7 = puVar7 + 1) {
            *puVar7 = *(undefined8 *)((long)puVar7 + uVar18);
          }
        }
      }
      else {
        param_2 = (undefined8 *)((long)puVar7 + lVar16);
        *puVar7 = *puVar11;
      }
      puVar22 = puVar22 + ((ulong)(bVar6 >> 5) == 7);
      pbVar13 = pbVar15;
      puVar19 = puVar20;
    } while (pbVar15 != pbVar2);
  }
  if (param_2 < param_4) {
    memcpy(param_2,__src,(long)param_4 - (long)param_2);
  }
  else if (param_2 != param_4) {
    FUN_0015c3d0();
    pcVar12 = *(code **)PTR_PTR_047cb868;
    if (pcVar12 == (code *)0x0) goto LAB_001b3ac4;
    pcVar8 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_outer.inl";
    pcVar10 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    uVar9 = 0x198;
    goto LAB_001b3abc;
  }
  if (puVar22 == puVar4 + lVar5) {
    if (puVar20 == puVar21) {
      return 1;
    }
    FUN_0015c3d0();
    pcVar12 = *(code **)PTR_PTR_047cb868;
    if (pcVar12 == (code *)0x0) goto LAB_001b3ac4;
    pcVar8 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_outer.inl";
    pcVar10 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
    uVar9 = 0x1a2;
  }
  else {
    FUN_0015c3d0();
    pcVar12 = *(code **)PTR_PTR_047cb868;
    if (pcVar12 == (code *)0x0) goto LAB_001b3ac4;
    pcVar8 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_outer.inl";
    pcVar10 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
    uVar9 = 0x1a1;
  }
LAB_001b3abc:
  (*pcVar12)(0,pcVar8,uVar9,pcVar10);
LAB_001b3ac4:
  FUN_0015c3f0();
  return 0;
LAB_001b3a68:
  FUN_0015c3d0();
  pcVar12 = *(code **)PTR_PTR_047cb868;
  if (pcVar12 == (code *)0x0) goto LAB_001b3ac4;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
  pcVar10 = "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n";
  uVar9 = 0x2f1;
  goto LAB_001b3abc;
LAB_001b3b54:
  FUN_0015c3d0();
  pcVar12 = *(code **)PTR_PTR_047cb868;
  if (pcVar12 == (code *)0x0) goto LAB_001b3ac4;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
  pcVar10 = "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n";
  uVar9 = 0x313;
  goto LAB_001b3abc;
LAB_001b3b80:
  FUN_0015c3d0();
  pcVar12 = *(code **)PTR_PTR_047cb868;
  if (pcVar12 == (code *)0x0) goto LAB_001b3ac4;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
  pcVar10 = "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n";
  uVar9 = 0x331;
  goto LAB_001b3abc;
}


