/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008dfcd4; name: FUN_008dfcd4
 */


int FUN_008dfcd4(char *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar4 = *(long *)(param_1 + 0xa0);
  fVar9 = *(float *)(lVar4 + 0x800);
  lVar3 = *(long *)(*(long *)(param_1 + 0x238) + 0x2b8);
  fVar10 = fVar9;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 4);
    if (0 < (int)uVar1) {
      if (uVar1 == 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        pfVar8 = (float *)(lVar3 + 0x1c);
        do {
          fVar10 = pfVar8[-4];
          if (pfVar8[-4] <= fVar9) {
            fVar10 = fVar9;
          }
          fVar9 = *pfVar8;
          if (*pfVar8 <= fVar10) {
            fVar9 = fVar10;
          }
          uVar7 = uVar7 + 2;
          pfVar8 = pfVar8 + 8;
        } while (((ulong)uVar1 & 0xfffffffe) != uVar7);
      }
      fVar10 = fVar9;
      if (((uVar1 & 1) != 0) && (fVar10 = *(float *)(lVar3 + uVar7 * 0x10 + 0xc), fVar10 <= fVar9))
      {
        fVar10 = fVar9;
      }
    }
    if (fVar10 < 1.0) {
      fVar10 = 1.0;
    }
  }
  fVar9 = 1.0;
  if (*(int *)(lVar4 + 0x7fc) != 0) {
    fVar9 = (float)*(int *)(lVar4 + 0x7fc);
  }
  fVar11 = (float)(*(int *)(lVar4 + 0x808) + 1);
  iVar5 = (int)(fVar9 / fVar11);
  iVar6 = (int)((float)param_2 / fVar11);
  iVar2 = iVar5;
  if (*(char *)(lVar4 + 0x7f0) == '\0' || iVar6 <= iVar5) {
    iVar2 = iVar6;
  }
  if (*(char *)(lVar4 + 0x8a8) != '\0' && *(char *)(lVar4 + 0x7f0) != '\0') {
    iVar2 = iVar5;
  }
  iVar2 = (int)((float)(int)fVar10 + (float)(int)(fVar10 * (float)iVar2));
  if (*(int *)(lVar4 + 0x874) == 0) {
    if (*(char *)(lVar4 + 0x838) == '\r') {
      iVar5 = *(int *)(lVar4 + 0x888);
    }
    else {
      if (*(char *)(lVar4 + 0x838) != '\x02') goto LAB_008dfde8;
      iVar5 = *(int *)(lVar4 + 0x880);
    }
    iVar2 = iVar5 * iVar2;
  }
LAB_008dfde8:
  if ((*param_1 == '\0') || (*(char *)(lVar4 + 0x7e4) != '\0')) {
    return iVar2;
  }
  return *(int *)(*(long *)(param_1 + 0x548) + 0x230) * iVar2;
}


