/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01208388; name: FUN_01208388
 */


void FUN_01208388(undefined1 param_1 [16],float param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar14 = param_1._8_4_;
  fVar11 = param_1._0_4_;
  fVar12 = (fVar11 - param_2) / 3.0;
  iVar2 = (int)fVar12;
  fVar13 = (fVar14 - param_2) / 3.0;
  iVar2 = iVar2 - (uint)(fVar12 < (float)iVar2);
  iVar3 = (int)fVar13;
  fVar12 = (fVar11 + param_2) / 3.0;
  iVar3 = iVar3 - (uint)(fVar13 < (float)iVar3);
  iVar4 = (int)fVar12;
  fVar13 = (fVar14 + param_2) / 3.0;
  iVar4 = iVar4 - (uint)(fVar12 < (float)iVar4);
  iVar6 = (int)fVar13;
  iVar6 = iVar6 - (uint)(fVar13 < (float)iVar6);
  if (iVar2 <= param_3[2]) {
    iVar2 = param_3[2];
  }
  if (iVar3 <= param_3[3]) {
    iVar3 = param_3[3];
  }
  if (param_3[4] <= iVar4) {
    iVar4 = param_3[4];
  }
  if (param_3[5] <= iVar6) {
    iVar6 = param_3[5];
  }
  if ((iVar2 <= iVar4) && (iVar3 <= iVar6)) {
    puVar5 = (ulong *)(param_3 + (long)(iVar3 - param_3[1]) * 2 + 6);
    do {
      fVar12 = ((float)iVar3 * 3.0 + 1.5) - fVar14;
      fVar12 = fVar12 * fVar12;
      if (param_2 * param_2 < fVar12) {
        uVar9 = 0;
      }
      else {
        fVar12 = param_2 * param_2 - fVar12;
        fVar13 = SQRT(fVar12);
        iVar2 = *param_3;
        if (NAN(fVar13)) {
          fVar13 = sqrtf(fVar12);
        }
        fVar15 = (fVar11 - fVar13) / 3.0;
        iVar4 = (int)fVar15;
        fVar12 = (fVar11 + fVar13) / 3.0;
        iVar10 = (int)fVar12;
        uVar7 = (iVar4 - iVar2) - (uint)(fVar15 < (float)iVar4);
        if (0x3e < (int)uVar7) {
          uVar7 = 0x3f;
        }
        uVar8 = (iVar2 - iVar10) + (uint)(fVar12 < (float)iVar10) + 0x3f;
        if (0x3e < (int)uVar8) {
          uVar8 = 0x3f;
        }
        uVar9 = -1L << ((ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) & 0x3f) &
                0xffffffffffffffffU >> ((ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) & 0x3f);
      }
      *puVar5 = *puVar5 & (uVar9 ^ 0xffffffffffffffff);
      bVar1 = iVar3 < iVar6;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + 1;
    } while (bVar1);
  }
  return;
}


