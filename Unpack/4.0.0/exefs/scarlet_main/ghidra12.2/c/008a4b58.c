/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a4b58; name: FUN_008a4b58
 */


void FUN_008a4b58(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((*(byte *)(param_1 + 0x49) >> 3 & 1) == 0) {
    fVar5 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 8));
    fVar5 = fVar5 * 0.003921569;
    fVar6 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 9));
    fVar7 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 10));
    fVar6 = fVar6 * 0.003921569;
    fVar8 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xb));
    fVar7 = fVar7 * 0.003921569;
    fVar8 = fVar8 * 0.003921569;
  }
  else {
    pfVar4 = *(float **)(param_1 + 8);
    fVar5 = *pfVar4;
    fVar6 = pfVar4[1];
    fVar7 = pfVar4[2];
    fVar8 = pfVar4[3];
  }
  if ((*(byte *)(param_1 + 0x49) >> 4 & 1) == 0) {
    fVar10 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xe));
    fVar12 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xd));
    fVar12 = fVar12 * 0.003921569;
    fVar10 = fVar10 * 0.003921569;
    fVar9 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xc));
    fVar9 = fVar9 * 0.003921569;
    fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xf));
    fVar11 = fVar11 * 0.003921569;
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    fVar9 = *(float *)(lVar3 + 0x10);
    fVar12 = *(float *)(lVar3 + 0x14);
    fVar10 = *(float *)(lVar3 + 0x18);
    fVar11 = *(float *)(lVar3 + 0x1c);
  }
  lVar3 = 0;
  pfVar4 = (float *)(param_2 + 0x3c);
  *(float *)(param_2 + 0x10) = fVar5;
  *(float *)(param_2 + 0x14) = fVar6;
  *(float *)(param_2 + 0x18) = fVar7;
  *(float *)(param_2 + 0x1c) = fVar8;
  *(float *)(param_2 + 0x20) = fVar9;
  *(float *)(param_2 + 0x24) = fVar12;
  *(float *)(param_2 + 0x28) = fVar10;
  *(float *)(param_2 + 0x2c) = fVar11;
  do {
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar2 = (uint)lVar3;
    lVar3 = lVar3 + 1;
    uVar1 = *(uint *)(*(long *)(param_1 + 0x18) +
                      (long)(int)((uVar1 >> 4 & 0x1c) + (uVar1 >> 8 & 0xc) + (uVar1 >> 0xc & 8) +
                                  (uVar1 >> 0xc & 1) * 0xc + (uVar1 >> 0x10 & 1) * 0x1c +
                                  (uVar1 >> 0xc & 0x10) * (uVar1 >> 6 & 7) +
                                  ((uVar1 & 3) * 0x10 + (uVar1 & 0x30) | uVar1 >> 6 & 8) +
                                 ((uVar1 >> 0xd & 3) + (uVar1 >> 2 & 3)) * 0x14) +
                      (ulong)((uVar2 & 0xff) % 5) * 4 + 0x60);
    pfVar4[-3] = (float)(uVar1 & 0xff) / 255.0;
    pfVar4[-2] = (float)(uVar1 >> 8 & 0xff) / 255.0;
    pfVar4[-1] = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
    *pfVar4 = (float)(uVar1 >> 0x18) / 255.0;
    pfVar4 = pfVar4 + 4;
  } while (lVar3 != 5);
  return;
}


