/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033bfb68; name: FUN_033bfb68
 */


void FUN_033bfb68(float *param_1,uint param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (*(long *)(param_1 + 4) == 0) {
    return;
  }
  pfVar2 = (float *)(*(long *)(param_1 + 4) + *(long *)(param_1 + 10));
  fVar9 = (float)((int)param_1[0x9c] + param_3);
  fVar6 = (float)(int)(param_3 + param_2) / (float)(int)param_2;
  param_1[0x9c] = fVar9;
  if ((int)fVar9 < 0) {
    fVar1 = fVar9;
    if ((int)fVar9 < -(int)param_1[0x9d]) {
      fVar1 = (float)-(int)param_1[0x9d];
    }
    param_1[0x9c] = (float)((int)fVar9 - (int)fVar1);
    if (0 < (int)param_2) {
      uVar4 = 0;
      do {
        fVar9 = pfVar2[(int)(fVar6 + (float)(int)uVar4)];
        (&DAT_0488e760)[uVar4] =
             fVar9 + (fVar6 - (float)(int)fVar6) *
                     ((pfVar2 + (int)(fVar6 + (float)(int)uVar4))[1] - fVar9);
        uVar4 = uVar4 + 1;
      } while (param_2 != uVar4);
    }
  }
  else {
    if (fVar9 == 0.0) {
      fVar1 = 0.0;
      goto joined_r0x033bfc64;
    }
    fVar1 = param_1[0x9d];
    if ((int)fVar9 <= (int)param_1[0x9d]) {
      fVar1 = fVar9;
    }
    param_1[0x9c] = (float)((int)fVar9 - (int)fVar1);
    if (0 < (int)param_2) {
      uVar4 = 0;
      do {
        fVar9 = pfVar2[(int)(fVar6 + (float)(int)uVar4)];
        (&DAT_0488e760)[uVar4] =
             fVar9 + (fVar6 - (float)(int)fVar6) *
                     ((pfVar2 + (int)(fVar6 + (float)(int)uVar4))[1] - fVar9);
        uVar4 = uVar4 + 1;
      } while (param_2 != uVar4);
    }
  }
  pfVar2 = (float *)&DAT_0488e760;
joined_r0x033bfc64:
  if (param_2 != 0) {
    lVar3 = (long)(int)param_2;
    puVar5 = *(undefined4 **)(param_1 + 0x9a);
    do {
      fVar9 = *pfVar2;
      fVar6 = **(float **)(param_1 + 0x4a);
      fVar11 = fVar6 + param_1[1] * (param_1[0x4c] - fVar6);
      param_1[0x4c] = fVar11;
      **(float **)(param_1 + 0x4a) = fVar9 + fVar11 * *param_1;
      uVar4 = *(long *)(param_1 + 0x4a) - 4;
      *(ulong *)(param_1 + 0x4a) = uVar4;
      if (uVar4 < *(ulong *)(param_1 + 0x48)) {
        *(ulong *)(param_1 + 0x4a) = uVar4 + *(long *)(param_1 + 0x46) * 4;
      }
      fVar11 = **(float **)(param_1 + 0x42);
      fVar12 = fVar11 + param_1[1] * (param_1[0x44] - fVar11);
      param_1[0x44] = fVar12;
      **(float **)(param_1 + 0x42) = fVar9 + fVar12 * *param_1;
      uVar4 = *(long *)(param_1 + 0x42) - 4;
      *(ulong *)(param_1 + 0x42) = uVar4;
      if (uVar4 < *(ulong *)(param_1 + 0x40)) {
        *(ulong *)(param_1 + 0x42) = uVar4 + *(long *)(param_1 + 0x3e) * 4;
      }
      fVar12 = **(float **)(param_1 + 0x3a);
      fVar13 = fVar12 + param_1[1] * (param_1[0x3c] - fVar12);
      param_1[0x3c] = fVar13;
      **(float **)(param_1 + 0x3a) = fVar9 + fVar13 * *param_1;
      uVar4 = *(long *)(param_1 + 0x3a) - 4;
      *(ulong *)(param_1 + 0x3a) = uVar4;
      if (uVar4 < *(ulong *)(param_1 + 0x38)) {
        *(ulong *)(param_1 + 0x3a) = uVar4 + *(long *)(param_1 + 0x36) * 4;
      }
      fVar13 = **(float **)(param_1 + 0x32);
      fVar14 = fVar13 + param_1[1] * (param_1[0x34] - fVar13);
      param_1[0x34] = fVar14;
      **(float **)(param_1 + 0x32) = fVar9 + fVar14 * *param_1;
      uVar4 = *(long *)(param_1 + 0x32) - 4;
      *(ulong *)(param_1 + 0x32) = uVar4;
      if (uVar4 < *(ulong *)(param_1 + 0x30)) {
        *(ulong *)(param_1 + 0x32) = uVar4 + *(long *)(param_1 + 0x2e) * 4;
      }
      fVar14 = **(float **)(param_1 + 0x2a);
      fVar15 = fVar14 + param_1[1] * (param_1[0x2c] - fVar14);
      param_1[0x2c] = fVar15;
      **(float **)(param_1 + 0x2a) = fVar9 + fVar15 * *param_1;
      uVar4 = *(long *)(param_1 + 0x2a) - 4;
      *(ulong *)(param_1 + 0x2a) = uVar4;
      if (uVar4 < *(ulong *)(param_1 + 0x28)) {
        *(ulong *)(param_1 + 0x2a) = uVar4 + *(long *)(param_1 + 0x26) * 4;
      }
      fVar15 = **(float **)(param_1 + 0x22);
      fVar16 = fVar15 + param_1[1] * (param_1[0x24] - fVar15);
      param_1[0x24] = fVar16;
      **(float **)(param_1 + 0x22) = fVar9 + fVar16 * *param_1;
      uVar4 = *(long *)(param_1 + 0x22) - 4;
      *(ulong *)(param_1 + 0x22) = uVar4;
      if (uVar4 < *(ulong *)(param_1 + 0x20)) {
        *(ulong *)(param_1 + 0x22) = uVar4 + *(long *)(param_1 + 0x1e) * 4;
      }
      fVar16 = **(float **)(param_1 + 0x1a);
      fVar17 = fVar16 + param_1[1] * (param_1[0x1c] - fVar16);
      param_1[0x1c] = fVar17;
      **(float **)(param_1 + 0x1a) = fVar9 + fVar17 * *param_1;
      uVar4 = *(long *)(param_1 + 0x1a) - 4;
      *(ulong *)(param_1 + 0x1a) = uVar4;
      if (uVar4 < *(ulong *)(param_1 + 0x18)) {
        *(ulong *)(param_1 + 0x1a) = uVar4 + *(long *)(param_1 + 0x16) * 4;
      }
      fVar17 = **(float **)(param_1 + 0x12);
      fVar18 = fVar17 + param_1[1] * (param_1[0x14] - fVar17);
      param_1[0x14] = fVar18;
      **(float **)(param_1 + 0x12) = fVar9 + fVar18 * *param_1;
      uVar4 = *(long *)(param_1 + 0x12) - 4;
      *(ulong *)(param_1 + 0x12) = uVar4;
      if (uVar4 < *(ulong *)(param_1 + 0x10)) {
        *(ulong *)(param_1 + 0x12) = uVar4 + *(long *)(param_1 + 0xe) * 4;
      }
      fVar17 = fVar11 + fVar6 + fVar12 + fVar13 + fVar14 + fVar15 + fVar16 + fVar17;
      fVar9 = **(float **)(param_1 + 0x6a);
      **(float **)(param_1 + 0x6a) = fVar17 + fVar9 * 0.5;
      uVar4 = *(long *)(param_1 + 0x6a) - 4;
      *(ulong *)(param_1 + 0x6a) = uVar4;
      if (uVar4 < *(ulong *)(param_1 + 0x68)) {
        *(ulong *)(param_1 + 0x6a) = uVar4 + *(long *)(param_1 + 0x66) * 4;
      }
      fVar9 = fVar9 - fVar17;
      fVar6 = **(float **)(param_1 + 0x62);
      **(float **)(param_1 + 0x62) = fVar9 + fVar6 * 0.5;
      uVar4 = *(long *)(param_1 + 0x62) - 4;
      *(ulong *)(param_1 + 0x62) = uVar4;
      if (uVar4 < *(ulong *)(param_1 + 0x60)) {
        *(ulong *)(param_1 + 0x62) = uVar4 + *(long *)(param_1 + 0x5e) * 4;
      }
      fVar6 = fVar6 - fVar9;
      fVar9 = **(float **)(param_1 + 0x5a);
      **(float **)(param_1 + 0x5a) = fVar6 + fVar9 * 0.5;
      uVar4 = *(long *)(param_1 + 0x5a) - 4;
      *(ulong *)(param_1 + 0x5a) = uVar4;
      if (uVar4 < *(ulong *)(param_1 + 0x58)) {
        *(ulong *)(param_1 + 0x5a) = uVar4 + *(long *)(param_1 + 0x56) * 4;
      }
      fVar9 = fVar9 - fVar6;
      lVar3 = lVar3 + -1;
      fVar6 = **(float **)(param_1 + 0x52);
      **(float **)(param_1 + 0x52) = fVar9 + fVar6 * 0.5;
      uVar4 = *(long *)(param_1 + 0x52) - 4;
      *(ulong *)(param_1 + 0x52) = uVar4;
      if (uVar4 < *(ulong *)(param_1 + 0x50)) {
        *(ulong *)(param_1 + 0x52) = uVar4 + *(long *)(param_1 + 0x4e) * 4;
      }
      dVar8 = (double)(fVar6 - fVar9);
      dVar10 = *(double *)(param_1 + 0x80) + dVar8 * *(double *)(param_1 + 0x70);
      *(double *)(param_1 + 0x80) =
           (*(double *)(param_1 + 0x82) + dVar8 * *(double *)(param_1 + 0x72)) -
           dVar10 * *(double *)(param_1 + 0x76);
      *(double *)(param_1 + 0x82) =
           *(double *)(param_1 + 0x74) * dVar8 - *(double *)(param_1 + 0x78) * dVar10;
      dVar10 = *(double *)(param_1 + 0x96) + dVar8 * *(double *)(param_1 + 0x86);
      *(double *)(param_1 + 0x96) =
           (*(double *)(param_1 + 0x98) + dVar8 * *(double *)(param_1 + 0x88)) -
           dVar10 * *(double *)(param_1 + 0x8c);
      *(double *)(param_1 + 0x98) =
           *(double *)(param_1 + 0x8a) * dVar8 - *(double *)(param_1 + 0x8e) * dVar10;
      uVar7 = NEON_fminnm(DAT_047b4b18,DAT_047b4b1c);
      *puVar5 = uVar7;
      pfVar2 = pfVar2 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
  if (*(long *)(param_1 + 4) != 0) {
    uVar4 = *(long *)(param_1 + 8) * (long)(int)(param_2 - (int)fVar1);
    if (uVar4 <= (ulong)(*(long *)(param_1 + 0xc) - *(long *)(param_1 + 10))) {
      *(ulong *)(param_1 + 10) = uVar4 + *(long *)(param_1 + 10);
    }
  }
  return;
}


