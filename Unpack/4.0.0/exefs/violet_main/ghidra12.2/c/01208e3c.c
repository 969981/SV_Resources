/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01208e3c; name: FUN_01208e3c
 */


void FUN_01208e3c(undefined1 param_1 [16],float param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar13 = param_1._8_4_;
  fVar10 = param_1._0_4_;
  fVar11 = (fVar10 - param_2) / 3.0;
  iVar2 = (int)fVar11;
  fVar12 = (fVar13 - param_2) / 3.0;
  iVar2 = iVar2 - (uint)(fVar11 < (float)iVar2);
  iVar4 = (int)fVar12;
  fVar11 = (fVar10 + param_2) / 3.0;
  iVar4 = iVar4 - (uint)(fVar12 < (float)iVar4);
  iVar5 = (int)fVar11;
  fVar12 = (fVar13 + param_2) / 3.0;
  iVar5 = iVar5 - (uint)(fVar11 < (float)iVar5);
  iVar7 = (int)fVar12;
  iVar7 = iVar7 - (uint)(fVar12 < (float)iVar7);
  iVar1 = iVar5 - iVar2;
  if (0x3f < iVar1) {
    iVar5 = iVar1 + -0x3e;
    if (-1 < iVar1 + -0x3f) {
      iVar5 = iVar1 + -0x3f;
    }
    iVar2 = iVar2 + (iVar5 >> 1);
    iVar5 = iVar2 + 0x3f;
  }
  iVar1 = iVar7 - iVar4;
  if (0x3f < iVar1) {
    iVar7 = iVar1 + -0x3e;
    if (-1 < iVar1 + -0x3f) {
      iVar7 = iVar1 + -0x3f;
    }
    iVar4 = iVar4 + (iVar7 >> 1);
    iVar7 = iVar4 + 0x3f;
  }
  *(ulong *)(param_3 + 4) = CONCAT44(iVar7,iVar5);
  *(ulong *)param_3 = CONCAT44(iVar4,iVar2);
  *(ulong *)(param_3 + 2) = CONCAT44(iVar4,iVar2);
  if (iVar4 <= iVar7) {
    puVar6 = (ulong *)(param_3 + 6);
    while( true ) {
      fVar11 = ((float)iVar4 * 3.0 + 1.5) - fVar13;
      fVar11 = fVar11 * fVar11;
      if (param_2 * param_2 < fVar11) {
        uVar3 = 0;
      }
      else {
        fVar11 = param_2 * param_2 - fVar11;
        fVar12 = SQRT(fVar11);
        if (NAN(fVar12)) {
          fVar12 = sqrtf(fVar11);
        }
        fVar14 = (fVar10 - fVar12) / 3.0;
        iVar5 = (int)fVar14;
        fVar11 = (fVar10 + fVar12) / 3.0;
        iVar7 = (int)fVar11;
        uVar8 = (iVar5 - iVar2) - (uint)(fVar14 < (float)iVar5);
        uVar9 = (iVar2 - iVar7) + (uint)(fVar11 < (float)iVar7) + 0x3f;
        if (0x3e < (int)uVar8) {
          uVar8 = 0x3f;
        }
        if (0x3e < (int)uVar9) {
          uVar9 = 0x3f;
        }
        uVar3 = -1L << ((ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) & 0x3f) &
                0xffffffffffffffffU >> ((ulong)(uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)) & 0x3f);
        iVar7 = param_3[5];
      }
      *puVar6 = uVar3;
      if (iVar7 <= iVar4) break;
      iVar2 = *param_3;
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  return;
}


