/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b1a2c; name: FUN_008b1a2c
 */


void FUN_008b1a2c(long param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((*(byte *)(param_1 + 0x114) >> 4 & 1) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) | 1;
  }
  lVar5 = *(long *)(param_1 + 0x140);
  if ((*(byte *)(lVar5 + 0x49) >> 4 & 1) == 0) {
    fVar8 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0xc));
    fVar8 = fVar8 * 0.003921569;
    fVar9 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0xd));
    fVar10 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0xe));
    fVar9 = fVar9 * 0.003921569;
    fVar12 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0xf));
    fVar10 = fVar10 * 0.003921569;
    fVar12 = fVar12 * 0.003921569;
  }
  else {
    lVar7 = *(long *)(lVar5 + 8);
    fVar8 = *(float *)(lVar7 + 0x10);
    fVar9 = *(float *)(lVar7 + 0x14);
    fVar10 = *(float *)(lVar7 + 0x18);
    fVar12 = *(float *)(lVar7 + 0x1c);
  }
  if ((*(byte *)(lVar5 + 0x49) >> 3 & 1) == 0) {
    fVar13 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 8));
    fVar13 = fVar13 * 0.003921569;
    fVar14 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 9));
    fVar14 = fVar14 * 0.003921569;
    fVar15 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 10));
    fVar15 = fVar15 * 0.003921569;
  }
  else {
    pfVar6 = *(float **)(lVar5 + 8);
    fVar13 = *pfVar6;
    fVar14 = pfVar6[1];
    fVar15 = pfVar6[2];
  }
  *(float *)(param_2 + 0x28) = fVar13;
  *(float *)(param_2 + 0x2c) = fVar14;
  *(float *)(param_2 + 0x30) = fVar15;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(float *)(param_2 + 0x38) = fVar8;
  *(float *)(param_2 + 0x3c) = fVar9;
  *(float *)(param_2 + 0x40) = fVar10;
  *(float *)(param_2 + 0x44) = fVar12;
  *(undefined1 *)(param_2 + 0x48) = *(undefined1 *)(param_1 + 0x5a);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x140) + 0x10);
  if ((uVar2 >> 0xf & 1) == 0) {
    uVar3 = *(undefined1 *)(param_1 + 0x5a);
    *(undefined8 *)(param_2 + 0x54) = 0;
    *(undefined8 *)(param_2 + 0x4c) = 0;
    *(undefined8 *)(param_2 + 0x5c) = 0x3f8000003f800000;
    *(undefined8 *)(param_2 + 100) = 0x3f8000003f800000;
    *(undefined1 *)(param_2 + 0x6c) = uVar3;
    cVar4 = *(char *)(param_1 + 0x114);
  }
  else {
    pbVar1 = (byte *)(*(long *)(*(long *)(param_1 + 0x140) + 0x18) +
                     ((ulong)(uVar2 >> 4) & 0x1c) + ((ulong)(uVar2 >> 8) & 0xc) +
                     ((ulong)(uVar2 >> 0xc) & 1) * 0xc +
                     (((ulong)(uVar2 << 4) & 0x30) + ((ulong)uVar2 & 0x30) | (ulong)(uVar2 >> 6) & 8
                     ) + (((ulong)(uVar2 >> 0xd) & 3) + ((ulong)(uVar2 >> 2) & 3)) * 0x14);
    fVar8 = (float)NEON_ucvtf((uint)*pbVar1);
    fVar9 = (float)NEON_ucvtf((uint)pbVar1[1]);
    bVar11 = pbVar1[2];
    *(float *)(param_2 + 0x4c) = fVar8 * 0.003921569;
    *(float *)(param_2 + 0x50) = fVar9 * 0.003921569;
    fVar8 = (float)NEON_ucvtf((uint)bVar11);
    *(float *)(param_2 + 0x54) = fVar8 * 0.003921569;
    *(undefined4 *)(param_2 + 0x58) = 0;
    fVar8 = (float)NEON_ucvtf((uint)pbVar1[3]);
    fVar10 = (float)NEON_ucvtf((uint)pbVar1[4]);
    bVar11 = pbVar1[6];
    fVar9 = (float)NEON_ucvtf((uint)pbVar1[5]);
    *(float *)(param_2 + 0x5c) = fVar8 * 0.003921569;
    *(float *)(param_2 + 0x60) = fVar10 * 0.003921569;
    fVar8 = (float)NEON_ucvtf((uint)bVar11);
    *(float *)(param_2 + 100) = fVar9 * 0.003921569;
    *(float *)(param_2 + 0x68) = fVar8 * 0.003921569;
    *(undefined1 *)(param_2 + 0x6c) = *(undefined1 *)(param_1 + 0x5a);
    cVar4 = *(char *)(param_1 + 0x114);
  }
  if (cVar4 < '\0') {
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*(long *)(param_1 + 0x150) + 8);
    *(uint *)(param_2 + 0x10) = (uint)*(byte *)(*(long *)(param_1 + 0x150) + 0x11);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(*(long *)(param_1 + 0x150) + 0x14);
  }
  return;
}


