/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0326db74; name: FUN_0326db74
 */


void FUN_0326db74(long param_1,long param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  long *plVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  long local_1e0;
  long lStack_1d8;
  long lStack_1d0;
  ulong local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  long local_1a0;
  long lStack_198;
  long local_190;
  ulong local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  long local_160;
  long lStack_158;
  long lStack_150;
  ulong local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined4 *local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_110 = 0;
  local_108 = -0x8000000000000000;
  uVar19 = 0;
  local_100 = 0;
  local_f8 = 0xffffffff00000000;
  local_f0 = 0;
  local_e8 = -0x8000000000000000;
  local_120 = (undefined4 *)0x0;
  local_118 = -0x8000000000000000;
  puVar18 = *(uint **)(*(long *)(param_1 + 0x28) + 0x18);
  uVar13 = *puVar18;
  do {
    if ((int)uVar13 < 0) {
      uVar19 = puVar18[(long)(int)uVar19 + 2] + uVar19;
    }
    else {
      while (uVar19 = uVar19 + 1, (uVar13 >> 0x1e & 1) == 0) {
        uVar13 = puVar18[(int)uVar19];
      }
    }
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x20) - 4U <= uVar19) goto LAB_0326e0d8;
    uVar13 = puVar18[(int)uVar19];
  } while ((int)uVar13 < 0);
  if (uVar19 != 0) {
    do {
      lVar17 = -0x400000000;
      uVar13 = 0xfffffffe;
      lVar10 = (long)puVar18 + ((long)(((ulong)uVar19 << 0x20) + 0x200000000) >> 0x1e);
      uVar4 = 0;
      do {
        uVar9 = uVar4;
        pbVar1 = (byte *)(lVar10 + 3);
        lVar17 = lVar17 + 0x200000000;
        uVar13 = uVar13 + 2;
        lVar10 = lVar10 + 8;
        uVar4 = uVar9 + 2;
      } while ((*pbVar1 >> 5 & 1) == 0);
      uVar4 = uVar13 >> 1;
      if ((local_118._4_4_ & 0x7fffffff) < uVar13 >> 1) {
        FUN_02e9b320(&local_120,PTR_PTR_047d1a50,uVar4);
      }
      puVar18 = puVar18 + (int)uVar19;
      if ((uint)local_118 != uVar4) {
        local_118 = CONCAT44(local_118._4_4_,uVar4);
      }
      lVar10 = *(long *)(param_1 + 0x20);
      puVar12 = puVar18 + 2;
      plVar3 = (long *)(*(long *)(lVar10 + 0x30) + ((ulong)*puVar12 & 0xfffffff) * 0x40);
      if ((*puVar12 >> 0x1c & 1) == 0) {
        lStack_1d0 = plVar3[2];
        local_1c8 = plVar3[3];
        lStack_1d8 = plVar3[1];
        local_1e0 = *plVar3;
        local_1b0 = (double)plVar3[6];
        local_1a8 = (double)plVar3[7];
        local_1c0 = (double)plVar3[4];
        local_1b8 = (double)plVar3[5];
      }
      else {
        uVar15 = (uint)plVar3[2];
        uVar4 = -uVar15;
        local_1c8 = -plVar3[3];
        if ((ulong)~plVar3[3] <= local_1c8) {
          uVar4 = ~uVar15;
        }
        lStack_1d0 = ((ulong)uVar4 & 0x7ff) - (plVar3[2] & 0xffffffffffffc000U);
        uVar11 = (ulong)(*(uint7 *)((long)plVar3 + 1) & 0xffffffffffffc0);
        auVar23._0_8_ = uVar11 * 0x100;
        auVar23[8] = 0;
        auVar23[9] = *(byte *)((long)plVar3 + 9) & 0xc0;
        auVar23[10] = *(undefined1 *)((long)plVar3 + 10);
        auVar23[0xb] = *(undefined1 *)((long)plVar3 + 0xb);
        auVar23[0xc] = *(undefined1 *)((long)plVar3 + 0xc);
        auVar23[0xd] = *(undefined1 *)((long)plVar3 + 0xd);
        auVar23[0xe] = *(undefined1 *)((long)plVar3 + 0xe);
        auVar23[0xf] = *(undefined1 *)((long)plVar3 + 0xf);
        local_1e0 = uVar11 * -0x100;
        lStack_1d8 = -auVar23._8_8_;
        local_1c0 = -(double)plVar3[4];
        local_1b8 = -(double)plVar3[5];
        local_1b0 = -(double)plVar3[6];
        local_1a8 = -(double)plVar3[7];
      }
      uVar4 = *(uint *)((long)puVar12 + (lVar17 >> 0x1e | 4U));
      plVar3 = (long *)(*(long *)(lVar10 + 0x30) + ((ulong)uVar4 & 0xfffffff) * 0x40);
      if ((uVar4 >> 0x1c & 1) == 0) {
        local_190 = plVar3[2];
        local_188 = plVar3[3];
        lStack_198 = plVar3[1];
        local_1a0 = *plVar3;
        local_170 = (double)plVar3[6];
        local_168 = (double)plVar3[7];
        local_180 = (double)plVar3[4];
        local_178 = (double)plVar3[5];
      }
      else {
        uVar15 = (uint)plVar3[2];
        uVar4 = -uVar15;
        local_188 = -plVar3[3];
        if ((ulong)~plVar3[3] <= local_188) {
          uVar4 = ~uVar15;
        }
        local_190 = ((ulong)uVar4 & 0x7ff) - (plVar3[2] & 0xffffffffffffc000U);
        uVar11 = (ulong)(*(uint7 *)((long)plVar3 + 1) & 0xffffffffffffc0);
        auVar20._0_8_ = uVar11 * 0x100;
        auVar20[8] = 0;
        auVar20[9] = *(byte *)((long)plVar3 + 9) & 0xc0;
        auVar20[10] = *(undefined1 *)((long)plVar3 + 10);
        auVar20[0xb] = *(undefined1 *)((long)plVar3 + 0xb);
        auVar20[0xc] = *(undefined1 *)((long)plVar3 + 0xc);
        auVar20[0xd] = *(undefined1 *)((long)plVar3 + 0xd);
        auVar20[0xe] = *(undefined1 *)((long)plVar3 + 0xe);
        auVar20[0xf] = *(undefined1 *)((long)plVar3 + 0xf);
        local_1a0 = uVar11 * -0x100;
        lStack_198 = -auVar20._8_8_;
        local_180 = -(double)plVar3[4];
        local_178 = -(double)plVar3[5];
        local_170 = -(double)plVar3[6];
        local_168 = -(double)plVar3[7];
      }
      uVar9 = uVar9 >> 1;
      if (uVar13 != 0) {
        uVar4 = uVar9;
        if (uVar9 < 2) {
          uVar4 = 1;
        }
        lVar17 = 0;
        iVar16 = 1;
        while( true ) {
          plVar3 = (long *)(*(long *)(lVar10 + 0x30) + ((ulong)puVar12[iVar16] & 0xfffffff) * 0x40);
          if ((puVar12[iVar16] >> 0x1c & 1) == 0) {
            lStack_150 = plVar3[2];
            local_148 = plVar3[3];
            lStack_158 = plVar3[1];
            local_160 = *plVar3;
            local_130 = (double)plVar3[6];
            local_128 = (double)plVar3[7];
            local_140 = (double)plVar3[4];
            local_138 = (double)plVar3[5];
          }
          else {
            uVar14 = (uint)plVar3[2];
            uVar15 = -uVar14;
            local_148 = -plVar3[3];
            if ((ulong)~plVar3[3] <= local_148) {
              uVar15 = ~uVar14;
            }
            lStack_150 = ((ulong)uVar15 & 0x7ff) - (plVar3[2] & 0xffffffffffffc000U);
            uVar11 = (ulong)(*(uint7 *)((long)plVar3 + 1) & 0xffffffffffffc0);
            auVar21._0_8_ = uVar11 * 0x100;
            auVar21[8] = 0;
            auVar21[9] = *(byte *)((long)plVar3 + 9) & 0xc0;
            auVar21[10] = *(undefined1 *)((long)plVar3 + 10);
            auVar21[0xb] = *(undefined1 *)((long)plVar3 + 0xb);
            auVar21[0xc] = *(undefined1 *)((long)plVar3 + 0xc);
            auVar21[0xd] = *(undefined1 *)((long)plVar3 + 0xd);
            auVar21[0xe] = *(undefined1 *)((long)plVar3 + 0xe);
            auVar21[0xf] = *(undefined1 *)((long)plVar3 + 0xf);
            local_160 = uVar11 * -0x100;
            lStack_158 = -auVar21._8_8_;
            local_140 = -(double)plVar3[4];
            local_138 = -(double)plVar3[5];
            local_130 = -(double)plVar3[6];
            local_128 = -(double)plVar3[7];
          }
          FUN_032717a8(&local_1e0,&local_80,auStack_a0,auStack_c0,auStack_e0);
          uVar6 = FUN_03271010(&local_80,auStack_e0);
          uVar7 = FUN_03271010(auStack_a0,auStack_e0);
          uVar8 = FUN_03271010(auStack_c0,auStack_e0);
          auVar22._4_4_ = uVar7;
          auVar22._0_4_ = uVar6;
          uVar26 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
          uVar25 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
          auVar22._8_4_ = uVar8;
          auVar22._12_4_ = uVar8;
          fVar27 = (float)((ulong)uVar26 >> 0x20);
          auVar23 = NEON_scvtf(auVar22,4);
          auVar24._0_8_ =
               CONCAT44((float)((ulong)uVar25 >> 0x20) + auVar23._4_4_ / fVar27,
                        (float)uVar25 + auVar23._0_4_ / fVar27);
          auVar24._8_4_ = (float)uVar26 + auVar23._8_4_ / fVar27;
          auVar24._12_4_ = fVar27 + auVar23._12_4_ / fVar27;
          uStack_78 = auVar24._8_8_;
          local_80 = auVar24._0_8_;
          uVar6 = FUN_03192498(&local_110,&local_80);
          *(undefined4 *)((long)local_120 + lVar17) = uVar6;
          local_190 = lStack_150;
          local_188 = local_148;
          local_1a0 = local_160;
          lStack_198 = lStack_158;
          local_170 = local_130;
          local_168 = local_128;
          local_180 = local_140;
          local_178 = local_138;
          if ((ulong)uVar4 * 4 + -4 == lVar17) break;
          lVar10 = *(long *)(param_1 + 0x20);
          lVar17 = lVar17 + 4;
          iVar16 = iVar16 + 2;
        }
      }
      if (4 < uVar13) {
        lVar10 = 0;
        uVar13 = *puVar18;
        uVar4 = puVar18[1];
        if (uVar9 < 4) {
          uVar9 = 3;
        }
        do {
          iVar16 = *(int *)(param_2 + 0x30);
          lVar17 = (long)iVar16;
          if ((int)(*(uint *)(param_2 + 0x34) & 0x7fffffff) <= iVar16) {
            FUN_02ebb440(param_2 + 0x28,PTR_PTR_047d1a50,lVar17 + 1);
            iVar16 = *(int *)(param_2 + 0x30);
          }
          *(int *)(param_2 + 0x30) = (int)(lVar17 + 1);
          puVar2 = (undefined4 *)(*(long *)(param_2 + 0x28) + (long)iVar16 * 0x10);
          uVar6 = *(undefined4 *)((long)local_120 + lVar10 + 4);
          uVar7 = *(undefined4 *)((long)local_120 + lVar10 + 8);
          lVar10 = lVar10 + 4;
          *puVar2 = *local_120;
          puVar2[1] = uVar6;
          puVar2[2] = uVar7;
          puVar2[3] = (uVar13 & 0x800000) << 8 | uVar13 << 0x10 | (uint)(ushort)uVar4;
        } while ((ulong)uVar9 * 4 + -8 != lVar10);
      }
      puVar18 = *(uint **)(*(long *)(param_1 + 0x28) + 0x18);
      uVar13 = puVar18[(int)uVar19];
      do {
        if ((int)uVar13 < 0) {
          uVar19 = puVar18[(long)(int)uVar19 + 2] + uVar19;
        }
        else {
          while (uVar19 = uVar19 + 1, (uVar13 >> 0x1e & 1) == 0) {
            uVar13 = puVar18[(int)uVar19];
          }
        }
        if (*(int *)(*(long *)(param_1 + 0x28) + 0x20) - 4U <= uVar19) goto LAB_0326e0d8;
        uVar13 = puVar18[(int)uVar19];
      } while ((int)uVar13 < 0);
    } while (uVar19 != 0);
  }
LAB_0326e0d8:
  puVar5 = PTR_PTR_047d1a50;
  if (&local_110 != (long *)(param_2 + 0x18)) {
    FUN_02e9b22c((long *)(param_2 + 0x18),PTR_PTR_047d1a50);
    FUN_02e9b22c(&local_110,puVar5);
    lVar17 = *(long *)(param_2 + 0x18);
    *(long *)(param_2 + 0x18) = local_110;
    lVar10 = *(long *)(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x20) = (undefined4)local_108;
    *(uint *)(param_2 + 0x24) = local_108._4_4_;
    local_110 = lVar17;
    local_108 = lVar10;
  }
  lVar10 = local_118;
  puVar5 = PTR_PTR_047d1a50;
  uVar11 = (ulong)local_118._4_4_;
  local_118 = (ulong)local_118._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_120 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_120,uVar11 << 2);
  }
  lVar10 = local_e8;
  uVar11 = (ulong)local_e8._4_4_;
  local_e8 = (ulong)local_e8._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_f0 != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))(puVar5,local_f0,uVar11 << 3);
  }
  local_e8 = CONCAT44(0x80000000,(undefined4)local_e8);
  local_f0 = 0;
  if (0 < (int)local_f8._4_4_) {
    lVar17 = 0;
    lVar10 = (ulong)local_f8._4_4_ + 1;
    do {
      if (*(long *)(local_100 + lVar17) != -1) {
        *(undefined8 *)(local_100 + lVar17) = 0xffffffffffffffff;
      }
      lVar10 = lVar10 + -1;
      lVar17 = lVar17 + 0x10;
    } while (lVar10 != 0);
  }
  iVar16 = (int)local_f8;
  local_f8 = local_f8 & 0xffffffff80000000;
  if ((-1 < iVar16) && (local_100 != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))(puVar5,local_100,(long)(int)local_f8._4_4_ * 0x10 + 0x10);
  }
  lVar10 = local_108;
  local_100 = 0;
  local_f8 = 0xffffffff00000000;
  uVar11 = (ulong)local_108._4_4_;
  local_108 = (ulong)local_108._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_110 != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))(puVar5,local_110,uVar11 << 4);
  }
  return;
}


