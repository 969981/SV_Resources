/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0086d3b0; name: FUN_0086d3b0
 */


void FUN_0086d3b0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  
  uVar6 = (ulong)(long)(int)(param_2 << 2) >> 2;
  lVar1 = param_1 + 0xd60;
  lVar2 = param_1 + 0x8d0;
  puVar4 = (undefined8 *)
           (lVar2 + (ulong)*(byte *)(lVar1 + (-(ulong)((param_2 & 0x3fffffff) >> 0x1d) &
                                              0xfffffffc00000000 | (ulong)(param_2 << 2) << 2) + 2)
                    * 0x10);
  uVar7 = *puVar4;
  puVar5 = (undefined8 *)(lVar2 + (ulong)*(byte *)(lVar1 + (uVar6 << 4 | 4) + 2) * 0x10);
  uVar10 = *puVar5;
  fVar25 = (float)uVar7;
  fVar9 = (float)((ulong)uVar7 >> 0x20);
  fVar8 = (float)puVar4[1];
  puVar4 = (undefined8 *)(lVar2 + (ulong)*(byte *)(lVar1 + (uVar6 << 4 | 8) + 2) * 0x10);
  uVar7 = *puVar4;
  lVar2 = param_1 + (long)(int)param_2 * 0x20;
  dVar26 = (double)((float)uVar7 - fVar25);
  dVar13 = (double)((float)((ulong)uVar10 >> 0x20) - fVar9);
  dVar14 = (double)((float)puVar5[1] - fVar8);
  dVar17 = (double)((float)((ulong)uVar7 >> 0x20) - fVar9);
  dVar22 = (double)((float)puVar4[1] - fVar8);
  dVar11 = (double)((float)uVar10 - fVar25);
  dVar12 = dVar13 * dVar22 - dVar14 * dVar17;
  fVar23 = (float)dVar12;
  dVar14 = dVar14 * dVar26 - dVar11 * dVar22;
  fVar21 = (float)dVar14;
  dVar13 = dVar11 * dVar17 - dVar13 * dVar26;
  fVar15 = (float)dVar13;
  pfVar3 = (float *)(PTR_DAT_047d19b0 + 0x60);
  fVar16 = (float)*(undefined8 *)(param_1 + 0xa0);
  fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20);
  fVar19 = (float)*(undefined8 *)(param_1 + 0xa8);
  fVar20 = (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
  dVar22 = (double)((fVar18 + fVar21) - fVar18);
  dVar26 = (double)((fVar19 + fVar15) - fVar19);
  dVar17 = (double)((fVar16 + fVar23) - fVar16);
  dVar11 = (double)((fVar20 + 0.0) - fVar20);
  dVar12 = dVar12 - dVar17;
  *(double *)(lVar2 + 0x2be0) = dVar17;
  *(double *)(lVar2 + 0x3be0) = dVar12;
  *(double *)(lVar2 + 0x2bf8) = dVar11;
  dVar13 = dVar13 - dVar26;
  dVar14 = dVar14 - dVar22;
  *(double *)(lVar2 + 0x2be8) = dVar22;
  *(double *)(lVar2 + 0x2bf0) = dVar26;
  *(double *)(lVar2 + 0x3be8) = dVar14;
  *(double *)(lVar2 + 0x3bf0) = dVar13;
  *(double *)(lVar2 + 0x3bf8) = 0.0 - dVar11;
  lVar1 = param_1 + (long)(int)param_2 * 4;
  fVar15 = *pfVar3 / SQRT(fVar23 * fVar23 + fVar21 * fVar21 + fVar15 * fVar15);
  dVar27 = (double)((float)*(undefined8 *)(param_1 + 0x90) - fVar25);
  dVar24 = (double)((float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) - fVar9);
  dVar11 = (double)((float)*(undefined8 *)(param_1 + 0x98) - fVar8);
  *(float *)(lVar1 + 0x2560) = fVar15;
  fVar25 = *(float *)(param_1 + 0xb0);
  fVar9 = fVar25 * fVar25 * fVar25 * fVar15;
  if (fVar25 <= fVar9) {
    fVar25 = fVar9;
  }
  *(float *)(lVar1 + 0x2960) = fVar25;
  *(float *)(lVar1 + 0x2760) =
       fVar25 + (float)(dVar26 * dVar11 + dVar17 * dVar27 + dVar22 * dVar24 +
                       dVar13 * dVar11 + dVar12 * dVar27 + dVar14 * dVar24) * fVar15;
  dVar11 = *(double *)(lVar2 + 0x2be0);
  dVar12 = *(double *)(lVar2 + 0x3be0);
  dVar14 = *(double *)(lVar2 + 0x2be8);
  dVar13 = *(double *)(lVar2 + 0x3be8);
  lVar1 = param_1 + (long)(int)param_2 * 0x10;
  *(ulong *)(lVar1 + 0x1d68) =
       CONCAT44((float)(*(double *)(lVar2 + 0x2bf8) + *(double *)(lVar2 + 0x3bf8)),
                (float)(*(double *)(lVar2 + 0x2bf0) + *(double *)(lVar2 + 0x3bf0)));
  *(ulong *)(lVar1 + 0x1d60) = CONCAT44((float)(dVar14 + dVar13),(float)(dVar11 + dVar12));
  *(undefined1 *)(param_1 + (int)param_2 + 0x2b60) = 1;
  return;
}


