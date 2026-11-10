/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a30ac; name: FUN_008a30ac
 */


void FUN_008a30ac(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 & 0x30000) != 0) {
    if ((uVar1 >> 0x10 & 1) == 0) {
      FUN_008a4a28();
      return;
    }
    FUN_008a4428();
    return;
  }
  pfVar4 = *(float **)(*(long *)(param_2 + 200) + 0x38);
  if (pfVar4 != (float *)0x0) {
    pfVar4 = (float *)((long)pfVar4 + (ulong)*(uint *)(param_1 + 0x34));
  }
  bVar3 = *(byte *)(param_1 + 0x49);
  if ((uVar1 & 3) == 0) {
    if ((bVar3 >> 4 & 1) == 0) {
      fVar9 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xd));
      fVar8 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xc));
      fVar8 = fVar8 * 0.003921569;
      fVar9 = fVar9 * 0.003921569;
      fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xe));
      fVar11 = fVar11 * 0.003921569;
      fVar10 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xf));
      fVar10 = fVar10 * 0.003921569;
    }
    else {
      lVar6 = *(long *)(param_1 + 8);
      fVar8 = *(float *)(lVar6 + 0x10);
      fVar9 = *(float *)(lVar6 + 0x14);
      fVar11 = *(float *)(lVar6 + 0x18);
      fVar10 = *(float *)(lVar6 + 0x1c);
    }
    *pfVar4 = fVar8;
    pfVar4[1] = fVar9;
    pfVar4[2] = fVar11;
    pfVar4[3] = fVar10;
    pfVar4[4] = 0.0;
    pfVar4[5] = 0.0;
    pfVar4[6] = 0.0;
    pfVar4[7] = 0.0;
    uVar1 = *(uint *)(param_1 + 0x14);
    goto joined_r0x008a3270;
  }
  if ((bVar3 >> 4 & 1) == 0) {
    fVar10 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xe));
    fVar9 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xd));
    fVar9 = fVar9 * 0.003921569;
    fVar10 = fVar10 * 0.003921569;
    fVar8 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xc));
    fVar8 = fVar8 * 0.003921569;
    fVar11 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xf));
    fVar11 = fVar11 * 0.003921569;
    if ((bVar3 >> 3 & 1) != 0) goto LAB_008a3124;
LAB_008a319c:
    fVar13 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 8));
    fVar13 = fVar13 * 0.003921569;
    fVar14 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 9));
    fVar15 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 10));
    fVar14 = fVar14 * 0.003921569;
    fVar12 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xb));
    fVar15 = fVar15 * 0.003921569;
    fVar12 = fVar12 * 0.003921569;
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
    fVar8 = *(float *)(lVar6 + 0x10);
    fVar9 = *(float *)(lVar6 + 0x14);
    fVar10 = *(float *)(lVar6 + 0x18);
    fVar11 = *(float *)(lVar6 + 0x1c);
    if ((bVar3 >> 3 & 1) == 0) goto LAB_008a319c;
LAB_008a3124:
    pfVar5 = *(float **)(param_1 + 8);
    fVar13 = *pfVar5;
    fVar14 = pfVar5[1];
    fVar15 = pfVar5[2];
    fVar12 = pfVar5[3];
  }
  *pfVar4 = fVar8 - fVar13;
  pfVar4[1] = fVar9 - fVar14;
  pfVar4[2] = fVar10 - fVar15;
  pfVar4[4] = fVar13;
  pfVar4[5] = fVar14;
  pfVar4[6] = fVar15;
  if ((*(byte *)(param_1 + 0x49) >> 2 & 1) == 0) {
    pfVar4[3] = fVar11 - fVar12;
    pfVar4[7] = fVar12;
    uVar1 = *(uint *)(param_1 + 0x14);
  }
  else {
    fVar8 = 1.0 / ((fVar11 - fVar12) + 0.0001);
    pfVar4[3] = fVar8;
    pfVar4[7] = fVar8 * -fVar12;
    uVar1 = *(uint *)(param_1 + 0x14);
  }
joined_r0x008a3270:
  if ((uVar1 & 0x1c0) != 0) {
    if ((uVar1 & 3) < 2) {
      pfVar4[0x20] = (float)(uVar1 & 3);
      return;
    }
    uVar1 = uVar1 >> 6 & 7;
    if (uVar1 == 0) {
      fVar8 = 0.0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x10);
      lVar6 = *(long *)(param_1 + 0x18) +
              ((ulong)(uVar2 >> 8) & 0xc) + ((ulong)(uVar2 >> 2) & 3) * 0x14 +
              ((ulong)(uVar2 >> 0xc) & 1) * 0xc +
              (((ulong)(uVar2 << 4) & 0x30) + ((ulong)uVar2 & 0x30) | (ulong)(uVar2 >> 6) & 8);
      fVar8 = (float)((uint)(*(char *)(lVar6 + 1) == '\x01') << 7);
      if (((uVar1 != 1) &&
          (fVar8 = (float)((uint)fVar8 | (uint)(*(char *)(lVar6 + 5) == '\x01') << 0xf), uVar1 != 2)
          ) && (fVar8 = (float)((uint)fVar8 | (uint)(*(char *)(lVar6 + 9) == '\x01') << 0x17),
               uVar1 != 3)) {
        fVar8 = (float)((uint)fVar8 | (uint)(*(char *)(lVar6 + 0xd) == '\x01') << 0x1f);
      }
    }
    pfVar4[0x20] = fVar8;
    uVar1 = *(uint *)(param_1 + 0x10);
    if ((uVar1 >> 0xc & 1) != 0) {
      fVar8 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
      pfVar5 = (float *)(*(long *)(param_1 + 0x18) +
                        ((ulong)(uVar1 >> 8) & 0xc) + ((ulong)(uVar1 >> 2) & 3) * 0x14 +
                        (((ulong)(uVar1 << 4) & 0x30) + ((ulong)uVar1 & 0x30) |
                        (ulong)(uVar1 >> 6) & 8));
      fVar10 = pfVar5[1];
      uVar7 = (ulong)(*pfVar5 * (fVar8 / *(float *)PTR_FloatDegree180_047d2390));
      fVar13 = pfVar5[2];
      pfVar5 = (float *)(PTR_SinCosSampleTable_047d2398 + (uVar7 >> 0x18 & 0xff) * 0x10);
      fVar12 = pfVar5[2];
      fVar14 = pfVar5[3];
      fVar8 = (float)((uint)uVar7 & 0xffffff) * 5.9604645e-08;
      fVar11 = *pfVar5;
      fVar9 = pfVar5[1];
      pfVar4[10] = 0.0;
      pfVar4[0xe] = 0.0;
      fVar9 = fVar9 + fVar14 * fVar8;
      fVar11 = fVar11 + fVar12 * fVar8;
      fVar8 = fVar10 * fVar11;
      fVar10 = fVar10 * fVar9;
      fVar11 = fVar13 * fVar11;
      fVar13 = fVar13 * -fVar9;
      fVar8 = fVar8 + fVar8;
      fVar10 = fVar10 + fVar10;
      fVar11 = fVar11 + fVar11;
      fVar13 = fVar13 + fVar13;
      pfVar4[0xc] = fVar10;
      pfVar4[0xd] = fVar11;
      pfVar4[0xb] = fVar8 * -0.5 + fVar13 * -0.5;
      pfVar4[8] = fVar8;
      pfVar4[9] = fVar13;
      pfVar4[0xf] = fVar10 * -0.5 + fVar11 * -0.5;
      return;
    }
  }
  return;
}


