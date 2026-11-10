/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d47a0; name: FUN_002d47a0
 */


undefined8 FUN_002d47a0(long *param_1,int *param_2,int *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int *piVar6;
  undefined8 uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  __less a_Stack_60 [8];
  __less a_Stack_58 [8];
  
  piVar6 = (int *)FUN_0049e770(PTR_FUN_047cba38,
                               -(ulong)((uint)(param_2[0xb] + param_2[10]) >> 0x1f) &
                               0xfffffffc00000000 | (ulong)(uint)(param_2[0xb] + param_2[10]) << 2);
  if (*param_2 == 0) {
    uVar16 = 0;
LAB_002d4b54:
    uVar18 = 0;
    uVar15 = param_4 & 0x100;
    param_4 = param_4 & 0x100;
    if (uVar16 == 0 && uVar15 == 0) {
LAB_002d4b64:
      uVar7 = 1;
      goto joined_r0x002d4b68;
    }
  }
  else {
    piVar9 = *(int **)(param_2 + 6);
    if ((param_4 >> 8 & 1) == 0) {
      uVar15 = 0;
      uVar18 = 0;
      bVar11 = false;
      piVar10 = piVar9;
      do {
        iVar8 = *piVar10;
        if (bVar11) {
          if (((int)param_1[1] == 0) || (param_2[10] <= iVar8)) break;
          if (iVar8 < param_2[10]) goto LAB_002d484c;
LAB_002d48ac:
          if ((0 < (int)uVar15) && (piVar6[(long)(int)uVar15 + -1] != -1)) {
            piVar6[uVar15] = -1;
            uVar15 = uVar15 + 1;
          }
        }
        else {
          if (param_2[10] <= iVar8) goto LAB_002d48ac;
LAB_002d484c:
          lVar12 = *param_1;
          lVar13 = *(long *)(lVar12 + 0x60);
          puVar1 = (uint *)(lVar13 + (long)iVar8 * 8);
          if ((*(byte *)(lVar13 + (-(ulong)(iVar8 - 1U >> 0x1f) & 0xfffffff800000000 |
                                  (ulong)(iVar8 - 1U) << 3)) >> 3 & 1) != 0) {
            piVar6[(int)uVar15] = iVar8;
            uVar15 = uVar15 + 1;
          }
          uVar16 = *puVar1 & 7;
          if (uVar16 == 4) {
            uVar18 = puVar1[1] | uVar18;
          }
          else if (uVar16 == 5) {
            bVar11 = (bool)(bVar11 | *(char *)(lVar12 + 1) == '\0');
          }
        }
        piVar10 = piVar10 + 1;
      } while (piVar10 != piVar9 + *param_2);
    }
    else {
      lVar12 = 0;
      uVar15 = 0;
      uVar18 = 0;
      bVar11 = false;
      bVar5 = 0;
      uVar7 = 2;
      do {
        iVar8 = *(int *)((long)piVar9 + lVar12);
        if (bVar11) {
          if (((int)param_1[1] == 0) || (param_2[10] <= iVar8)) break;
          if (iVar8 < param_2[10]) goto LAB_002d493c;
LAB_002d49a0:
          if ((0 < (int)uVar15) && (piVar6[(long)(int)uVar15 + -1] != -1)) {
            piVar6[uVar15] = -1;
            uVar15 = uVar15 + 1;
            bVar5 = 1;
          }
        }
        else {
          if (param_2[10] <= iVar8) goto LAB_002d49a0;
LAB_002d493c:
          lVar13 = *param_1;
          lVar14 = *(long *)(lVar13 + 0x60);
          puVar1 = (uint *)(lVar14 + (long)iVar8 * 8);
          uVar16 = *puVar1;
          if (((uVar16 & 7) == 1) && (iVar3 = (int)param_1[1], iVar3 != 3)) {
            if (iVar3 == 0) {
              if (lVar12 == 0) {
                uVar4 = *(uint *)(lVar14 + ((ulong)(uVar16 >> 1) & 0x7ffffff8));
                uVar2 = uVar4 & 7;
                if (uVar2 == 6) {
                  uVar2 = *(uint *)(lVar14 + ((ulong)(uVar4 >> 1) & 0x7ffffff8)) & 7;
                }
                if (uVar2 == 2) goto joined_r0x002d4b68;
              }
            }
            else if ((bool)(iVar3 != 1 | bVar5 ^ 1)) goto joined_r0x002d4b68;
          }
          if ((*(byte *)(lVar14 + (-(ulong)(iVar8 - 1U >> 0x1f) & 0xfffffff800000000 |
                                  (ulong)(iVar8 - 1U) << 3)) >> 3 & 1) != 0) {
            piVar6[(int)uVar15] = iVar8;
            uVar16 = *puVar1;
            uVar15 = uVar15 + 1;
          }
          if ((uVar16 & 7) == 5) {
            bVar11 = (bool)(bVar11 | *(char *)(lVar13 + 1) == '\0');
          }
          else if ((uVar16 & 7) == 4) {
            uVar18 = puVar1[1] | uVar18;
          }
        }
        lVar12 = lVar12 + 4;
      } while (lVar12 != (long)*param_2 * 4);
    }
    uVar16 = uVar15;
    if ((0 < (int)uVar15) && (uVar16 = uVar15 - 1, piVar6[(int)(uVar15 - 1)] != -1)) {
      uVar16 = uVar15;
    }
    if (uVar18 == 0) goto LAB_002d4b54;
    if (uVar16 == 0 && param_4 == 0) goto LAB_002d4b64;
  }
  iVar8 = (int)param_1[1];
  if (iVar8 == 1) {
    piVar9 = piVar6 + (int)uVar16;
    if (piVar6 < piVar9) {
      piVar10 = piVar6;
      do {
        piVar17 = piVar10;
        if (piVar10 < piVar9) {
          do {
            if (*piVar17 == -1) {
              bVar11 = true;
              goto LAB_002d4aa8;
            }
            piVar17 = piVar17 + 1;
          } while (piVar17 < piVar9);
          bVar11 = false;
        }
        else {
          bVar11 = false;
        }
LAB_002d4aa8:
                    /* try { // try from 002d4aa8 to 002d4ab3 has its CatchHandler @ 002d4bc8 */
        std::__sort<std::__less<int,int>&,int*>(piVar10,piVar17,a_Stack_58);
        piVar10 = piVar17 + 1;
        if (!bVar11) {
          piVar10 = piVar17;
        }
      } while (piVar10 < piVar9);
      iVar8 = (int)param_1[1];
      goto LAB_002d4acc;
    }
  }
  else {
LAB_002d4acc:
    if (iVar8 == 3) {
                    /* try { // try from 002d4ad8 to 002d4ae3 has its CatchHandler @ 002d4bc0 */
      std::__sort<std::__less<int,int>&,int*>(piVar6,piVar6 + (int)uVar16,a_Stack_60);
    }
  }
  if (param_3 != (int *)0x0) {
    piVar6[(int)uVar16] = -2;
    iVar8 = *param_3;
    uVar16 = uVar16 + 1;
    if (iVar8 != 0) {
      piVar10 = *(int **)(param_3 + 6);
      lVar12 = *(long *)(*param_1 + 0x60);
      piVar9 = piVar10;
      do {
        if ((*(uint *)(lVar12 + (long)*piVar9 * 8) & 7) == 5) {
          piVar6[(int)uVar16] = *(int *)(lVar12 + (long)*piVar9 * 8 + 4);
          iVar8 = *param_3;
          uVar16 = uVar16 + 1;
        }
        piVar9 = piVar9 + 1;
      } while (piVar9 != piVar10 + iVar8);
    }
  }
                    /* try { // try from 002d4ba4 to 002d4bb3 has its CatchHandler @ 002d4bc4 */
  uVar7 = FUN_002d4be8(param_1,piVar6,uVar16,param_4 | uVar18 << 0x10);
joined_r0x002d4b68:
  if (piVar6 != (int *)0x0) {
    FUN_0049e790(PTR_LAB_047cba48,piVar6);
  }
  return uVar7;
}


