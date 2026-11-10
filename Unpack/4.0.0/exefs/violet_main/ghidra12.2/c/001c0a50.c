/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c0a50; name: FUN_001c0a50
 */


undefined8
FUN_001c0a50(ulong *param_1,ulong *param_2,long param_3,undefined8 param_4,long param_5,uint param_6
            ,ulong *param_7,long param_8,undefined8 param_9,ulong *param_10,undefined8 param_11,
            char param_12,int param_13)

{
  long *plVar1;
  uint3 uVar2;
  bool bVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  int iVar7;
  code *pcVar8;
  long lVar9;
  ulong *puVar10;
  long *plVar11;
  long *plVar12;
  ulong *puVar13;
  long lVar14;
  uint uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *local_968;
  ulong *puStack_960;
  ulong local_958;
  ulong uStack_950;
  ulong *local_948;
  ulong *puStack_940;
  ulong local_938;
  long lStack_930;
  long local_928 [3];
  ulong *local_910;
  ulong *puStack_908;
  uint local_900;
  uint uStack_8fc;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulong local_e8;
  undefined8 uStack_e0;
  ulong local_d8 [15];
  
  if ((param_2 <= param_1) && (param_12 == '\0')) {
    return 0xffffffff;
  }
  if ((long)param_2 - (long)param_1 < (long)param_13) {
    FUN_0015c3d0();
    pcVar8 = *(code **)PTR_PTR_047cb868;
    if (pcVar8 == (code *)0x0) goto LAB_001c0ae8;
    pcVar5 = "OODLE ERROR : corruption : excess_stream_bytes > comp_bytes\n";
    uVar4 = 0x5f3;
    goto LAB_001c0ae0;
  }
  puVar13 = (ulong *)((long)param_2 - (long)param_13);
  if (param_1 + 8 < puVar13) {
    bVar3 = false;
    puVar10 = puVar13;
    puVar17 = param_1;
  }
  else {
    if (puVar13 < param_1) {
      FUN_0015c3d0();
      pcVar8 = *(code **)PTR_PTR_047cb868;
      if (pcVar8 == (code *)0x0) goto LAB_001c0ae8;
      pcVar5 = "OODLE ERROR : corruption : b >= f\n";
      uVar4 = 0x61c;
      goto LAB_001c0ae0;
    }
    iVar7 = param_13;
    if (0x2f < param_13) {
      iVar7 = 0x30;
    }
    puVar17 = local_d8;
    local_d8[0xc] = 0;
    local_d8[0xd] = 0;
    local_d8[10] = 0;
    local_d8[0xb] = 0;
    local_d8[8] = 0;
    local_d8[9] = 0;
    local_d8[6] = 0;
    local_d8[7] = 0;
    local_d8[4] = 0;
    local_d8[5] = 0;
    local_d8[2] = 0;
    local_d8[3] = 0;
    local_d8[0] = 0;
    local_d8[1] = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    memcpy(puVar17,param_1,((long)puVar13 - (long)param_1) + (long)iVar7);
    puVar10 = (ulong *)((long)puVar17 + ((long)puVar13 - (long)param_1));
    bVar3 = true;
  }
  puVar16 = (ulong *)((long)puVar10 + -7);
  uVar20 = puVar10[-1];
  if (param_12 == '\0') {
    if (uVar20 >> 0x2d == 0) {
      return 0xffffffff;
    }
    uVar18 = LZCOUNT(uVar20) << 1 | 1;
    uVar21 = uVar20 >> (-uVar18 & 0x3f);
    puVar16 = (ulong *)((long)puVar16 - (uVar18 + 7 >> 3));
    uVar20 = *(ulong *)((long)puVar10 + -0xf) >> (0x38 - uVar18 & 0x3f) |
             uVar20 << (LZCOUNT(uVar20) << 1 & 0x3eU | 1);
    lVar6 = uVar21 - 1;
    uVar18 = uVar18 + 7 & 6;
    if (param_5 < 1) goto LAB_001c0c64;
LAB_001c0bb8:
    local_928[1] = param_3 + param_5;
    local_8f8 = 0;
    uStack_8f0 = 0;
    uStack_8fc = (int)uVar18 + 1U & 7;
    local_928[2] = param_9;
    puStack_908 = (ulong *)((long)puVar16 + (0x46 - uVar18 >> 3));
    local_900 = 0;
    local_928[0] = param_3;
    local_910 = puVar17;
    if (param_6 == 0) {
      uVar20 = FUN_001c2d60(local_928,&DAT_03cbfc84);
      if ((uVar20 & 1) == 0) {
        return 0xffffffff;
      }
      uVar20 = FUN_001c0190(local_928);
      puVar10 = puStack_908;
    }
    else {
      uVar20 = FUN_001c30a0(local_928,&DAT_03cc0084);
      if ((uVar20 & 1) == 0) {
        return 0xffffffff;
      }
      uVar20 = FUN_001c0430(local_928);
      puVar10 = puStack_908;
    }
    if ((uVar20 & 1) == 0) {
      return 0xffffffff;
    }
    puVar17 = local_910;
    puStack_908 = puVar10;
    if (local_910 + 8 < puVar10) {
LAB_001c0e7c:
      puVar16 = (ulong *)((long)puVar10 + -7);
      uVar20 = (*puVar17 & 0xff00ff00ff00ff00) >> 8 | (*puVar17 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      lVar19 = (ulong)local_900 + 7;
      uVar20 = puVar10[-1] << ((ulong)uStack_8fc & 0x3f);
      uVar21 = (uVar18 >> 0x20 | uVar18 << 0x20) << ((ulong)local_900 & 0x3f);
      uVar18 = (ulong)uStack_8fc + 7;
      if (1 < param_6) {
        FUN_0015fe40(param_9,param_5,param_6,param_4);
      }
      goto joined_r0x001c0ed0;
    }
    if (bVar3) {
      if (puVar10 < local_910 + -2) {
        FUN_0015c3d0();
        pcVar8 = *(code **)PTR_PTR_047cb868;
        if (pcVar8 == (code *)0x0) goto LAB_001c0ae8;
        pcVar5 = "OODLE ERROR : corruption : b >= f-16\n";
        uVar4 = 0x6ab;
      }
      else if (puVar10 < &local_e8) {
        FUN_0015c3d0();
        pcVar8 = *(code **)PTR_PTR_047cb868;
        if (pcVar8 == (code *)0x0) goto LAB_001c0ae8;
        pcVar5 = "OODLE ERROR : corruption : b >= safe_space+(32)\n";
        uVar4 = 0x6ab;
      }
      else {
        if (local_910 <= local_d8 + 10) goto LAB_001c0e7c;
        FUN_0015c3d0();
        pcVar8 = *(code **)PTR_PTR_047cb868;
        if (pcVar8 == (code *)0x0) goto LAB_001c0ae8;
        pcVar5 = "OODLE ERROR : corruption : f <= safe_space + sizeof(safe_space) -(32)\n";
        uVar4 = 0x6ab;
      }
    }
    else {
      lVar19 = (long)puVar10 - (long)local_910;
      if (local_910 <= puVar10) {
        lVar14 = (long)local_910 - (long)param_1;
        lVar9 = (long)param_2 - (long)puVar10;
        local_d8[0xc] = 0;
        local_d8[0xd] = 0;
        if (0x2f < lVar14) {
          lVar14 = 0x30;
        }
        puVar17 = local_d8;
        local_d8[10] = 0;
        local_d8[0xb] = 0;
        if (0x2f < lVar9) {
          lVar9 = 0x30;
        }
        local_d8[8] = 0;
        local_d8[9] = 0;
        local_d8[6] = 0;
        local_d8[7] = 0;
        local_d8[4] = 0;
        local_d8[5] = 0;
        local_d8[2] = 0;
        local_d8[3] = 0;
        local_d8[0] = 0;
        local_d8[1] = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_108 = 0;
        uStack_100 = 0;
        memcpy((void *)((long)puVar17 - lVar14),(void *)((long)local_910 - lVar14),
               lVar14 + lVar19 + lVar9);
        puVar10 = (ulong *)((long)puVar17 + lVar19);
        goto LAB_001c0e7c;
      }
      FUN_0015c3d0();
      pcVar8 = *(code **)PTR_PTR_047cb868;
      if (pcVar8 == (code *)0x0) goto LAB_001c0ae8;
      pcVar5 = "OODLE ERROR : corruption : b >= f\n";
      uVar4 = 0x6ab;
    }
  }
  else {
    lVar6 = 0;
    uVar18 = 7;
    if (0 < param_5) goto LAB_001c0bb8;
LAB_001c0c64:
    uVar21 = (*puVar17 & 0xff00ff00ff00ff00) >> 8 | (*puVar17 & 0xff00ff00ff00ff) << 8;
    uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
    uVar21 = uVar21 >> 0x20 | uVar21 << 0x20;
    lVar19 = 7;
joined_r0x001c0ed0:
    puVar17 = (ulong *)((long)puVar17 + 7);
    puVar10 = puVar13;
    if (param_12 == '\0') {
    }
    else {
      lVar14 = 0x46 - lVar19;
      if (-1 < 0x3f - lVar19) {
        lVar14 = 0x3f - lVar19;
      }
      lVar9 = 0x46 - uVar18;
      if (-1 < (long)(0x3f - uVar18)) {
        lVar9 = 0x3f - uVar18;
      }
      if ((long)puVar17 - (lVar14 >> 3) != (long)puVar16 + (lVar9 >> 3)) {
        FUN_0015c3d0();
        pcVar8 = *(code **)PTR_PTR_047cb868;
        if (pcVar8 == (code *)0x0) goto LAB_001c0ae8;
        pcVar5 = "OODLE ERROR : corruption : ptr_delta == 0\n";
        uVar4 = 0x6f5;
        goto LAB_001c0ae0;
      }
      if (param_13 != 0) {
        uVar18 = 0x3f;
        uVar20 = 0;
        lVar19 = 0x3f;
        uVar21 = 0;
        puVar10 = param_2;
        puVar17 = puVar13;
        puVar16 = param_2;
      }
    }
    if ((param_13 < 1) && (lVar6 == 0)) {
      lVar6 = 0x46 - lVar19;
      if (-1 < 0x3f - lVar19) {
        lVar6 = 0x3f - lVar19;
      }
      lVar19 = 0x46 - uVar18;
      if (-1 < (long)(0x3f - uVar18)) {
        lVar19 = 0x3f - uVar18;
      }
      if ((long)puVar17 - (lVar6 >> 3) == (long)puVar16 + (lVar19 >> 3)) {
        puVar13 = (ulong *)((long)param_10 + param_8 * 4);
        if (0x1c < param_8 * 4) {
          puVar17 = param_7;
          puVar10 = param_10;
          do {
            param_7 = puVar17 + 1;
            uVar20 = *puVar17;
            uVar2 = CONCAT12((char)(uVar20 >> 8),(short)uVar20) & 0xff00ff;
            param_10 = puVar10 + 4;
            puVar10[1] = (ulong)CONCAT24((byte)(uVar20 >> 0x18) + 3,
                                         (uint)(ushort)((byte)(uVar20 >> 0x10) + 3));
            *puVar10 = (ulong)CONCAT24((byte)(uVar2 >> 0x10) + 3,(uint)(ushort)((short)uVar2 + 3));
            puVar10[3] = (ulong)CONCAT24((byte)(uVar20 >> 0x38) + 3,
                                         (uint)(ushort)((byte)(uVar20 >> 0x30) + 3));
            puVar10[2] = (ulong)CONCAT24((byte)(uVar20 >> 0x28) + 3,
                                         (uint)(ushort)((byte)(uVar20 >> 0x20) + 3));
            puVar17 = param_7;
            puVar10 = param_10;
          } while (param_10 < (ulong *)((long)puVar13 + -0x1c));
        }
        for (; param_10 < puVar13; param_10 = (ulong *)((long)param_10 + 4)) {
          *(uint *)param_10 = (byte)*param_7 + 3;
          param_7 = (ulong *)((long)param_7 + 1);
        }
        return 1;
      }
      FUN_0015c3d0();
      pcVar8 = *(code **)PTR_PTR_047cb868;
      if (pcVar8 == (code *)0x0) goto LAB_001c0ae8;
      pcVar5 = "OODLE ERROR : corruption : ptr_delta == 0\n";
      uVar4 = 0x7e2;
    }
    else {
      local_968 = puVar16;
      puStack_960 = puVar10;
      local_958 = uVar20;
      uStack_950 = uVar18;
      local_948 = puVar17;
      puStack_940 = puVar10;
      local_938 = uVar21;
      lStack_930 = lVar19;
      lVar6 = FUN_001c0640(&local_948,&local_968,local_928,auStack_128);
      if (lVar6 < 0) {
        FUN_0015c3d0();
        pcVar8 = *(code **)PTR_PTR_047cb868;
        if (pcVar8 == (code *)0x0) goto LAB_001c0ae8;
        pcVar5 = "OODLE ERROR : corruption : invalid excess stream\n";
        uVar4 = 0x71a;
      }
      else if (param_8 < lVar6) {
        FUN_0015c3d0();
        pcVar8 = *(code **)PTR_PTR_047cb868;
        if (pcVar8 == (code *)0x0) goto LAB_001c0ae8;
        pcVar5 = "OODLE ERROR : corruption : excess_u32_count > excesses_count\n";
        uVar4 = 0x721;
      }
      else {
        plVar1 = (long *)((long)local_928 + lVar6 * 4);
        puVar13 = (ulong *)((long)param_10 + param_8 * 4);
        plVar12 = local_928;
        if (0x1c < param_8 * 4) {
          plVar12 = local_928;
          do {
            uVar20 = *param_7;
            uVar2 = CONCAT12((char)(uVar20 >> 8),(short)uVar20) & 0xff00ff;
            param_10[1] = (ulong)CONCAT24((byte)(uVar20 >> 0x18) + 3,
                                          (uint)(ushort)((byte)(uVar20 >> 0x10) + 3));
            *param_10 = (ulong)CONCAT24((byte)(uVar2 >> 0x10) + 3,(uint)(ushort)((short)uVar2 + 3));
            param_10[3] = (ulong)CONCAT24((byte)(uVar20 >> 0x38) + 3,
                                          (uint)(ushort)((byte)(uVar20 >> 0x30) + 3));
            param_10[2] = (ulong)CONCAT24((byte)(uVar20 >> 0x28) + 3,
                                          (uint)(ushort)((byte)(uVar20 >> 0x20) + 3));
            uVar20 = uVar20 & 0x8080808080808080 - (~uVar20 & 0x7f7f7f7f7f7f7f7f) &
                     0x8080808080808080;
            plVar11 = plVar12;
            if (uVar20 != 0) {
              do {
                uVar18 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
                plVar12 = (long *)((long)plVar11 + 4);
                *(int *)((long)param_10 +
                        ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 1 & 0x3c)) =
                     (int)*plVar11 + 0x102;
                uVar20 = uVar20 - 1 & uVar20;
                plVar11 = plVar12;
              } while (uVar20 != 0);
              if (plVar1 < plVar12) {
                FUN_0015c3d0();
                pcVar8 = *(code **)PTR_PTR_047cb868;
                if (pcVar8 == (code *)0x0) goto LAB_001c0ae8;
                pcVar5 = "OODLE ERROR : corruption : excesses_u32_ptr <= excesses_u32_end\n";
                uVar4 = 0x7bd;
                goto LAB_001c0ae0;
              }
            }
            param_10 = param_10 + 4;
            param_7 = param_7 + 1;
          } while (param_10 < (ulong *)((long)puVar13 + -0x1c));
        }
        for (; param_10 < puVar13; param_10 = (ulong *)((long)param_10 + 4)) {
          uVar15 = (uint)(byte)*param_7;
          plVar11 = plVar12;
          if (uVar15 == 0xff) {
            if (plVar1 <= plVar12) {
              FUN_0015c3d0();
              pcVar8 = *(code **)PTR_PTR_047cb868;
              if (pcVar8 == (code *)0x0) goto LAB_001c0ae8;
              pcVar5 = "OODLE ERROR : corruption : excesses_u32_ptr < excesses_u32_end\n";
              uVar4 = 0x7cd;
              goto LAB_001c0ae0;
            }
            plVar11 = (long *)((long)plVar12 + 4);
            uVar15 = (int)*plVar12 + 0xff;
          }
          *(uint *)param_10 = uVar15 + 3;
          plVar12 = plVar11;
          param_7 = (ulong *)((long)param_7 + 1);
        }
        if (plVar12 == plVar1) {
          return 1;
        }
        FUN_0015c3d0();
        pcVar8 = *(code **)PTR_PTR_047cb868;
        if (pcVar8 == (code *)0x0) goto LAB_001c0ae8;
        pcVar5 = "OODLE ERROR : corruption : excesses_u32_ptr == excesses_u32_end\n";
        uVar4 = 0x7d4;
      }
    }
  }
LAB_001c0ae0:
  (*pcVar8)(0,"v:\\devel\\projects\\oodle2\\core\\newlz_offsets.cpp",uVar4,pcVar5);
LAB_001c0ae8:
  FUN_0015c3f0();
  return 0xffffffff;
}


