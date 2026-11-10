/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00362c44; name: FUN_00362c44
 */


/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffffffffff38 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00362c44(int *param_1,byte *param_2,long param_3,undefined8 *param_4)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  uint5 uVar5;
  uint6 uVar6;
  ushort uVar7;
  undefined1 *puVar8;
  bool bVar9;
  int *piVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  long lVar14;
  size_t sVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  ulong *puVar20;
  int *piVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  uint uVar25;
  undefined8 *puVar26;
  long lVar27;
  ulong uVar28;
  undefined8 *puVar29;
  int *piVar30;
  long *plVar31;
  undefined1 *local_1f8;
  long lStack_1f0;
  undefined1 auStack_1e8 [32];
  byte local_1c8 [16];
  ulong local_1b8;
  undefined1 auStack_1b0 [32];
  byte *local_190;
  byte *local_188;
  long local_180;
  undefined8 local_178;
  ushort local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  char local_150;
  int local_148;
  ulong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long *local_128;
  long local_120;
  long local_118;
  long local_110;
  long lStack_108;
  undefined8 local_100;
  long local_f8;
  long local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  undefined1 *local_d0;
  ulong uStack_c8;
  ulong local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulong uStack_a0;
  undefined1 *local_98;
  long *local_90;
  long local_88;
  long local_80;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  
  *param_1 = 0;
  puVar20 = (ulong *)(param_1 + 2);
  *puVar20 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  piVar21 = param_1 + 0xe;
  piVar21[0] = 0;
  piVar21[1] = 0;
  piVar30 = param_1 + 10;
  piVar30[0] = 0;
  piVar30[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(int **)(param_1 + 8) = piVar30;
  local_148 = 0;
  local_170 = 0;
  local_168 = (undefined8 *)0x0;
  local_150 = '\0';
  local_178 = 3;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_120 = 0;
  local_118 = 0;
  local_160 = (undefined8 *)0x0;
  local_158 = (undefined8 *)0x0;
  local_130 = 0;
  uStack_c8 = 0;
  local_d0 = (undefined1 *)0x0;
  local_b8 = (undefined1 *)0x0;
  local_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  lStack_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_190 = param_2;
  local_188 = param_2;
  local_180 = param_3;
  local_128 = &local_120;
  if (param_3 == 0) {
LAB_00363920:
    if (local_f8 == local_f0) {
      bVar9 = ((uint)local_178 & 0xfffffffe) != 0x1a;
    }
    else {
switchD_00362e00_caseD_1b:
      bVar9 = true;
    }
    if (local_150 != '\0') {
                    /* try { // try from 0036395c to 00363987 has its CatchHandler @ 00363ec0 */
      FUN_003673f0(&local_b0,
                   "too many errors encountered during JSON parsing -- fix reported errors and try again to see additional errors"
                  );
      uVar13 = FUN_00351340("external/com_google_grpc_base/src/core/lib/json/json_reader.cc",0x33a,
                            &local_b0,0,0);
      if (local_160 < local_158) {
        *local_160 = uVar13;
        local_160 = local_160 + 1;
      }
      else {
        lVar27 = (long)local_160 - (long)local_168 >> 3;
        uVar28 = lVar27 + 1;
        if (uVar28 >> 0x3d != 0) {
                    /* try { // try from 00363e5c to 00363e63 has its CatchHandler @ 00363ec0 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar22 = (long)local_158 - (long)local_168 >> 2;
        if (uVar28 <= uVar22) {
          uVar28 = uVar22;
        }
        if (0xffffffffffffffe < (ulong)((long)local_158 - (long)local_168 >> 3)) {
          uVar28 = 0x1fffffffffffffff;
        }
        if (uVar28 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = FUN_0049e770(PTR_FUN_047cba38,uVar28 << 3);
        }
        puVar26 = (undefined8 *)(lVar14 + lVar27 * 8);
        puVar24 = (undefined8 *)(lVar14 + uVar28 * 8);
        *puVar26 = uVar13;
        sVar15 = (long)local_160 - (long)local_168;
        puVar29 = (undefined8 *)((long)puVar26 - sVar15);
        if (0 < (long)sVar15) {
          memcpy(puVar29,local_168,sVar15);
        }
        bVar2 = local_168 != (undefined8 *)0x0;
        local_168 = puVar29;
        local_160 = puVar26 + 1;
        local_158 = puVar24;
        if (bVar2) {
          FUN_0049e790(PTR_LAB_047cba48);
        }
      }
    }
    if (bVar9) {
      local_b0 = "JSON parse error at index ";
      local_a8 = 0x1a;
                    /* try { // try from 00363a68 to 00363a8b has its CatchHandler @ 00363eb8 */
      lStack_1f0 = FUN_00394c40(local_188 + ~(ulong)local_190,auStack_1e8);
      lStack_1f0 = lStack_1f0 - (long)auStack_1e8;
      local_1f8 = auStack_1e8;
      FUN_003959c0(local_1c8,&local_b0,&local_1f8);
      uVar28 = (ulong)local_1c8 | 1;
      if ((local_1c8[0] & 1) != 0) {
        uVar28 = local_1b8;
      }
                    /* try { // try from 00363aa0 to 00363ac3 has its CatchHandler @ 00363e6c */
      FUN_00367770(auStack_1b0,uVar28);
      uVar13 = FUN_00351340("external/com_google_grpc_base/src/core/lib/json/json_reader.cc",0x344,
                            auStack_1b0,0,0);
      if (local_160 < local_158) {
        *local_160 = uVar13;
        local_160 = local_160 + 1;
      }
      else {
        lVar27 = (long)local_160 - (long)local_168 >> 3;
        uVar28 = lVar27 + 1;
        if (uVar28 >> 0x3d != 0) {
                    /* try { // try from 00363e64 to 00363e6b has its CatchHandler @ 00363e6c */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar22 = (long)local_158 - (long)local_168 >> 2;
        if (uVar28 <= uVar22) {
          uVar28 = uVar22;
        }
        if (0xffffffffffffffe < (ulong)((long)local_158 - (long)local_168 >> 3)) {
          uVar28 = 0x1fffffffffffffff;
        }
        if (uVar28 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = FUN_0049e770(PTR_FUN_047cba38,uVar28 << 3);
        }
        puVar26 = (undefined8 *)(lVar14 + lVar27 * 8);
        puVar24 = (undefined8 *)(lVar14 + uVar28 * 8);
        *puVar26 = uVar13;
        sVar15 = (long)local_160 - (long)local_168;
        puVar29 = (undefined8 *)((long)puVar26 - sVar15);
        if (0 < (long)sVar15) {
          memcpy(puVar29,local_168,sVar15);
        }
        bVar9 = local_168 != (undefined8 *)0x0;
        local_168 = puVar29;
        local_160 = puVar26 + 1;
        local_158 = puVar24;
        if (bVar9) {
          FUN_0049e790(PTR_LAB_047cba48);
        }
      }
      if ((local_1c8[0] & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_1b8);
      }
    }
    iVar3 = local_148;
    if (local_168 == local_160) {
      local_148 = 0;
      *param_1 = iVar3;
      if (iVar3 - 3U < 2) {
        if ((*puVar20 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 6));
        }
        uVar13 = 0;
        *(undefined8 *)(param_1 + 4) = uStack_138;
        *puVar20 = local_140;
        *(undefined8 *)(param_1 + 6) = local_130;
        local_140 = local_140 & 0xffffffffffff0000;
        puVar26 = local_160;
      }
      else {
        if (iVar3 == 5) {
          FUN_0025cef0(param_1 + 8,*(undefined8 *)(param_1 + 10));
          uVar13 = 0;
          *(long **)(param_1 + 8) = local_128;
          *(long *)(param_1 + 10) = local_120;
          *(long *)(param_1 + 0xc) = local_118;
          if (local_118 == 0) {
            *(int **)(param_1 + 8) = piVar30;
            local_118 = 0;
            puVar26 = local_160;
            goto joined_r0x00363e04;
          }
          *(int **)(local_120 + 0x10) = piVar30;
          local_120 = 0;
          local_118 = 0;
          local_128 = &local_120;
        }
        else {
          if (iVar3 != 6) {
            uVar13 = 0;
            puVar26 = local_160;
            goto joined_r0x00363e04;
          }
          FUN_00364894(piVar21);
          *(long *)(param_1 + 0x10) = lStack_108;
          *(long *)(param_1 + 0xe) = local_110;
          *(undefined8 *)(param_1 + 0x12) = local_100;
          local_110 = 0;
          lStack_108 = 0;
          local_100 = 0;
        }
        uVar13 = 0;
        puVar26 = local_160;
      }
    }
    else {
                    /* try { // try from 00363ba0 to 00363bcf has its CatchHandler @ 00363ebc */
      FUN_003673f0(&local_b0,"JSON parsing failed");
      uVar13 = FUN_00351340("external/com_google_grpc_base/src/core/lib/json/json_reader.cc",0x348,
                            &local_b0,local_168,(long)local_160 - (long)local_168 >> 3);
      puVar26 = local_160;
      if (local_160 != local_168) {
        uVar28 = 0;
        puVar24 = local_160;
        puVar26 = local_168;
        do {
          if (4 < (ulong)puVar26[uVar28]) {
                    /* try { // try from 00363cec to 00363cef has its CatchHandler @ 00363ec8 */
            FUN_00350fd0();
            puVar24 = local_160;
            puVar26 = local_168;
          }
          uVar28 = uVar28 + 1;
        } while (uVar28 < (ulong)((long)puVar24 - (long)puVar26 >> 3));
      }
    }
joined_r0x00363e04:
    local_160 = puVar26;
    if ((uStack_c8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_b8);
    }
    if ((local_e0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_d0);
    }
    if (local_f8 != 0) {
      local_f0 = local_f8;
      FUN_0049e790(PTR_LAB_047cba48);
    }
    lVar14 = local_110;
    lVar27 = lStack_108;
    if (local_110 != 0) {
      while (lVar27 != lVar14) {
        FUN_00364974(lVar27 + -0x50);
        lVar27 = lVar27 + -0x50;
      }
      lStack_108 = lVar14;
      FUN_0049e790(PTR_LAB_047cba48,local_110);
    }
    FUN_0025cef0(&local_128,local_120);
    if ((local_140 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_130);
    }
    if (local_168 != (undefined8 *)0x0) {
      local_160 = local_168;
      FUN_0049e790(PTR_LAB_047cba48);
    }
    *param_4 = uVar13;
    return;
  }
  bVar4 = *param_2;
  local_188 = param_2 + 1;
  if (bVar4 == 0) {
LAB_0036391c:
    local_180 = 0;
    goto LAB_00363920;
  }
LAB_00362d34:
  uVar28 = local_178;
  local_180 = param_3 + -1;
  uVar22 = (ulong)bVar4;
  uVar16 = (uint)bVar4;
  uVar18 = (uint)local_178;
  if (0x5b < uVar16) {
    if (uVar16 != 0x5c) {
      if ((uVar16 != 0x5d) && (uVar16 != 0x7d)) goto LAB_00362dd8;
LAB_00362e2c:
      if (0x1a < (uint)local_178) goto switchD_00362e00_caseD_1b;
      uVar18 = 1 << (ulong)((uint)local_178 & 0x1f);
      if ((uVar18 & 0x9c00) == 0) {
        if ((uVar18 & 0x4000009) == 0) {
          if (((uVar18 & 0x12) != 0) && (local_170 == 0)) {
            FUN_002cdcec(&uStack_c8,uVar22);
            goto switchD_00362e00_default;
          }
          goto switchD_00362e00_caseD_1b;
        }
        uVar18 = (uint)local_178;
        if (uVar16 != 0x2c) goto LAB_0036332c;
        if ((uint)local_178 != 0x1a) goto switchD_00362e00_caseD_1b;
      }
      else {
        if (local_f8 == local_f0) goto switchD_00362e00_caseD_1b;
        if (uVar16 == 0x5d) {
          if (**(int **)(local_f0 + -8) != 6) goto switchD_00362e00_caseD_1b;
        }
        else if ((uVar16 == 0x7d) && (**(int **)(local_f0 + -8) != 5))
        goto switchD_00362e00_caseD_1b;
        piVar10 = (int *)FUN_0036444c(&local_190);
        puVar8 = local_b8;
        uVar28 = local_c0;
        local_b0._0_4_ = 3;
        if ((uStack_c8 & 1) == 0) {
          local_98 = local_b8;
          uStack_a0 = local_c0;
          local_a8 = uStack_c8;
        }
        else {
          if (local_c0 < 0x17) {
            local_a8 = CONCAT71(local_a8._1_7_,(char)((int)local_c0 << 1));
            puVar11 = (undefined1 *)((long)&local_a8 + 1);
          }
          else {
            if (0xffffffffffffffef < local_c0) {
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            uVar22 = local_c0 + 0x10 & 0xfffffffffffffff0;
            puVar11 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar22);
            local_a8 = uVar22 | 1;
            uStack_a0 = uVar28;
            local_98 = puVar11;
          }
          memcpy(puVar11,puVar8,uVar28 + 1);
        }
        local_88 = 0;
        local_80 = 0;
        local_68 = 0;
        local_78 = 0;
        lStack_70 = 0;
        *piVar10 = (int)local_b0;
        local_b0 = (char *)((ulong)local_b0._4_4_ << 0x20);
        iVar3 = *piVar10;
        if (iVar3 - 3U < 2) {
          local_90 = &local_88;
          if ((*(ulong *)(piVar10 + 2) & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(piVar10 + 6));
          }
          *(undefined1 **)(piVar10 + 6) = local_98;
          *(ulong *)(piVar10 + 4) = uStack_a0;
          *(ulong *)(piVar10 + 2) = local_a8;
          local_a8 = local_a8 & 0xffffffffffff0000;
          lVar27 = local_78;
joined_r0x00363198:
          local_78 = lVar27;
          if (lVar27 != 0) {
            lVar14 = lStack_70;
            while (lVar14 != lVar27) {
              lVar14 = lVar14 + -0x50;
              FUN_00364974(lVar14);
            }
            lStack_70 = lVar27;
            FUN_0049e790(PTR_LAB_047cba48,local_78);
          }
        }
        else {
          if (iVar3 == 5) {
            plVar31 = (long *)(piVar10 + 10);
            local_90 = &local_88;
            FUN_0025cef0(piVar10 + 8,*plVar31);
            *(long **)(piVar10 + 8) = local_90;
            *plVar31 = local_88;
            *(long *)(piVar10 + 0xc) = local_80;
            if (local_80 != 0) {
              *(long **)(local_88 + 0x10) = plVar31;
              goto LAB_003632a0;
            }
            *(long **)(piVar10 + 8) = plVar31;
joined_r0x00363400:
            local_80 = 0;
            lVar27 = local_78;
            goto joined_r0x00363198;
          }
          if (iVar3 != 6) {
LAB_003632a0:
            local_88 = 0;
            local_90 = &local_88;
            goto joined_r0x00363400;
          }
          local_90 = &local_88;
          FUN_00364894(piVar10 + 0xe);
          *(long *)(piVar10 + 0x10) = lStack_70;
          *(long *)(piVar10 + 0xe) = local_78;
          *(undefined8 *)(piVar10 + 0x12) = local_68;
          local_78 = 0;
          lStack_70 = 0;
          local_68 = 0;
        }
        FUN_0025cef0(&local_90,local_88);
        if ((local_a8 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_98);
        }
        if ((uStack_c8 & 1) == 0) {
          uStack_c8 = uStack_c8 & 0xffffffffffff0000;
        }
        else {
          *local_b8 = 0;
          local_c0 = 0;
        }
        local_178 = CONCAT44(local_178._4_4_,0x1a);
        uVar18 = 0x1a;
        if (uVar16 != 0x2c) {
LAB_0036332c:
          if (local_f8 != local_f0) {
            if (uVar16 == 0x5d) {
              if (**(int **)(local_f0 + -8) != 6) goto switchD_00362e00_caseD_1b;
              if (uVar18 == 3) {
LAB_003633c0:
                if (local_178._5_1_ == '\0') goto switchD_00362e00_caseD_1b;
              }
            }
            else if (uVar16 == 0x7d) {
              if (**(int **)(local_f0 + -8) != 5) goto switchD_00362e00_caseD_1b;
              if (uVar18 == 0) goto LAB_003633c0;
            }
            local_178 = CONCAT44(local_178._4_4_,0x1a);
            local_f0 = local_f0 + -8;
            if (local_f8 != local_f0) goto switchD_00362e00_default;
            uVar17 = 0x1b;
            goto LAB_00363690;
          }
          goto switchD_00362e00_caseD_1b;
        }
      }
      if (local_f8 != local_f0) {
        if (**(int **)(local_f0 + -8) == 6) goto LAB_0036368c;
        if (**(int **)(local_f0 + -8) == 5) {
LAB_003633a0:
          local_178 = local_178 & 0xffffffff00000000;
          goto switchD_00362e00_default;
        }
      }
      goto switchD_00362e00_caseD_1b;
    }
    if ((uint)local_178 == 5) {
      if (local_170 == 0) {
                    /* try { // try from 003630a0 to 003630ab has its CatchHandler @ 00363ec4 */
        FUN_002cdcec(&uStack_c8,0x5c);
        if (local_178._4_1_ != '\0') {
          local_178 = CONCAT44(local_178._4_4_,1);
          goto switchD_00362e00_default;
        }
        goto switchD_003635d4_caseD_22;
      }
      goto switchD_00362e00_caseD_1b;
    }
    if ((uint)local_178 == 4) {
      local_178 = CONCAT35(local_178._5_3_,4);
      uVar17 = 5;
      goto LAB_00363690;
    }
    if ((uint)local_178 != 1) goto switchD_00362e00_caseD_1b;
    local_178 = CONCAT35(local_178._5_3_,0x100000001);
    uVar17 = 5;
    goto LAB_00363690;
  }
  if (uVar16 < 0x2d) {
    if ((1L << (uVar22 & 0x3f) & 0x100002600U) == 0) {
      if (uVar22 == 0x2c) goto LAB_00362e2c;
      goto LAB_00362dd8;
    }
    if ((uint)local_178 < 0x1c) {
      uVar18 = 1 << (ulong)((uint)local_178 & 0x1f);
      if ((uVar18 & 0xc00000d) != 0) goto switchD_00362e00_default;
      if ((uVar18 & 0x9c00) != 0) {
                    /* try { // try from 00362d84 to 00362f4f has its CatchHandler @ 00363ec4 */
        piVar10 = (int *)FUN_0036444c(&local_190);
        puVar8 = local_b8;
        uVar28 = local_c0;
        local_b0._0_4_ = 3;
        if ((uStack_c8 & 1) == 0) {
          local_98 = local_b8;
          uStack_a0 = local_c0;
          local_a8 = uStack_c8;
        }
        else {
          if (local_c0 < 0x17) {
            local_a8 = CONCAT71(local_a8._1_7_,(char)((int)local_c0 << 1));
            puVar11 = (undefined1 *)((long)&local_a8 + 1);
          }
          else {
            if (0xffffffffffffffef < local_c0) {
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            uVar22 = local_c0 + 0x10 & 0xfffffffffffffff0;
            puVar11 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar22);
            local_a8 = uVar22 | 1;
            uStack_a0 = uVar28;
            local_98 = puVar11;
          }
          memcpy(puVar11,puVar8,uVar28 + 1);
        }
        local_88 = 0;
        local_80 = 0;
        local_68 = 0;
        local_78 = 0;
        lStack_70 = 0;
        *piVar10 = (int)local_b0;
        local_b0 = (char *)((ulong)local_b0._4_4_ << 0x20);
        iVar3 = *piVar10;
        if (iVar3 - 3U < 2) {
          local_90 = &local_88;
          if ((*(ulong *)(piVar10 + 2) & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(piVar10 + 6));
          }
          *(undefined1 **)(piVar10 + 6) = local_98;
          *(ulong *)(piVar10 + 4) = uStack_a0;
          *(ulong *)(piVar10 + 2) = local_a8;
          local_a8 = local_a8 & 0xffffffffffff0000;
          lVar27 = local_78;
joined_r0x00363084:
          local_78 = lVar27;
          if (lVar27 != 0) {
            lVar14 = lStack_70;
            while (lVar14 != lVar27) {
              lVar14 = lVar14 + -0x50;
              FUN_00364974(lVar14);
            }
            lStack_70 = lVar27;
            FUN_0049e790(PTR_LAB_047cba48,local_78);
          }
        }
        else {
          if (iVar3 == 5) {
            plVar31 = (long *)(piVar10 + 10);
            local_90 = &local_88;
            FUN_0025cef0(piVar10 + 8,*plVar31);
            *(long **)(piVar10 + 8) = local_90;
            *plVar31 = local_88;
            *(long *)(piVar10 + 0xc) = local_80;
            if (local_80 != 0) {
              *(long **)(local_88 + 0x10) = plVar31;
              goto LAB_003631d8;
            }
            *(long **)(piVar10 + 8) = plVar31;
joined_r0x003633f0:
            local_80 = 0;
            lVar27 = local_78;
            goto joined_r0x00363084;
          }
          if (iVar3 != 6) {
LAB_003631d8:
            local_88 = 0;
            local_90 = &local_88;
            goto joined_r0x003633f0;
          }
          local_90 = &local_88;
          FUN_00364894(piVar10 + 0xe);
          *(long *)(piVar10 + 0x10) = lStack_70;
          *(long *)(piVar10 + 0xe) = local_78;
          *(undefined8 *)(piVar10 + 0x12) = local_68;
          local_78 = 0;
          lStack_70 = 0;
          local_68 = 0;
        }
        FUN_0025cef0(&local_90,local_88);
        if ((local_a8 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_98);
        }
        goto LAB_00363240;
      }
      if ((((uVar18 & 0x12) != 0) && (uVar16 == 0x20)) && (local_170 == 0)) {
        FUN_002cdcec(&uStack_c8,0x20);
        goto switchD_00362e00_default;
      }
    }
    goto switchD_00362e00_caseD_1b;
  }
LAB_00362dd8:
  uVar23 = local_178 & 0xffffffff;
  uVar7 = local_178._6_2_;
  uVar5 = (uint5)local_178;
  local_178._0_6_ = (uint6)(uint5)local_178;
  uVar6 = (uint6)local_178;
  uVar17 = local_178._4_4_;
  switch(uVar23) {
  case 0:
    if (uVar16 == 0x22) {
      local_178 = CONCAT44(local_178._4_4_,1);
      goto switchD_00362e00_default;
    }
    goto switchD_00362e00_caseD_1b;
  case 1:
    if (local_170 != 0) goto switchD_00362e00_caseD_1b;
    if (uVar16 == 0x22) {
      local_178 = CONCAT44(local_178._4_4_,2);
      if ((local_e0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_d0);
      }
      local_d0 = local_b8;
      uStack_d8 = local_c0;
      local_e0 = uStack_c8;
      uStack_c8 = uStack_c8 & 0xffffffffffff0000;
      goto switchD_00362e00_default;
    }
    if (uVar16 < 0x20) goto switchD_00362e00_caseD_1b;
    FUN_002cdcec(&uStack_c8,uVar22);
    goto switchD_00362e00_default;
  case 2:
    if (uVar16 != 0x3a) goto switchD_00362e00_caseD_1b;
LAB_0036368c:
    uVar17 = 3;
    break;
  case 3:
    switch(uVar16) {
    case 0x22:
switchD_003635d4_caseD_22:
      uVar17 = 4;
      break;
    default:
      goto switchD_00362e00_caseD_1b;
    case 0x2d:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      FUN_002cdcec(&uStack_c8,uVar22);
      uVar17 = 10;
      break;
    case 0x30:
      FUN_002cdcec(&uStack_c8,0x30);
      uVar17 = 0xc;
      break;
    case 0x5b:
      local_178._0_6_ = CONCAT15(1,uVar5);
      local_178 = CONCAT26(uVar7,(uint6)local_178);
      uVar28 = FUN_00364014(&local_190,6);
      if ((uVar28 & 1) != 0) goto switchD_00362e00_default;
      goto switchD_00362e00_caseD_1b;
    case 0x66:
      uVar17 = 0x13;
      break;
    case 0x6e:
      uVar17 = 0x17;
      break;
    case 0x74:
      uVar17 = 0x10;
      break;
    case 0x7b:
      local_178._0_6_ = CONCAT15(1,uVar5);
      local_178 = CONCAT26(uVar7,(uint6)local_178);
      uVar28 = FUN_00364014(&local_190,5);
      if ((uVar28 & 1) != 0) goto LAB_003633a0;
      goto switchD_00362e00_caseD_1b;
    }
    break;
  case 4:
    if (local_170 != 0) goto switchD_00362e00_caseD_1b;
    if (uVar16 == 0x22) {
      local_178 = CONCAT44(local_178._4_4_,0x1a);
      puVar12 = (undefined4 *)FUN_0036444c(&local_190);
      *puVar12 = 4;
      if ((*(ulong *)(puVar12 + 2) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(puVar12 + 6));
      }
      *(undefined1 **)(puVar12 + 6) = local_b8;
      *(ulong *)(puVar12 + 4) = local_c0;
      *(ulong *)(puVar12 + 2) = uStack_c8;
      uStack_c8 = uStack_c8 & 0xffffffffffff0000;
      goto switchD_00362e00_default;
    }
    if (uVar16 < 0x20) goto switchD_00362e00_caseD_1b;
    FUN_002cdcec(&uStack_c8,uVar22);
    goto switchD_00362e00_default;
  case 5:
    local_178._4_1_ = SUB81(uVar28,4);
    uVar19 = 4;
    if (local_178._4_1_ != '\0') {
      uVar19 = 1;
    }
    local_178 = CONCAT44(uVar17,uVar19);
    if ((uVar16 != 0x75) && (local_170 != 0)) goto switchD_00362e00_caseD_1b;
    switch(uVar16) {
    case 0x62:
      FUN_002cdcec(&uStack_c8,8);
      break;
    case 99:
    case 100:
    case 0x65:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x73:
      goto switchD_00362e00_caseD_1b;
    case 0x66:
      FUN_002cdcec(&uStack_c8,0xc);
      break;
    case 0x6e:
      FUN_002cdcec(&uStack_c8,10);
      break;
    case 0x72:
      FUN_002cdcec(&uStack_c8,0xd);
      break;
    case 0x74:
      FUN_002cdcec(&uStack_c8,9);
      break;
    case 0x75:
      local_178 = CONCAT44(uVar17,6);
      local_178 = local_178 & 0xffffffffffff;
      break;
    default:
      if ((uVar16 != 0x2f) && (uVar16 != 0x22)) goto switchD_00362e00_caseD_1b;
      FUN_002cdcec(&uStack_c8,uVar22);
    }
    goto switchD_00362e00_default;
  case 6:
  case 7:
  case 8:
  case 9:
    uVar25 = uVar16 - 0x30;
    if (9 < uVar25) {
      if (uVar16 - 0x41 < 6) {
        uVar25 = uVar16 - 0x37;
      }
      else {
        if (5 < uVar16 - 0x61) goto switchD_00362e00_caseD_1b;
        uVar25 = uVar16 - 0x57;
      }
    }
    uVar25 = uVar25 | (uint)uVar7 << 4;
    local_178 = CONCAT26((ushort)uVar25,uVar6);
    switch(uVar18) {
    case 6:
      uVar17 = 7;
      break;
    case 7:
      uVar17 = 8;
      break;
    case 8:
      uVar17 = 9;
      break;
    case 9:
      if ((uVar25 & 0xfc00) == 0xdc00) {
        if (local_170 == 0) goto switchD_00362e00_caseD_1b;
        FUN_00364368(&local_190,(uVar25 & 0xffff) + (uint)local_170 * 0x400 + -0x35fdc00);
        local_170 = 0;
      }
      else if ((uVar25 & 0xfc00) == 0xd800) {
        if (local_170 != 0) goto switchD_00362e00_caseD_1b;
        local_170 = (ushort)uVar25;
      }
      else {
        if (local_170 != 0) goto switchD_00362e00_caseD_1b;
        FUN_00364368(&local_190,uVar25 & 0xffff);
      }
      if (local_178._4_1_ == '\0') goto switchD_003635d4_caseD_22;
      uVar17 = 1;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    break;
  case 10:
    FUN_002cdcec(&uStack_c8,uVar22);
    if (9 < uVar16 - 0x30) {
      if (uVar16 != 0x2e) goto LAB_003634e0;
      goto LAB_00363600;
    }
    goto switchD_00362e00_default;
  case 0xb:
    FUN_002cdcec(&uStack_c8,uVar22);
    if (uVar16 - 0x30 < 10) goto switchD_00362e00_default;
LAB_003634e0:
    if ((uVar16 == 0x65) || (uVar16 == 0x45)) {
      uVar17 = 0xe;
      break;
    }
    goto switchD_00362e00_caseD_1b;
  case 0xc:
    if (uVar16 != 0x2e) goto switchD_00362e00_caseD_1b;
    FUN_002cdcec(&uStack_c8,0x2e);
LAB_00363600:
    uVar17 = 0xd;
    break;
  case 0xd:
    FUN_002cdcec(&uStack_c8,uVar22);
    if (9 < uVar16 - 0x30) goto switchD_00362e00_caseD_1b;
    uVar17 = 0xb;
    break;
  case 0xe:
    FUN_002cdcec(&uStack_c8,uVar22);
    if (((9 < uVar16 - 0x30) && (uVar16 != 0x2d)) && (uVar16 != 0x2b))
    goto switchD_00362e00_caseD_1b;
    uVar17 = 0xf;
    break;
  case 0xf:
    FUN_002cdcec(&uStack_c8,uVar22);
    if (uVar16 - 0x30 < 10) goto switchD_00362e00_default;
    goto switchD_00362e00_caseD_1b;
  case 0x10:
    if (uVar16 != 0x72) goto switchD_00362e00_caseD_1b;
    uVar17 = 0x11;
    break;
  case 0x11:
    if (uVar16 != 0x75) goto switchD_00362e00_caseD_1b;
    uVar17 = 0x12;
    break;
  case 0x12:
    if (uVar16 == 0x65) {
                    /* try { // try from 00363410 to 0036390b has its CatchHandler @ 00363ec4 */
      puVar12 = (undefined4 *)FUN_0036444c(&local_190);
      *puVar12 = 1;
      goto LAB_00363240;
    }
    goto switchD_00362e00_caseD_1b;
  case 0x13:
    if (uVar16 != 0x61) goto switchD_00362e00_caseD_1b;
    uVar17 = 0x14;
    break;
  case 0x14:
    if (uVar16 != 0x6c) goto switchD_00362e00_caseD_1b;
    uVar17 = 0x15;
    break;
  case 0x15:
    if (uVar16 != 0x73) goto switchD_00362e00_caseD_1b;
    uVar17 = 0x16;
    break;
  case 0x16:
    if (uVar16 != 0x65) goto switchD_00362e00_caseD_1b;
    puVar12 = (undefined4 *)FUN_0036444c(&local_190);
    *puVar12 = 2;
LAB_00363240:
    if ((uStack_c8 & 1) == 0) {
      uStack_c8 = uStack_c8 & 0xffffffffffff0000;
LAB_0036324c:
      uVar17 = 0x1a;
    }
    else {
      *local_b8 = 0;
      local_c0 = 0;
      uVar17 = 0x1a;
    }
    break;
  case 0x17:
    if (uVar16 != 0x75) goto switchD_00362e00_caseD_1b;
    uVar17 = 0x18;
    break;
  case 0x18:
    if (uVar16 != 0x6c) goto switchD_00362e00_caseD_1b;
    uVar17 = 0x19;
    break;
  case 0x19:
    if (uVar16 == 0x6c) {
      FUN_0036444c(&local_190);
      goto LAB_0036324c;
    }
    goto switchD_00362e00_caseD_1b;
  case 0x1a:
    if (((uVar16 == 0x2c) || (uVar16 == 0x7d)) || (uVar16 == 0x5d)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00363e44 to 00363e5b has its CatchHandler @ 00363ebc */
      abort();
    }
  case 0x1b:
    goto switchD_00362e00_caseD_1b;
  default:
    goto switchD_00362e00_default;
  }
LAB_00363690:
  local_178 = CONCAT44(local_178._4_4_,uVar17);
switchD_00362e00_default:
  if (local_180 == 0) goto LAB_00363920;
  pbVar1 = local_188 + 1;
  bVar4 = *local_188;
  local_188 = pbVar1;
  param_3 = local_180;
  if (bVar4 == 0) goto LAB_0036391c;
  goto LAB_00362d34;
}


