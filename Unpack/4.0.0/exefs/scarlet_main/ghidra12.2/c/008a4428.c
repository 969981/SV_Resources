/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a4428; name: FUN_008a4428
 */


void FUN_008a4428(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  piVar3 = *(int **)(*(long *)(param_2 + 200) + 0x38);
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)((long)piVar3 + (ulong)*(uint *)(param_1 + 0x34));
  }
  uVar6 = (ulong)(*(uint *)(param_1 + 0x14) >> 6) & 7;
  iVar5 = (int)uVar6;
  *piVar3 = iVar5;
  if (iVar5 != 0) {
    lVar4 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x10);
      *(undefined4 *)((long)piVar3 + lVar4 + 0x80) =
           *(undefined4 *)
            (*(long *)(param_1 + 0x18) +
             (long)(int)((uVar2 >> 4 & 0x1c) + (uVar2 >> 8 & 0xc) + (uVar2 >> 0xc & 8) +
                         (uVar2 >> 0xc & 1) * 0xc + (uVar2 >> 0x10 & 1) * 0x1c +
                         ((uVar2 & 3) * 0x10 + (uVar2 & 0x30) | uVar2 >> 6 & 8) +
                        ((uVar2 >> 0xd & 3) + (uVar2 >> 2 & 3)) * 0x14) + lVar4);
      uVar2 = *(uint *)(param_1 + 0x10);
      *(undefined4 *)((long)piVar3 + lVar4 + 0x84) =
           *(undefined4 *)
            (*(long *)(param_1 + 0x18) +
             (long)(int)((uVar2 >> 4 & 0x1c) + (uVar2 >> 8 & 0xc) + (uVar2 >> 0xc & 8) +
                         (uVar2 >> 0xc & 1) * 0xc + (uVar2 >> 0x10 & 1) * 0x1c +
                         ((uVar2 & 3) * 0x10 + (uVar2 & 0x30) | uVar2 >> 6 & 8) +
                        ((uVar2 >> 0xd & 3) + (uVar2 >> 2 & 3)) * 0x14) + lVar4 + 4);
      uVar2 = *(uint *)(param_1 + 0x10);
      *(undefined4 *)((long)piVar3 + lVar4 + 0x88) =
           *(undefined4 *)
            (*(long *)(param_1 + 0x18) +
             (long)(int)((uVar2 >> 4 & 0x1c) + (uVar2 >> 8 & 0xc) + (uVar2 >> 0xc & 8) +
                         (uVar2 >> 0xc & 1) * 0xc + (uVar2 >> 0x10 & 1) * 0x1c +
                         ((uVar2 & 3) * 0x10 + (uVar2 & 0x30) | uVar2 >> 6 & 8) +
                        ((uVar2 >> 0xd & 3) + (uVar2 >> 2 & 3)) * 0x14) + lVar4 + 8);
      uVar2 = *(uint *)(param_1 + 0x10);
      lVar1 = lVar4 + 0x10;
      *(undefined4 *)((long)piVar3 + lVar4 + 0x8c) =
           *(undefined4 *)
            (*(long *)(param_1 + 0x18) +
             (long)(int)((uVar2 >> 4 & 0x1c) + (uVar2 >> 8 & 0xc) + (uVar2 >> 0xc & 8) +
                         (uVar2 >> 0xc & 1) * 0xc + (uVar2 >> 0x10 & 1) * 0x1c +
                         ((uVar2 & 3) * 0x10 + (uVar2 & 0x30) | uVar2 >> 6 & 8) +
                        ((uVar2 >> 0xd & 3) + (uVar2 >> 2 & 3)) * 0x14) + lVar4 + 0xc);
      lVar4 = lVar1;
    } while (uVar6 * 0x10 != lVar1);
  }
  piVar3[1] = 0;
  if ((*(byte *)(param_1 + 0x49) >> 3 & 1) == 0) {
    fVar8 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 8));
    fVar8 = fVar8 * 0.003921569;
    fVar9 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 9));
    fVar10 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 10));
    fVar9 = fVar9 * 0.003921569;
    fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xb));
    fVar10 = fVar10 * 0.003921569;
    fVar11 = fVar11 * 0.003921569;
  }
  else {
    pfVar7 = *(float **)(param_1 + 8);
    fVar8 = *pfVar7;
    fVar9 = pfVar7[1];
    fVar10 = pfVar7[2];
    fVar11 = pfVar7[3];
  }
  if ((*(byte *)(param_1 + 0x49) >> 4 & 1) == 0) {
    fVar12 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xc));
    fVar12 = fVar12 * 0.003921569;
    fVar13 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xd));
    fVar14 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xe));
    fVar13 = fVar13 * 0.003921569;
    fVar15 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xf));
    fVar14 = fVar14 * 0.003921569;
    fVar15 = fVar15 * 0.003921569;
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    fVar12 = *(float *)(lVar4 + 0x10);
    fVar13 = *(float *)(lVar4 + 0x14);
    fVar14 = *(float *)(lVar4 + 0x18);
    fVar15 = *(float *)(lVar4 + 0x1c);
  }
  piVar3[4] = (int)fVar8;
  piVar3[5] = (int)fVar9;
  piVar3[6] = (int)fVar10;
  piVar3[7] = (int)fVar11;
  piVar3[8] = (int)fVar12;
  piVar3[9] = (int)fVar13;
  piVar3[10] = (int)fVar14;
  piVar3[0xb] = (int)fVar15;
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x18) +
                    ((ulong)(uVar2 >> 4) & 0x1c) + ((ulong)(uVar2 >> 8) & 0xc) +
                    ((ulong)(uVar2 >> 0xc) & 8) + ((ulong)(uVar2 >> 0xc) & 1) * 0xc +
                    (((ulong)(uVar2 << 4) & 0x30) + ((ulong)uVar2 & 0x30) | (ulong)(uVar2 >> 6) & 8)
                    + (((ulong)(uVar2 >> 0xd) & 3) + ((ulong)(uVar2 >> 2) & 3)) * 0x14 + 4);
  piVar3[0xc] = (int)((float)(uVar2 & 0xff) / 255.0);
  piVar3[0xd] = (int)((float)(uVar2 >> 8 & 0xff) / 255.0);
  piVar3[0xe] = (int)((float)(uVar2 >> 0x10 & 0xff) / 255.0);
  piVar3[0xf] = (int)((float)(uVar2 >> 0x18) / 255.0);
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x18) +
                    ((ulong)(uVar2 >> 4) & 0x1c) + ((ulong)(uVar2 >> 8) & 0xc) +
                    ((ulong)(uVar2 >> 0xc) & 8) + ((ulong)(uVar2 >> 0xc) & 1) * 0xc +
                    (((ulong)(uVar2 << 4) & 0x30) + ((ulong)uVar2 & 0x30) | (ulong)(uVar2 >> 6) & 8)
                    + (((ulong)(uVar2 >> 0xd) & 3) + ((ulong)(uVar2 >> 2) & 3)) * 0x14 + 8);
  piVar3[0x10] = (int)((float)(uVar2 & 0xff) / 255.0);
  piVar3[0x11] = (int)((float)(uVar2 >> 8 & 0xff) / 255.0);
  piVar3[0x12] = (int)((float)(uVar2 >> 0x10 & 0xff) / 255.0);
  piVar3[0x13] = (int)((float)(uVar2 >> 0x18) / 255.0);
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x18) +
                    ((ulong)(uVar2 >> 4) & 0x1c) + ((ulong)(uVar2 >> 8) & 0xc) +
                    ((ulong)(uVar2 >> 0xc) & 8) + ((ulong)(uVar2 >> 0xc) & 1) * 0xc +
                    (((ulong)(uVar2 << 4) & 0x30) + ((ulong)uVar2 & 0x30) | (ulong)(uVar2 >> 6) & 8)
                    + (((ulong)(uVar2 >> 0xd) & 3) + ((ulong)(uVar2 >> 2) & 3)) * 0x14 + 0xc);
  piVar3[0x14] = (int)((float)(uVar2 & 0xff) / 255.0);
  piVar3[0x15] = (int)((float)(uVar2 >> 8 & 0xff) / 255.0);
  piVar3[0x16] = (int)((float)(uVar2 >> 0x10 & 0xff) / 255.0);
  piVar3[0x17] = (int)((float)(uVar2 >> 0x18) / 255.0);
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x18) +
                    ((ulong)(uVar2 >> 4) & 0x1c) + ((ulong)(uVar2 >> 8) & 0xc) +
                    ((ulong)(uVar2 >> 0xc) & 8) + ((ulong)(uVar2 >> 0xc) & 1) * 0xc +
                    (((ulong)(uVar2 << 4) & 0x30) + ((ulong)uVar2 & 0x30) | (ulong)(uVar2 >> 6) & 8)
                    + (((ulong)(uVar2 >> 0xd) & 3) + ((ulong)(uVar2 >> 2) & 3)) * 0x14 + 0x10);
  piVar3[0x18] = (int)((float)(uVar2 & 0xff) / 255.0);
  piVar3[0x19] = (int)((float)(uVar2 >> 8 & 0xff) / 255.0);
  piVar3[0x1a] = (int)((float)(uVar2 >> 0x10 & 0xff) / 255.0);
  piVar3[0x1b] = (int)((float)(uVar2 >> 0x18) / 255.0);
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x18) +
                    ((ulong)(uVar2 >> 4) & 0x1c) + ((ulong)(uVar2 >> 8) & 0xc) +
                    ((ulong)(uVar2 >> 0xc) & 8) + ((ulong)(uVar2 >> 0xc) & 1) * 0xc +
                    (((ulong)(uVar2 << 4) & 0x30) + ((ulong)uVar2 & 0x30) | (ulong)(uVar2 >> 6) & 8)
                    + (((ulong)(uVar2 >> 0xd) & 3) + ((ulong)(uVar2 >> 2) & 3)) * 0x14 + 0x14);
  piVar3[0x1c] = (int)((float)(uVar2 & 0xff) / 255.0);
  piVar3[0x1d] = (int)((float)(uVar2 >> 8 & 0xff) / 255.0);
  piVar3[0x1e] = (int)((float)(uVar2 >> 0x10 & 0xff) / 255.0);
  piVar3[0x1f] = (int)((float)(uVar2 >> 0x18) / 255.0);
  return;
}


