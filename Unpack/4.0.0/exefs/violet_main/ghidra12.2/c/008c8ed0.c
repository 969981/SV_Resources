/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c8ed0; name: FUN_008c8ed0
 */


int FUN_008c8ed0(char *param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  float *pfVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar4 = *(long *)(param_1 + 0xa0);
  if (*(char *)(lVar4 + 0x7f2) != '\0') {
    iVar5 = *(int *)(lVar4 + 0x834);
    goto LAB_008c90d4;
  }
  fVar12 = *(float *)(lVar4 + 0x800);
  lVar6 = *(long *)(*(long *)(param_1 + 0x238) + 0x2b8);
  fVar13 = fVar12;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 4);
    if (0 < (int)uVar1) {
      if (uVar1 == 1) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        pfVar10 = (float *)(lVar6 + 0x1c);
        do {
          fVar13 = pfVar10[-4];
          if (pfVar10[-4] <= fVar12) {
            fVar13 = fVar12;
          }
          fVar12 = *pfVar10;
          if (*pfVar10 <= fVar13) {
            fVar12 = fVar13;
          }
          uVar9 = uVar9 + 2;
          pfVar10 = pfVar10 + 8;
        } while (((ulong)uVar1 & 0xfffffffe) != uVar9);
      }
      fVar13 = fVar12;
      if (((uVar1 & 1) != 0) && (fVar13 = *(float *)(lVar6 + uVar9 * 0x10 + 0xc), fVar13 <= fVar12))
      {
        fVar13 = fVar12;
      }
    }
    if (fVar13 < 1.0) {
      fVar13 = 1.0;
    }
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x238) + 0x2c0);
  iVar5 = *(int *)(lVar4 + 0x8b8);
  if (lVar6 != 0) {
    fVar12 = (float)iVar5;
    uVar1 = *(uint *)(lVar6 + 4);
    fVar14 = fVar12;
    if (0 < (int)uVar1) {
      if (uVar1 == 1) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        pfVar10 = (float *)(lVar6 + 0x1c);
        do {
          fVar14 = pfVar10[-4];
          if (pfVar10[-4] <= fVar12) {
            fVar14 = fVar12;
          }
          fVar12 = *pfVar10;
          if (*pfVar10 <= fVar14) {
            fVar12 = fVar14;
          }
          uVar9 = uVar9 + 2;
          pfVar10 = pfVar10 + 8;
        } while (((ulong)uVar1 & 0xfffffffe) != uVar9);
      }
      fVar14 = fVar12;
      if (((uVar1 & 1) != 0) && (fVar14 = *(float *)(lVar6 + uVar9 * 0x10 + 0xc), fVar14 <= fVar12))
      {
        fVar14 = fVar12;
      }
    }
    iVar5 = (int)fVar14;
  }
  bVar3 = *(char *)(lVar4 + 0x7f0) != '\0';
  fVar12 = 1.0;
  if (*(int *)(lVar4 + 0x7fc) != 0) {
    fVar12 = (float)*(int *)(lVar4 + 0x7fc);
  }
  fVar14 = (float)(*(int *)(lVar4 + 0x808) + 1);
  iVar8 = (int)(fVar12 / fVar14);
  iVar7 = (int)((float)iVar5 / fVar14);
  iVar5 = iVar8;
  if (iVar7 <= iVar8 || !bVar3) {
    iVar5 = iVar7;
  }
  if (*(char *)(lVar4 + 0x8a8) != '\0' && *(char *)(lVar4 + 0x7f0) != '\0') {
    iVar5 = iVar8;
  }
  fVar12 = (float)(int)fVar13;
  iVar5 = (int)(fVar12 + (float)(int)(fVar13 * (float)iVar5));
  if (*(int *)(lVar4 + 0x874) == 0) {
    cVar2 = *(char *)(lVar4 + 0x838);
    if (cVar2 == '\r') {
      piVar11 = (int *)(lVar4 + 0x888);
LAB_008c9094:
      iVar5 = *piVar11 * iVar5;
    }
    else if (cVar2 == '\x02') {
      piVar11 = (int *)(lVar4 + 0x880);
      goto LAB_008c9094;
    }
    if (bVar3 || *(char *)(lVar4 + 0x752) != '\x02') goto LAB_008c90d4;
    iVar7 = (int)fVar12;
    if (cVar2 == '\r') {
      iVar8 = *(int *)(lVar4 + 0x888);
    }
    else {
      if (cVar2 != '\x02') goto LAB_008c90d0;
      iVar8 = *(int *)(lVar4 + 0x880);
    }
    iVar7 = iVar8 * iVar7;
  }
  else {
    if (bVar3 || *(char *)(lVar4 + 0x752) != '\x02') goto LAB_008c90d4;
    iVar7 = (int)fVar12;
  }
LAB_008c90d0:
  iVar5 = iVar7 + iVar5;
LAB_008c90d4:
  if ((*param_1 == '\0') || (*(char *)(lVar4 + 0x7e4) != '\0')) {
    return iVar5;
  }
  return *(int *)(param_2 + 0x230) * iVar5;
}


