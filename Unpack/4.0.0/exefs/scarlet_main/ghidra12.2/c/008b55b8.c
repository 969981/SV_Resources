/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b55b8; name: FUN_008b55b8
 */


/* WARNING: Type propagation algorithm not settling */

float * FUN_008b55b8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  pfVar3 = (float *)FUN_008f0000();
  fVar9 = *(float *)(param_1 + 0x40);
  fVar13 = *(float *)(param_1 + 0x44);
  if (1.0 < fVar13) {
    fVar13 = 1.0;
  }
  if (1.0 < fVar9) {
    fVar9 = 1.0;
  }
  iVar7 = *(int *)(param_1 + 0x48);
  fVar14 = 1.0 - fVar13;
  fVar19 = 1.0 - fVar9;
  uVar4 = FUN_008f0044(param_1);
  puVar1 = PTR_FloatPi_047d2460;
  fVar10 = -fVar14;
  fVar17 = -fVar19;
  if (iVar7 == -1) {
    if ((uVar4 & 1) == 0) {
      uVar2 = FUN_008f0044(param_1);
      pfVar5 = pfVar3;
      if ((uVar2 >> 2 & 1) == 0) goto LAB_008b59f4;
LAB_008b5f3c:
      pfVar5 = pfVar3 + 2;
      *pfVar3 = fVar19 * 0.5 + 0.5;
      pfVar3[1] = 1.0 - (fVar14 * 0.5 + 0.5);
      uVar4 = FUN_008f0044(param_1);
      if ((uVar4 & 1) != 0) goto LAB_008b5f64;
LAB_008b5a00:
      uVar2 = FUN_008f0044(param_1);
      pfVar3 = pfVar5;
      if ((uVar2 >> 2 & 1) == 0) goto LAB_008b5a0c;
LAB_008b5f80:
      pfVar3 = pfVar5 + 2;
      *pfVar5 = fVar19 * -0.5 + 0.5;
      pfVar5[1] = 1.0 - (fVar14 * 0.5 + 0.5);
      uVar4 = FUN_008f0044(param_1);
      if ((uVar4 & 1) != 0) goto LAB_008b5fac;
LAB_008b5a18:
      uVar2 = FUN_008f0044(param_1);
      pfVar5 = pfVar3;
      if ((uVar2 >> 2 & 1) == 0) goto LAB_008b5a24;
LAB_008b5fc8:
      pfVar5 = pfVar3 + 2;
      *pfVar3 = fVar19 * -0.5 + 0.5;
      pfVar3[1] = 1.0 - (fVar14 * -0.5 + 0.5);
      uVar4 = FUN_008f0044(param_1);
      if ((uVar4 & 1) != 0) goto LAB_008b5ff4;
LAB_008b5a30:
      uVar2 = FUN_008f0044(param_1);
    }
    else {
      *pfVar3 = fVar19;
      pfVar3[1] = fVar14;
      pfVar3[2] = 0.0;
      pfVar3 = pfVar3 + 3;
      uVar2 = FUN_008f0044(param_1);
      pfVar5 = pfVar3;
      if ((uVar2 >> 2 & 1) != 0) goto LAB_008b5f3c;
LAB_008b59f4:
      uVar4 = FUN_008f0044(param_1);
      if ((uVar4 & 1) == 0) goto LAB_008b5a00;
LAB_008b5f64:
      *pfVar5 = fVar17;
      pfVar5[1] = fVar14;
      pfVar5[2] = 0.0;
      pfVar5 = pfVar5 + 3;
      uVar2 = FUN_008f0044(param_1);
      pfVar3 = pfVar5;
      if ((uVar2 >> 2 & 1) != 0) goto LAB_008b5f80;
LAB_008b5a0c:
      uVar4 = FUN_008f0044(param_1);
      if ((uVar4 & 1) == 0) goto LAB_008b5a18;
LAB_008b5fac:
      *pfVar3 = fVar17;
      pfVar3[1] = fVar10;
      pfVar3[2] = 0.0;
      pfVar3 = pfVar3 + 3;
      uVar2 = FUN_008f0044(param_1);
      pfVar5 = pfVar3;
      if ((uVar2 >> 2 & 1) != 0) goto LAB_008b5fc8;
LAB_008b5a24:
      uVar4 = FUN_008f0044(param_1);
      if ((uVar4 & 1) == 0) goto LAB_008b5a30;
LAB_008b5ff4:
      *pfVar5 = fVar19;
      pfVar5[1] = fVar10;
      pfVar5[2] = 0.0;
      pfVar5 = pfVar5 + 3;
      uVar2 = FUN_008f0044(param_1);
    }
    pfVar3 = pfVar5;
    if ((uVar2 >> 2 & 1) != 0) {
      pfVar3 = pfVar5 + 2;
      *pfVar5 = fVar19 * 0.5 + 0.5;
      pfVar5[1] = 1.0 - (fVar14 * -0.5 + 0.5);
    }
  }
  else {
    if ((uVar4 & 1) != 0) {
      *pfVar3 = fVar19;
      pfVar3[1] = fVar14;
      pfVar3[2] = 0.0;
      pfVar3 = pfVar3 + 3;
    }
    fVar15 = *(float *)puVar1;
    uVar2 = FUN_008f0044(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) != 0) {
      pfVar5 = pfVar3 + 2;
      *pfVar3 = fVar19 * 0.5 + 0.5;
      pfVar3[1] = 1.0 - (fVar14 * 0.5 + 0.5);
    }
    fVar15 = fVar15 * 0.5;
    fVar16 = 0.0;
    iVar8 = iVar7 + 1;
    do {
      fVar11 = cosf(fVar16);
      fVar12 = sinf(fVar16);
      fVar18 = fVar19 + fVar9 * fVar11;
      fVar11 = fVar14 + fVar13 * fVar12;
      uVar4 = FUN_008f0044(param_1);
      if ((uVar4 & 1) != 0) {
        *pfVar5 = fVar18;
        pfVar5[1] = fVar11;
        pfVar5[2] = 0.0;
        pfVar5 = pfVar5 + 3;
      }
      uVar2 = FUN_008f0044(param_1);
      if ((uVar2 >> 2 & 1) != 0) {
        *pfVar5 = fVar18 * 0.5 + 0.5;
        pfVar5[1] = 1.0 - (fVar11 * 0.5 + 0.5);
        pfVar5 = pfVar5 + 2;
      }
      iVar8 = iVar8 + -1;
      fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x48));
      fVar16 = fVar16 + fVar15 * (1.0 / fVar11);
    } while (iVar8 != 0);
    uVar4 = FUN_008f0044(param_1);
    pfVar3 = pfVar5;
    if ((uVar4 & 1) != 0) {
      pfVar5[2] = 0.0;
      pfVar3 = pfVar5 + 3;
      *pfVar5 = fVar17;
      pfVar5[1] = fVar14;
    }
    uVar2 = FUN_008f0044(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) != 0) {
      pfVar5 = pfVar3 + 2;
      *pfVar3 = fVar19 * -0.5 + 0.5;
      pfVar3[1] = 1.0 - (fVar14 * 0.5 + 0.5);
    }
    fVar16 = 0.0;
    iVar8 = iVar7 + 1;
    do {
      fVar11 = cosf(fVar16);
      fVar12 = sinf(fVar16);
      fVar18 = fVar19 + fVar9 * fVar11;
      fVar11 = fVar14 + fVar13 * fVar12;
      uVar4 = FUN_008f0044(param_1);
      if ((uVar4 & 1) != 0) {
        *pfVar5 = -fVar18;
        pfVar5[1] = fVar11;
        pfVar5[2] = 0.0;
        pfVar5 = pfVar5 + 3;
      }
      uVar2 = FUN_008f0044(param_1);
      if ((uVar2 >> 2 & 1) != 0) {
        *pfVar5 = fVar18 * -0.5 + 0.5;
        pfVar5[1] = 1.0 - (fVar11 * 0.5 + 0.5);
        pfVar5 = pfVar5 + 2;
      }
      iVar8 = iVar8 + -1;
      fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x48));
      fVar16 = fVar16 + fVar15 * (1.0 / fVar11);
    } while (iVar8 != 0);
    uVar4 = FUN_008f0044(param_1);
    pfVar3 = pfVar5;
    if ((uVar4 & 1) != 0) {
      pfVar5[2] = 0.0;
      pfVar3 = pfVar5 + 3;
      *pfVar5 = fVar17;
      pfVar5[1] = fVar10;
    }
    uVar2 = FUN_008f0044(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) != 0) {
      pfVar5 = pfVar3 + 2;
      *pfVar3 = fVar19 * -0.5 + 0.5;
      pfVar3[1] = 1.0 - (fVar14 * -0.5 + 0.5);
    }
    fVar16 = 0.0;
    iVar8 = iVar7 + 1;
    do {
      fVar11 = cosf(fVar16);
      fVar12 = sinf(fVar16);
      fVar18 = fVar19 + fVar9 * fVar11;
      fVar11 = fVar14 + fVar13 * fVar12;
      uVar4 = FUN_008f0044(param_1);
      if ((uVar4 & 1) != 0) {
        *pfVar5 = -fVar18;
        pfVar5[1] = -fVar11;
        pfVar5[2] = 0.0;
        pfVar5 = pfVar5 + 3;
      }
      uVar2 = FUN_008f0044(param_1);
      if ((uVar2 >> 2 & 1) != 0) {
        *pfVar5 = fVar18 * -0.5 + 0.5;
        pfVar5[1] = 1.0 - (fVar11 * -0.5 + 0.5);
        pfVar5 = pfVar5 + 2;
      }
      iVar8 = iVar8 + -1;
      fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x48));
      fVar16 = fVar16 + fVar15 * (1.0 / fVar11);
    } while (iVar8 != 0);
    uVar4 = FUN_008f0044(param_1);
    if ((uVar4 & 1) != 0) {
      *pfVar5 = fVar19;
      pfVar5[1] = fVar10;
      pfVar5[2] = 0.0;
      pfVar5 = pfVar5 + 3;
    }
    uVar2 = FUN_008f0044(param_1);
    pfVar3 = pfVar5;
    if ((uVar2 >> 2 & 1) != 0) {
      pfVar3 = pfVar5 + 2;
      *pfVar5 = fVar19 * 0.5 + 0.5;
      pfVar5[1] = 1.0 - (fVar14 * -0.5 + 0.5);
    }
    fVar16 = 0.0;
    iVar7 = iVar7 + 1;
    do {
      fVar11 = cosf(fVar16);
      fVar12 = sinf(fVar16);
      fVar18 = fVar19 + fVar9 * fVar11;
      fVar11 = fVar14 + fVar13 * fVar12;
      uVar4 = FUN_008f0044(param_1);
      if ((uVar4 & 1) != 0) {
        *pfVar3 = fVar18;
        pfVar3[1] = -fVar11;
        pfVar3[2] = 0.0;
        pfVar3 = pfVar3 + 3;
      }
      uVar2 = FUN_008f0044(param_1);
      if ((uVar2 >> 2 & 1) != 0) {
        *pfVar3 = fVar18 * 0.5 + 0.5;
        pfVar3[1] = 1.0 - (fVar11 * -0.5 + 0.5);
        pfVar3 = pfVar3 + 2;
      }
      iVar7 = iVar7 + -1;
      fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x48));
      fVar16 = fVar16 + fVar15 * (1.0 / fVar11);
    } while (iVar7 != 0);
  }
  if (2.0 <= fVar9 + fVar9) goto joined_r0x008b5d5c;
  uVar4 = FUN_008f0044(param_1);
  if ((uVar4 & 1) != 0) {
    *pfVar3 = fVar19;
    pfVar3[1] = 1.0;
    pfVar3[2] = 0.0;
    pfVar3 = pfVar3 + 3;
  }
  uVar2 = FUN_008f0044(param_1);
  if ((uVar2 >> 2 & 1) == 0) {
    uVar4 = FUN_008f0044(param_1);
    if ((uVar4 & 1) == 0) goto LAB_008b5aa8;
LAB_008b5b88:
    *pfVar3 = fVar19;
    pfVar3[1] = fVar14;
    pfVar3[2] = 0.0;
    pfVar3 = pfVar3 + 3;
    uVar2 = FUN_008f0044(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_008b5ba4;
LAB_008b5ab4:
    uVar4 = FUN_008f0044(param_1);
    if ((uVar4 & 1) == 0) goto LAB_008b5ac0;
LAB_008b5bcc:
    *pfVar5 = fVar17;
    pfVar5[1] = 1.0;
    pfVar5[2] = 0.0;
    pfVar5 = pfVar5 + 3;
    uVar2 = FUN_008f0044(param_1);
    if ((uVar2 >> 2 & 1) != 0) goto LAB_008b5be8;
LAB_008b5acc:
    uVar4 = FUN_008f0044(param_1);
    if ((uVar4 & 1) == 0) goto LAB_008b5ad8;
LAB_008b5c0c:
    *pfVar5 = fVar17;
    pfVar5[1] = fVar14;
    pfVar5[2] = 0.0;
    pfVar5 = pfVar5 + 3;
    uVar2 = FUN_008f0044(param_1);
    pfVar3 = pfVar5;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_008b5c28;
LAB_008b5ae4:
    uVar4 = FUN_008f0044(param_1);
    if ((uVar4 & 1) == 0) goto LAB_008b5af0;
LAB_008b5c54:
    *pfVar3 = fVar17;
    pfVar3[1] = -1.0;
    pfVar3[2] = 0.0;
    pfVar3 = pfVar3 + 3;
    uVar2 = FUN_008f0044(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_008b5c70;
LAB_008b5afc:
    uVar4 = FUN_008f0044(param_1);
    if ((uVar4 & 1) == 0) goto LAB_008b5b08;
LAB_008b5c94:
    *pfVar5 = fVar17;
    pfVar5[1] = fVar10;
    pfVar5[2] = 0.0;
    pfVar5 = pfVar5 + 3;
    uVar2 = FUN_008f0044(param_1);
    pfVar6 = pfVar5;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_008b5cb0;
LAB_008b5b14:
    uVar4 = FUN_008f0044(param_1);
    if ((uVar4 & 1) == 0) goto LAB_008b5b20;
LAB_008b5cdc:
    *pfVar6 = fVar19;
    pfVar6[1] = -1.0;
    pfVar6[2] = 0.0;
    pfVar6 = pfVar6 + 3;
    uVar2 = FUN_008f0044(param_1);
    pfVar3 = pfVar6;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_008b5cf8;
LAB_008b5b2c:
    uVar4 = FUN_008f0044(param_1);
    if ((uVar4 & 1) == 0) goto LAB_008b5b38;
LAB_008b5d18:
    *pfVar3 = fVar19;
    pfVar3[1] = fVar10;
    pfVar3[2] = 0.0;
    pfVar3 = pfVar3 + 3;
    uVar2 = FUN_008f0044(param_1);
  }
  else {
    *pfVar3 = fVar19 * 0.5 + 0.5;
    pfVar3[1] = 0.0;
    pfVar3 = pfVar3 + 2;
    uVar4 = FUN_008f0044(param_1);
    if ((uVar4 & 1) != 0) goto LAB_008b5b88;
LAB_008b5aa8:
    uVar2 = FUN_008f0044(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_008b5ab4;
LAB_008b5ba4:
    pfVar5 = pfVar3 + 2;
    *pfVar3 = fVar19 * 0.5 + 0.5;
    pfVar3[1] = 1.0 - (fVar14 * 0.5 + 0.5);
    uVar4 = FUN_008f0044(param_1);
    if ((uVar4 & 1) != 0) goto LAB_008b5bcc;
LAB_008b5ac0:
    uVar2 = FUN_008f0044(param_1);
    if ((uVar2 >> 2 & 1) == 0) goto LAB_008b5acc;
LAB_008b5be8:
    *pfVar5 = fVar19 * -0.5 + 0.5;
    pfVar5[1] = 0.0;
    pfVar5 = pfVar5 + 2;
    uVar4 = FUN_008f0044(param_1);
    if ((uVar4 & 1) != 0) goto LAB_008b5c0c;
LAB_008b5ad8:
    uVar2 = FUN_008f0044(param_1);
    pfVar3 = pfVar5;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_008b5ae4;
LAB_008b5c28:
    pfVar3 = pfVar5 + 2;
    *pfVar5 = fVar19 * -0.5 + 0.5;
    pfVar5[1] = 1.0 - (fVar14 * 0.5 + 0.5);
    uVar4 = FUN_008f0044(param_1);
    if ((uVar4 & 1) != 0) goto LAB_008b5c54;
LAB_008b5af0:
    uVar2 = FUN_008f0044(param_1);
    pfVar5 = pfVar3;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_008b5afc;
LAB_008b5c70:
    pfVar3[1] = 1.0;
    pfVar5 = pfVar3 + 2;
    *pfVar3 = fVar19 * -0.5 + 0.5;
    uVar4 = FUN_008f0044(param_1);
    if ((uVar4 & 1) != 0) goto LAB_008b5c94;
LAB_008b5b08:
    uVar2 = FUN_008f0044(param_1);
    pfVar6 = pfVar5;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_008b5b14;
LAB_008b5cb0:
    pfVar6 = pfVar5 + 2;
    *pfVar5 = fVar19 * -0.5 + 0.5;
    pfVar5[1] = 1.0 - (fVar14 * -0.5 + 0.5);
    uVar4 = FUN_008f0044(param_1);
    if ((uVar4 & 1) != 0) goto LAB_008b5cdc;
LAB_008b5b20:
    uVar2 = FUN_008f0044(param_1);
    pfVar3 = pfVar6;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_008b5b2c;
LAB_008b5cf8:
    pfVar6[1] = 1.0;
    pfVar3 = pfVar6 + 2;
    *pfVar6 = fVar19 * 0.5 + 0.5;
    uVar4 = FUN_008f0044(param_1);
    if ((uVar4 & 1) != 0) goto LAB_008b5d18;
LAB_008b5b38:
    uVar2 = FUN_008f0044(param_1);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    *pfVar3 = fVar19 * 0.5 + 0.5;
    pfVar3[1] = 1.0 - (fVar14 * -0.5 + 0.5);
    pfVar3 = pfVar3 + 2;
  }
joined_r0x008b5d5c:
  if (fVar13 + fVar13 < 2.0) {
    uVar4 = FUN_008f0044(param_1);
    if ((uVar4 & 1) == 0) {
      uVar2 = FUN_008f0044(param_1);
    }
    else {
      *pfVar3 = 1.0;
      pfVar3[2] = 0.0;
      pfVar3[1] = fVar14;
      pfVar3 = pfVar3 + 3;
      uVar2 = FUN_008f0044(param_1);
    }
    if ((uVar2 >> 2 & 1) == 0) {
      uVar4 = FUN_008f0044(param_1);
    }
    else {
      *pfVar3 = 1.0;
      *(float *)((long)pfVar3 + 4) = 1.0 - (fVar14 * 0.5 + 0.5);
      pfVar3 = (float *)((long)pfVar3 + 8);
      uVar4 = FUN_008f0044(param_1);
    }
    if ((uVar4 & 1) == 0) {
      uVar2 = FUN_008f0044(param_1);
    }
    else {
      *pfVar3 = -1.0;
      *(float *)((long)pfVar3 + 8) = 0.0;
      *(float *)((long)pfVar3 + 4) = fVar14;
      pfVar3 = (float *)((long)pfVar3 + 0xc);
      uVar2 = FUN_008f0044(param_1);
    }
    if ((uVar2 >> 2 & 1) == 0) {
      uVar4 = FUN_008f0044(param_1);
    }
    else {
      *pfVar3 = 0.0;
      *(float *)((long)pfVar3 + 4) = 1.0 - (fVar14 * 0.5 + 0.5);
      pfVar3 = (float *)((long)pfVar3 + 8);
      uVar4 = FUN_008f0044(param_1);
    }
    if ((uVar4 & 1) == 0) {
      uVar2 = FUN_008f0044(param_1);
    }
    else {
      *pfVar3 = -1.0;
      *(float *)((long)pfVar3 + 8) = 0.0;
      *(float *)((long)pfVar3 + 4) = fVar10;
      pfVar3 = (float *)((long)pfVar3 + 0xc);
      uVar2 = FUN_008f0044(param_1);
    }
    if ((uVar2 >> 2 & 1) == 0) {
      uVar4 = FUN_008f0044(param_1);
    }
    else {
      *pfVar3 = 0.0;
      *(float *)((long)pfVar3 + 4) = 1.0 - (fVar14 * -0.5 + 0.5);
      pfVar3 = (float *)((long)pfVar3 + 8);
      uVar4 = FUN_008f0044(param_1);
    }
    if ((uVar4 & 1) == 0) {
      uVar2 = FUN_008f0044(param_1);
    }
    else {
      *pfVar3 = 1.0;
      pfVar3[2] = 0.0;
      pfVar3[1] = fVar10;
      pfVar3 = pfVar3 + 3;
      uVar2 = FUN_008f0044(param_1);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      *pfVar3 = 1.0;
      pfVar3[1] = 1.0 - (fVar14 * -0.5 + 0.5);
      pfVar3 = pfVar3 + 2;
    }
    return pfVar3;
  }
  return pfVar3;
}


