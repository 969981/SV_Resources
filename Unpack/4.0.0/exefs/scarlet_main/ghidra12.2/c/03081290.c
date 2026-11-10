/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03081290; name: FUN_03081290
 */


void FUN_03081290(long param_1,long param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    piVar13 = *(int **)(param_1 + 0x18);
    piVar1 = piVar13 + (long)*(int *)(param_1 + 0x20) * 4;
    iVar3 = *(int *)(*(long *)(param_3 + 0x20) + 0x180);
    do {
      plVar9 = (long *)(*(long *)(param_2 + 0x18) + (long)iVar3 * 0x18);
      uVar4 = *(uint *)(plVar9 + 1);
      iVar10 = 1;
      lVar8 = 0;
      do {
        if ((long)(int)((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) - 1) * 0x18 + 0x18 == lVar8)
        goto LAB_0308132c;
        lVar7 = *plVar9;
        lVar2 = lVar7 + lVar8;
        lVar8 = lVar8 + 0x18;
        iVar10 = iVar10 + -1;
      } while (*(float *)(lVar2 + 8) < 0.0);
      if (iVar10 != 1) {
        while( true ) {
          iVar11 = -iVar10;
          lVar8 = (long)iVar11;
          if (*(int *)(lVar7 + (long)iVar11 * 0x18 + 0xc) == *piVar13) break;
          pfVar12 = (float *)(lVar7 + 0x20 + lVar8 * 0x18);
          do {
            lVar8 = lVar8 + 1;
            if ((int)uVar4 <= lVar8) goto LAB_0308132c;
            fVar14 = *pfVar12;
            iVar10 = iVar10 + -1;
            pfVar12 = pfVar12 + 6;
          } while (fVar14 < 0.0);
          if (iVar10 == 1) goto LAB_0308132c;
        }
        if (-1 < iVar11) {
          plVar9 = (long *)(*(long *)(param_3 + 0x38) + lVar8 * 0x18);
          if ((char)plVar9[2] == '\x01') {
            lVar8 = *plVar9;
          }
          else {
            lVar8 = FUN_03065a74();
          }
          fVar15 = *(float *)(lVar8 + 0x18);
          fVar14 = *(float *)(lVar8 + 0x1c) + 0.001;
          bVar5 = false;
          bVar6 = false;
          if (fVar15 <= *(float *)(*(long *)(piVar13 + 2) + 0x18)) {
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar14) && !NAN(fVar15)) {
              bVar5 = fVar14 < fVar15;
              bVar6 = false;
            }
          }
          if (bVar5 != bVar6) {
            FUN_03080fc0(lVar8);
            FUN_03077ad8(fVar15,lVar8,1);
          }
        }
      }
LAB_0308132c:
      piVar13 = piVar13 + 4;
    } while (piVar13 != piVar1);
  }
  return;
}


