/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0087e570; name: FUN_0087e570
 */


undefined8 FUN_0087e570(undefined8 *param_1,int *param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined1 local_94;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x80260201;
  }
  if (param_2 == (int *)0x0) {
    return 0x80260201;
  }
  if (*param_2 == 0x1020001) {
    local_d0 = 0x1801011000;
    local_c4._4_4_ = 0x3f34fdf4;
    uVar3 = param_2[2];
    uVar9 = (ulong)uVar3;
    *(uint *)(param_1 + 9) = uVar3;
    *(int *)((long)param_1 + 0x4c) = param_2[3];
    *(float *)(param_1 + 10) = (float)param_2[4] * 0.01;
    *(int *)((long)param_1 + 0x54) = param_2[5];
    *(int *)(param_1 + 0xb) = param_2[6];
    if (uVar3 != 0) {
      uVar12 = 0;
      puVar11 = param_1;
      do {
        uVar3 = (int)uVar9 - 1;
        if (uVar3 != 0) {
          bVar5 = uVar12 == uVar3;
          local_c8 = 1;
          if (bVar5) {
            local_c8 = 2;
          }
          uVar10 = (ulong)((int)uVar12 - 1);
          uVar9 = uVar10;
          if (!bVar5) {
            uVar9 = uVar12;
          }
          local_c4._0_4_ = param_2[uVar9 + 9];
          iVar6 = FUN_008809a0(&local_d0,(long)param_1 + uVar12 * 0x360 + 100,*(undefined4 *)param_1
                               ,*(undefined4 *)(param_1 + 8),param_3,param_4);
          if (iVar6 != 0) {
            return 0x80800005;
          }
          bVar5 = uVar12 != *(int *)(param_1 + 9) - 1;
          piVar2 = param_2 + uVar10 + 9;
          if (bVar5) {
            piVar2 = param_2 + uVar12 + 9;
          }
          local_c4._0_4_ = *piVar2;
          local_c8 = 1;
          if (!bVar5) {
            local_c8 = 2;
          }
          iVar6 = FUN_008809a0(&local_d0,(long)param_1 + uVar12 * 0x360 + 0x13c,
                               *(undefined4 *)param_1,*(undefined4 *)(param_1 + 8),param_3,param_4);
          if (iVar6 != 0) {
            return 0x80800005;
          }
          if ((uVar12 == 0) || (uVar12 == *(int *)(param_1 + 9) - 1)) {
            *(undefined2 *)((long)param_1 + uVar12 * 2 + 0x5c) = 2;
          }
          else {
            *(undefined2 *)((long)param_1 + uVar12 * 2 + 0x5c) = 4;
            local_c4._0_4_ = param_2[uVar10 + 9];
            local_c8 = 2;
            iVar6 = FUN_008809a0(&local_d0,(long)param_1 + uVar12 * 0x360 + 0x214,
                                 *(undefined4 *)param_1,*(undefined4 *)(param_1 + 8),param_3,param_4
                                );
            if (iVar6 != 0) {
              return 0x80800005;
            }
            iVar6 = FUN_008809a0(&local_d0,(long)param_1 + uVar12 * 0x360 + 0x2ec,
                                 *(undefined4 *)param_1,*(undefined4 *)(param_1 + 8),param_3,param_4
                                );
            if (iVar6 != 0) {
              return 0x80800005;
            }
          }
        }
        pfVar13 = (float *)(param_2 + uVar12 * 6 + 0xc);
        fVar17 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 8));
        fVar14 = expf(-440.00003 / fVar17);
        lVar8 = 0;
        do {
          fVar4 = *pfVar13;
          *(float *)((long)puVar11 + lVar8 + 0xde8) = fVar4;
          *(float *)((long)puVar11 + lVar8 + 0xe18) = pfVar13[1];
          fVar15 = 1.0;
          if (pfVar13[2] != 0.0) {
            fVar15 = expf(-2.2 / (pfVar13[2] * fVar17));
            fVar15 = 1.0 - fVar15;
          }
          *(float *)((long)puVar11 + lVar8 + 0xe48) = fVar15;
          fVar15 = 1.0;
          if (pfVar13[3] != 0.0) {
            fVar15 = expf(-2.2 / (pfVar13[3] * fVar17));
            fVar15 = 1.0 - fVar15;
          }
          *(float *)((long)puVar11 + lVar8 + 0xe78) = fVar15;
          fVar15 = exp2f(pfVar13[4] * 0.1660964);
          *(float *)((long)puVar11 + lVar8 + 0xea8) = fVar15;
          fVar15 = pfVar13[5];
          *(float *)((long)puVar11 + lVar8 + 0xed8) = fVar15;
          fVar16 = pfVar13[1];
          *(float *)((long)puVar11 + lVar8 + 0xf38) = 1.0 - fVar14;
          *(float *)((long)puVar11 + lVar8 + 0xfc8) = fVar4 + fVar15 * -0.5;
          lVar1 = lVar8 + 4;
          *(float *)((long)puVar11 + lVar8 + 0xf08) = 1.0 - 1.0 / fVar16;
          lVar8 = lVar1;
        } while (lVar1 != 0x30);
        uVar12 = uVar12 + 1;
        uVar9 = (ulong)*(uint *)(param_1 + 9);
        puVar11 = puVar11 + 0x4e;
      } while (uVar12 < uVar9);
      if (3 < *(uint *)(param_1 + 9)) goto LAB_0087efe0;
    }
    fVar17 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 8));
    fVar14 = expf(-440.00003 / fVar17);
    fVar14 = 1.0 - fVar14;
    fVar17 = expf(-22.0 / fVar17);
    fVar17 = 1.0 - fVar17;
    lVar8 = uVar9 * 0x270;
    do {
      puVar11 = (undefined8 *)((long)param_1 + lVar8 + 0xde8);
      lVar8 = lVar8 + 0x270;
      puVar11[0x30] = 0;
      *(undefined4 *)(puVar11 + 0x36) = 0x3f800000;
      *(float *)(puVar11 + 0x2a) = fVar14;
      *puVar11 = 0xc1a00000c1a00000;
      puVar11[6] = 0x4000000040000000;
      *(float *)(puVar11 + 0xc) = fVar14;
      *(float *)(puVar11 + 0x12) = fVar17;
      puVar11[0x18] = 0x3f8000003f800000;
      puVar11[0x1e] = 0;
      puVar11[0x24] = 0x3f0000003f000000;
      puVar11[0x3c] = 0xc1a00000c1a00000;
      *(undefined8 *)((long)puVar11 + 0x1b4) = 0x3f8000003f800000;
      *(float *)((long)puVar11 + 0x154) = fVar14;
      *(float *)((long)puVar11 + 100) = fVar14;
      *(float *)((long)puVar11 + 0x94) = fVar17;
      *(undefined4 *)(puVar11 + 0x31) = 0;
      *(float *)(puVar11 + 0x2b) = fVar14;
      *(undefined4 *)(puVar11 + 1) = 0xc1a00000;
      *(undefined4 *)(puVar11 + 7) = 0x40000000;
      *(float *)(puVar11 + 0xd) = fVar14;
      *(float *)(puVar11 + 0x13) = fVar17;
      *(undefined4 *)(puVar11 + 0x19) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x1f) = 0;
      *(undefined4 *)(puVar11 + 0x25) = 0x3f000000;
      *(undefined4 *)(puVar11 + 0x3d) = 0xc1a00000;
      *(undefined8 *)((long)puVar11 + 0x18c) = 0;
      *(undefined8 *)((long)puVar11 + 0x1bc) = 0x3f8000003f800000;
      *(float *)((long)puVar11 + 0x15c) = fVar14;
      *(undefined8 *)((long)puVar11 + 0xc) = 0xc1a00000c1a00000;
      *(undefined8 *)((long)puVar11 + 0x3c) = 0x4000000040000000;
      *(float *)((long)puVar11 + 0x6c) = fVar14;
      *(float *)((long)puVar11 + 0x9c) = fVar17;
      *(undefined8 *)((long)puVar11 + 0xcc) = 0x3f8000003f800000;
      *(undefined8 *)((long)puVar11 + 0xfc) = 0;
      *(undefined8 *)((long)puVar11 + 300) = 0x3f0000003f000000;
      *(undefined8 *)((long)puVar11 + 0x1ec) = 0xc1a00000c1a00000;
      *(float *)(puVar11 + 0x2c) = fVar14;
      *(float *)(puVar11 + 0xe) = fVar14;
      *(float *)(puVar11 + 0x14) = fVar17;
      *(undefined4 *)((long)puVar11 + 0x194) = 0;
      *(undefined4 *)((long)puVar11 + 0x1c4) = 0x3f800000;
      *(float *)((long)puVar11 + 0x164) = fVar14;
      *(float *)((long)puVar11 + 0x74) = fVar14;
      *(float *)((long)puVar11 + 0xa4) = fVar17;
      *(undefined4 *)((long)puVar11 + 0x104) = 0;
      *(undefined4 *)((long)puVar11 + 0x134) = 0x3f000000;
      *(undefined4 *)((long)puVar11 + 500) = 0xc1a00000;
      *(undefined4 *)(puVar11 + 0x39) = 0x3f800000;
      *(float *)(puVar11 + 0x2d) = fVar14;
      *(undefined4 *)((long)puVar11 + 0x14) = 0xc1a00000;
      *(undefined4 *)(puVar11 + 3) = 0xc1a00000;
      *(undefined4 *)((long)puVar11 + 0x44) = 0x40000000;
      *(undefined4 *)(puVar11 + 9) = 0x40000000;
      *(float *)(puVar11 + 0xf) = fVar14;
      *(float *)(puVar11 + 0x15) = fVar17;
      *(undefined4 *)((long)puVar11 + 0xd4) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x1b) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x27) = 0x3f000000;
      *(undefined4 *)(puVar11 + 0x3f) = 0xc1a00000;
      *(undefined4 *)((long)puVar11 + 0x1cc) = 0x3f800000;
      *(float *)((long)puVar11 + 0x16c) = fVar14;
      *(float *)((long)puVar11 + 0x7c) = fVar14;
      *(float *)((long)puVar11 + 0xac) = fVar17;
      *(undefined4 *)((long)puVar11 + 0x13c) = 0x3f000000;
      *(undefined4 *)((long)puVar11 + 0x1fc) = 0xc1a00000;
      *(undefined4 *)(puVar11 + 0x3a) = 0x3f800000;
      *(float *)(puVar11 + 0x2e) = fVar14;
      *(undefined4 *)((long)puVar11 + 0x1c) = 0xc1a00000;
      *(undefined4 *)(puVar11 + 4) = 0xc1a00000;
      *(undefined4 *)((long)puVar11 + 0x4c) = 0x40000000;
      *(undefined4 *)(puVar11 + 10) = 0x40000000;
      *(float *)(puVar11 + 0x10) = fVar14;
      *(float *)(puVar11 + 0x16) = fVar17;
      *(undefined4 *)((long)puVar11 + 0xdc) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x1c) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x28) = 0x3f000000;
      *(undefined4 *)(puVar11 + 0x40) = 0xc1a00000;
      *(undefined4 *)((long)puVar11 + 0x1d4) = 0x3f800000;
      *(float *)((long)puVar11 + 0x174) = fVar14;
      *(float *)((long)puVar11 + 0x84) = fVar14;
      *(float *)((long)puVar11 + 0xb4) = fVar17;
      *(undefined4 *)((long)puVar11 + 0x144) = 0x3f000000;
      *(undefined4 *)((long)puVar11 + 0x204) = 0xc1a00000;
      puVar11[0x35] = 0;
      *(undefined4 *)(puVar11 + 0x3b) = 0x3f800000;
      *(float *)(puVar11 + 0x2f) = fVar14;
      *(undefined4 *)((long)puVar11 + 0x24) = 0xc1a00000;
      *(undefined4 *)(puVar11 + 5) = 0xc1a00000;
      *(undefined4 *)((long)puVar11 + 0x54) = 0x40000000;
      *(undefined4 *)(puVar11 + 0xb) = 0x40000000;
      *(float *)(puVar11 + 0x11) = fVar14;
      *(float *)(puVar11 + 0x17) = fVar17;
      *(undefined4 *)((long)puVar11 + 0xe4) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x1d) = 0x3f800000;
      puVar11[0x23] = 0;
      *(undefined4 *)(puVar11 + 0x29) = 0x3f000000;
      *(undefined4 *)(puVar11 + 0x41) = 0xc1a00000;
      *(undefined4 *)((long)puVar11 + 0x1dc) = 0x3f800000;
      *(float *)((long)puVar11 + 0x17c) = fVar14;
      *(undefined4 *)((long)puVar11 + 0x2c) = 0xc1a00000;
      *(undefined4 *)((long)puVar11 + 0x5c) = 0x40000000;
      *(float *)((long)puVar11 + 0x8c) = fVar14;
      *(float *)((long)puVar11 + 0xbc) = fVar17;
      *(undefined4 *)((long)puVar11 + 0xec) = 0x3f800000;
      *(undefined4 *)((long)puVar11 + 0x14c) = 0x3f000000;
      *(undefined4 *)((long)puVar11 + 0x20c) = 0xc1a00000;
      puVar11[0x33] = 0;
      puVar11[0x34] = 0;
      puVar11[0x21] = 0;
      puVar11[0x22] = 0;
    } while (lVar8 != 0x9c0);
  }
  else {
    if (*param_2 != 0x1010001) {
      return 0x80260202;
    }
    local_d0 = 0x1801011000;
    local_c4._4_4_ = 0x3f34fdf4;
    uVar3 = param_2[2];
    uVar9 = (ulong)uVar3;
    *(uint *)(param_1 + 9) = uVar3;
    *(int *)((long)param_1 + 0x4c) = param_2[3];
    *(float *)(param_1 + 10) = (float)param_2[4] * 0.01;
    *(int *)((long)param_1 + 0x54) = param_2[5];
    *(int *)(param_1 + 0xb) = param_2[6];
    if (uVar3 != 0) {
      uVar12 = 0;
      puVar11 = param_1;
      do {
        uVar3 = (int)uVar9 - 1;
        if (uVar3 != 0) {
          bVar5 = uVar12 == uVar3;
          local_c8 = 1;
          if (bVar5) {
            local_c8 = 2;
          }
          uVar10 = (ulong)((int)uVar12 - 1);
          uVar9 = uVar10;
          if (!bVar5) {
            uVar9 = uVar12;
          }
          local_c4._0_4_ = param_2[uVar9 + 9];
          iVar6 = FUN_008809a0(&local_d0,(long)param_1 + uVar12 * 0x360 + 100,*(undefined4 *)param_1
                               ,*(undefined4 *)(param_1 + 8),param_3,param_4);
          if (iVar6 != 0) {
            return 0x80800005;
          }
          bVar5 = uVar12 != *(int *)(param_1 + 9) - 1;
          piVar2 = param_2 + uVar10 + 9;
          if (bVar5) {
            piVar2 = param_2 + uVar12 + 9;
          }
          local_c4._0_4_ = *piVar2;
          local_c8 = 1;
          if (!bVar5) {
            local_c8 = 2;
          }
          iVar6 = FUN_008809a0(&local_d0,(long)param_1 + uVar12 * 0x360 + 0x13c,
                               *(undefined4 *)param_1,*(undefined4 *)(param_1 + 8),param_3,param_4);
          if (iVar6 != 0) {
            return 0x80800005;
          }
          if ((uVar12 == 0) || (uVar12 == *(int *)(param_1 + 9) - 1)) {
            *(undefined2 *)((long)param_1 + uVar12 * 2 + 0x5c) = 2;
          }
          else {
            *(undefined2 *)((long)param_1 + uVar12 * 2 + 0x5c) = 4;
            local_c4._0_4_ = param_2[uVar10 + 9];
            local_c8 = 2;
            iVar6 = FUN_008809a0(&local_d0,(long)param_1 + uVar12 * 0x360 + 0x214,
                                 *(undefined4 *)param_1,*(undefined4 *)(param_1 + 8),param_3,param_4
                                );
            if (iVar6 != 0) {
              return 0x80800005;
            }
            iVar6 = FUN_008809a0(&local_d0,(long)param_1 + uVar12 * 0x360 + 0x2ec,
                                 *(undefined4 *)param_1,*(undefined4 *)(param_1 + 8),param_3,param_4
                                );
            if (iVar6 != 0) {
              return 0x80800005;
            }
          }
        }
        pfVar13 = (float *)(param_2 + uVar12 * 6 + 0xb);
        fVar17 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 8));
        fVar14 = expf(-440.00003 / fVar17);
        lVar8 = 0;
        do {
          fVar4 = *pfVar13;
          *(float *)((long)puVar11 + lVar8 + 0xde8) = fVar4;
          *(float *)((long)puVar11 + lVar8 + 0xe18) = pfVar13[1];
          fVar15 = 1.0;
          if (pfVar13[2] != 0.0) {
            fVar15 = expf(-2.2 / (pfVar13[2] * fVar17));
            fVar15 = 1.0 - fVar15;
          }
          *(float *)((long)puVar11 + lVar8 + 0xe48) = fVar15;
          fVar15 = 1.0;
          if (pfVar13[3] != 0.0) {
            fVar15 = expf(-2.2 / (pfVar13[3] * fVar17));
            fVar15 = 1.0 - fVar15;
          }
          *(float *)((long)puVar11 + lVar8 + 0xe78) = fVar15;
          fVar15 = exp2f(pfVar13[4] * 0.1660964);
          *(float *)((long)puVar11 + lVar8 + 0xea8) = fVar15;
          fVar15 = pfVar13[5];
          *(float *)((long)puVar11 + lVar8 + 0xed8) = fVar15;
          fVar16 = pfVar13[1];
          *(float *)((long)puVar11 + lVar8 + 0xf38) = 1.0 - fVar14;
          *(float *)((long)puVar11 + lVar8 + 0xfc8) = fVar4 + fVar15 * -0.5;
          lVar1 = lVar8 + 4;
          *(float *)((long)puVar11 + lVar8 + 0xf08) = 1.0 - 1.0 / fVar16;
          lVar8 = lVar1;
        } while (lVar1 != 0x30);
        uVar12 = uVar12 + 1;
        uVar9 = (ulong)*(uint *)(param_1 + 9);
        puVar11 = puVar11 + 0x4e;
      } while (uVar12 < uVar9);
      if (3 < *(uint *)(param_1 + 9)) goto LAB_0087efe0;
    }
    fVar17 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 8));
    fVar14 = expf(-440.00003 / fVar17);
    fVar14 = 1.0 - fVar14;
    fVar17 = expf(-22.0 / fVar17);
    fVar17 = 1.0 - fVar17;
    lVar8 = uVar9 * 0x270;
    do {
      puVar11 = (undefined8 *)((long)param_1 + lVar8 + 0xde8);
      lVar8 = lVar8 + 0x270;
      puVar11[0x30] = 0;
      *(undefined4 *)(puVar11 + 0x36) = 0x3f800000;
      *(float *)(puVar11 + 0x2a) = fVar14;
      *puVar11 = 0xc1a00000c1a00000;
      puVar11[6] = 0x4000000040000000;
      *(float *)(puVar11 + 0xc) = fVar14;
      *(float *)(puVar11 + 0x12) = fVar17;
      puVar11[0x18] = 0x3f8000003f800000;
      puVar11[0x1e] = 0;
      puVar11[0x24] = 0x3f0000003f000000;
      puVar11[0x3c] = 0xc1a00000c1a00000;
      *(undefined8 *)((long)puVar11 + 0x1b4) = 0x3f8000003f800000;
      *(float *)((long)puVar11 + 0x154) = fVar14;
      *(float *)((long)puVar11 + 100) = fVar14;
      *(float *)((long)puVar11 + 0x94) = fVar17;
      *(undefined4 *)(puVar11 + 0x31) = 0;
      *(float *)(puVar11 + 0x2b) = fVar14;
      *(undefined4 *)(puVar11 + 1) = 0xc1a00000;
      *(undefined4 *)(puVar11 + 7) = 0x40000000;
      *(float *)(puVar11 + 0xd) = fVar14;
      *(float *)(puVar11 + 0x13) = fVar17;
      *(undefined4 *)(puVar11 + 0x19) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x1f) = 0;
      *(undefined4 *)(puVar11 + 0x25) = 0x3f000000;
      *(undefined4 *)(puVar11 + 0x3d) = 0xc1a00000;
      *(undefined8 *)((long)puVar11 + 0x18c) = 0;
      *(undefined8 *)((long)puVar11 + 0x1bc) = 0x3f8000003f800000;
      *(float *)((long)puVar11 + 0x15c) = fVar14;
      *(undefined8 *)((long)puVar11 + 0xc) = 0xc1a00000c1a00000;
      *(undefined8 *)((long)puVar11 + 0x3c) = 0x4000000040000000;
      *(float *)((long)puVar11 + 0x6c) = fVar14;
      *(float *)((long)puVar11 + 0x9c) = fVar17;
      *(undefined8 *)((long)puVar11 + 0xcc) = 0x3f8000003f800000;
      *(undefined8 *)((long)puVar11 + 0xfc) = 0;
      *(undefined8 *)((long)puVar11 + 300) = 0x3f0000003f000000;
      *(undefined8 *)((long)puVar11 + 0x1ec) = 0xc1a00000c1a00000;
      *(float *)(puVar11 + 0x2c) = fVar14;
      *(float *)(puVar11 + 0xe) = fVar14;
      *(float *)(puVar11 + 0x14) = fVar17;
      *(undefined4 *)((long)puVar11 + 0x194) = 0;
      *(undefined4 *)((long)puVar11 + 0x1c4) = 0x3f800000;
      *(float *)((long)puVar11 + 0x164) = fVar14;
      *(float *)((long)puVar11 + 0x74) = fVar14;
      *(float *)((long)puVar11 + 0xa4) = fVar17;
      *(undefined4 *)((long)puVar11 + 0x104) = 0;
      *(undefined4 *)((long)puVar11 + 0x134) = 0x3f000000;
      *(undefined4 *)((long)puVar11 + 500) = 0xc1a00000;
      *(undefined4 *)(puVar11 + 0x39) = 0x3f800000;
      *(float *)(puVar11 + 0x2d) = fVar14;
      *(undefined4 *)((long)puVar11 + 0x14) = 0xc1a00000;
      *(undefined4 *)(puVar11 + 3) = 0xc1a00000;
      *(undefined4 *)((long)puVar11 + 0x44) = 0x40000000;
      *(undefined4 *)(puVar11 + 9) = 0x40000000;
      *(float *)(puVar11 + 0xf) = fVar14;
      *(float *)(puVar11 + 0x15) = fVar17;
      *(undefined4 *)((long)puVar11 + 0xd4) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x1b) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x27) = 0x3f000000;
      *(undefined4 *)(puVar11 + 0x3f) = 0xc1a00000;
      *(undefined4 *)((long)puVar11 + 0x1cc) = 0x3f800000;
      *(float *)((long)puVar11 + 0x16c) = fVar14;
      *(float *)((long)puVar11 + 0x7c) = fVar14;
      *(float *)((long)puVar11 + 0xac) = fVar17;
      *(undefined4 *)((long)puVar11 + 0x13c) = 0x3f000000;
      *(undefined4 *)((long)puVar11 + 0x1fc) = 0xc1a00000;
      *(undefined4 *)(puVar11 + 0x3a) = 0x3f800000;
      *(float *)(puVar11 + 0x2e) = fVar14;
      *(undefined4 *)((long)puVar11 + 0x1c) = 0xc1a00000;
      *(undefined4 *)(puVar11 + 4) = 0xc1a00000;
      *(undefined4 *)((long)puVar11 + 0x4c) = 0x40000000;
      *(undefined4 *)(puVar11 + 10) = 0x40000000;
      *(float *)(puVar11 + 0x10) = fVar14;
      *(float *)(puVar11 + 0x16) = fVar17;
      *(undefined4 *)((long)puVar11 + 0xdc) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x1c) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x28) = 0x3f000000;
      *(undefined4 *)(puVar11 + 0x40) = 0xc1a00000;
      *(undefined4 *)((long)puVar11 + 0x1d4) = 0x3f800000;
      *(float *)((long)puVar11 + 0x174) = fVar14;
      *(float *)((long)puVar11 + 0x84) = fVar14;
      *(float *)((long)puVar11 + 0xb4) = fVar17;
      *(undefined4 *)((long)puVar11 + 0x144) = 0x3f000000;
      *(undefined4 *)((long)puVar11 + 0x204) = 0xc1a00000;
      puVar11[0x35] = 0;
      *(undefined4 *)(puVar11 + 0x3b) = 0x3f800000;
      *(float *)(puVar11 + 0x2f) = fVar14;
      *(undefined4 *)((long)puVar11 + 0x24) = 0xc1a00000;
      *(undefined4 *)(puVar11 + 5) = 0xc1a00000;
      *(undefined4 *)((long)puVar11 + 0x54) = 0x40000000;
      *(undefined4 *)(puVar11 + 0xb) = 0x40000000;
      *(float *)(puVar11 + 0x11) = fVar14;
      *(float *)(puVar11 + 0x17) = fVar17;
      *(undefined4 *)((long)puVar11 + 0xe4) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x1d) = 0x3f800000;
      puVar11[0x23] = 0;
      *(undefined4 *)(puVar11 + 0x29) = 0x3f000000;
      *(undefined4 *)(puVar11 + 0x41) = 0xc1a00000;
      *(undefined4 *)((long)puVar11 + 0x1dc) = 0x3f800000;
      *(float *)((long)puVar11 + 0x17c) = fVar14;
      *(undefined4 *)((long)puVar11 + 0x2c) = 0xc1a00000;
      *(undefined4 *)((long)puVar11 + 0x5c) = 0x40000000;
      *(float *)((long)puVar11 + 0x8c) = fVar14;
      *(float *)((long)puVar11 + 0xbc) = fVar17;
      *(undefined4 *)((long)puVar11 + 0xec) = 0x3f800000;
      *(undefined4 *)((long)puVar11 + 0x14c) = 0x3f000000;
      *(undefined4 *)((long)puVar11 + 0x20c) = 0xc1a00000;
      puVar11[0x33] = 0;
      puVar11[0x34] = 0;
      puVar11[0x21] = 0;
      puVar11[0x22] = 0;
    } while (lVar8 != 0x9c0);
  }
LAB_0087efe0:
  local_d0 = *param_1;
  local_c8 = *(undefined4 *)(param_1 + 1);
  local_94 = *(undefined1 *)((long)param_1 + 0xc);
  local_c4 = param_1[2];
  local_bc = param_1[3];
  local_b4 = param_1[4];
  local_ac = param_1[5];
  local_a4 = param_1[6];
  local_9c = param_1[7];
  uVar7 = FUN_0087cb30(param_1,param_4,&local_d0);
  return uVar7;
}


