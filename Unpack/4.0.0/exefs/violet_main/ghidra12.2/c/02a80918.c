/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a80918; name: FUN_02a80918
 */


void FUN_02a80918(undefined1 param_1 [16],float param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar12 = param_1._8_4_;
  fVar10 = param_1._0_4_;
  fVar11 = (fVar10 - param_2) / 3.0;
  fVar13 = (fVar12 - param_2) / 3.0;
  iVar2 = (int)fVar11;
  fVar14 = (fVar10 + param_2) / 3.0;
  iVar5 = (int)fVar13;
  iVar3 = (int)fVar14;
  iVar2 = iVar2 - (uint)(fVar11 < (float)iVar2);
  fVar11 = (fVar12 + param_2) / 3.0;
  iVar5 = iVar5 - (uint)(fVar13 < (float)iVar5);
  iVar3 = iVar3 - (uint)(fVar14 < (float)iVar3);
  iVar6 = (int)fVar11;
  iVar6 = iVar6 - (uint)(fVar11 < (float)iVar6);
  if (iVar2 <= param_3[2]) {
    iVar2 = param_3[2];
  }
  if (iVar5 <= param_3[3]) {
    iVar5 = param_3[3];
  }
  if (param_3[4] <= iVar3) {
    iVar3 = param_3[4];
  }
  if (param_3[5] <= iVar6) {
    iVar6 = param_3[5];
  }
  *(ulong *)(param_3 + 2) = CONCAT44(iVar5,iVar2);
  *(ulong *)(param_3 + 4) = CONCAT44(iVar6,iVar3);
  if ((iVar2 <= iVar3) && (iVar5 <= iVar6)) {
    puVar4 = (ulong *)(param_3 + (long)(iVar5 - param_3[1]) * 2 + 6);
    do {
      fVar11 = ((float)iVar5 * 3.0 + 1.5) - fVar12;
      fVar11 = fVar11 * fVar11;
      if (param_2 * param_2 < fVar11) {
        uVar9 = 0;
      }
      else {
        fVar11 = param_2 * param_2 - fVar11;
        fVar13 = SQRT(fVar11);
        iVar2 = *param_3;
        if (NAN(fVar13)) {
          fVar13 = sqrtf(fVar11);
        }
        fVar14 = (fVar10 - fVar13) / 3.0;
        iVar3 = (int)fVar14;
        fVar11 = (fVar10 + fVar13) / 3.0;
        iVar6 = (int)fVar11;
        uVar7 = (iVar3 - iVar2) - (uint)(fVar14 < (float)iVar3);
        if (0x3e < (int)uVar7) {
          uVar7 = 0x3f;
        }
        uVar8 = (iVar2 - iVar6) + (uint)(fVar11 < (float)iVar6) + 0x3f;
        if (0x3e < (int)uVar8) {
          uVar8 = 0x3f;
        }
        uVar9 = -1L << ((ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) & 0x3f) &
                0xffffffffffffffffU >> ((ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) & 0x3f);
      }
      *puVar4 = *puVar4 & uVar9;
      bVar1 = iVar5 < param_3[5];
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + 1;
    } while (bVar1);
  }
  return;
}


