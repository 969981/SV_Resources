/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a46afc; name: FUN_00a46afc
 */


void FUN_00a46afc(long param_1,long param_2,long param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  float fVar13;
  float __x;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (((*(char *)(param_1 + 8) == '\0') || (*(char *)(param_2 + 8) == '\0')) ||
     (*(char *)(param_3 + 8) == '\0')) {
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  piVar2 = *(int **)(param_1 + 0x10);
  iVar10 = (int)((ulong)(*(long *)(param_1 + 0x18) - (long)piVar2) >> 2);
  if (iVar10 < 1) {
    return;
  }
  iVar3 = *piVar2;
  if (iVar10 == 1) {
    iVar11 = 0;
  }
  else {
    iVar11 = piVar2[1];
    if (2 < iVar10) {
      iVar10 = piVar2[2];
      goto LAB_00a46b70;
    }
  }
  iVar10 = 0;
LAB_00a46b70:
  if (0 < iVar3) {
    uVar4 = iVar10 * iVar11;
    uVar5 = uVar4 - 1;
    iVar10 = 0;
    uVar1 = uVar4 & 3;
    do {
      fVar13 = 0.0;
      if ((int)((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) >> 2) < 1) {
        lVar12 = 0;
      }
      else {
        lVar12 = (long)**(int **)(param_2 + 0x48) * (long)iVar10;
      }
      fVar15 = *(float *)(*(long *)(param_2 + 0x80) + lVar12 * 4);
      if ((int)((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10)) >> 2) < 1) {
        lVar12 = 0;
      }
      else {
        lVar12 = (long)**(int **)(param_3 + 0x48) * (long)iVar10;
      }
      fVar14 = *(float *)(*(long *)(param_3 + 0x80) + lVar12 * 4);
      iVar11 = (int)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 2);
      if (iVar11 < 1) {
        lVar12 = 0;
      }
      else {
        lVar12 = (long)**(int **)(param_1 + 0x48) * (long)iVar10;
      }
      fVar16 = fVar13;
      if (0 < (int)uVar4) {
        pfVar7 = (float *)(*(long *)(param_1 + 0x80) + lVar12 * 4);
        if (6 < uVar5) {
          pfVar6 = pfVar7;
          iVar8 = -(uVar4 & 0xfffffff8);
          do {
            pfVar7 = pfVar6 + 8;
            fVar16 = fVar16 + *pfVar6 + pfVar6[1] + pfVar6[2] + pfVar6[3] + pfVar6[4] + pfVar6[5] +
                     pfVar6[6] + pfVar6[7];
            iVar8 = iVar8 + 8;
            pfVar6 = pfVar7;
          } while (iVar8 != 0);
        }
        if ((uVar4 & 7) != 0) {
          uVar9 = uVar4 & 7;
          do {
            fVar16 = fVar16 + *pfVar7;
            uVar9 = uVar9 - 1;
            pfVar7 = pfVar7 + 1;
          } while (uVar9 != 0);
        }
      }
      if (iVar11 < 1) {
        lVar12 = 0;
      }
      else {
        lVar12 = (long)**(int **)(param_1 + 0x48) * (long)iVar10;
      }
      fVar16 = fVar16 / (float)(int)uVar4;
      if (0 < (int)uVar4) {
        pfVar7 = (float *)(*(long *)(param_1 + 0x80) + lVar12 * 4);
        if (2 < uVar5) {
          pfVar6 = pfVar7;
          iVar11 = -(uVar4 & 0xfffffffc);
          do {
            pfVar7 = pfVar6 + 4;
            fVar13 = fVar13 + (*pfVar6 - fVar16) * (*pfVar6 - fVar16) +
                     (pfVar6[1] - fVar16) * (pfVar6[1] - fVar16) +
                     (pfVar6[2] - fVar16) * (pfVar6[2] - fVar16) +
                     (pfVar6[3] - fVar16) * (pfVar6[3] - fVar16);
            iVar11 = iVar11 + 4;
            pfVar6 = pfVar7;
          } while (iVar11 != 0);
        }
        if (uVar1 != 0) {
          uVar9 = uVar1;
          do {
            fVar13 = fVar13 + (*pfVar7 - fVar16) * (*pfVar7 - fVar16);
            uVar9 = uVar9 - 1;
            pfVar7 = pfVar7 + 1;
          } while (uVar9 != 0);
        }
      }
      __x = fVar13 / (float)(int)uVar5 + 1e-05;
      fVar13 = SQRT(__x);
      if (NAN(fVar13)) {
        fVar13 = sqrtf(__x);
      }
      if ((int)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 2) < 1) {
        lVar12 = 0;
      }
      else {
        lVar12 = (long)**(int **)(param_1 + 0x48) * (long)iVar10;
      }
      if (0 < (int)uVar4) {
        fVar15 = fVar15 / fVar13;
        pfVar7 = (float *)(*(long *)(param_1 + 0x80) + lVar12 * 4);
        iVar11 = -(uVar4 & 0xfffffffc);
        if (2 < uVar5) {
          do {
            *pfVar7 = fVar14 + fVar15 * (*pfVar7 - fVar16);
            pfVar7[1] = fVar14 + fVar15 * (pfVar7[1] - fVar16);
            pfVar7[2] = fVar14 + fVar15 * (pfVar7[2] - fVar16);
            pfVar7[3] = fVar14 + fVar15 * (pfVar7[3] - fVar16);
            pfVar7 = pfVar7 + 4;
            iVar11 = iVar11 + 4;
          } while (iVar11 != 0);
        }
        if (uVar1 != 0) {
          uVar9 = uVar1;
          do {
            uVar9 = uVar9 - 1;
            *pfVar7 = fVar14 + fVar15 * (*pfVar7 - fVar16);
            pfVar7 = pfVar7 + 1;
          } while (uVar9 != 0);
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar3);
  }
  return;
}


