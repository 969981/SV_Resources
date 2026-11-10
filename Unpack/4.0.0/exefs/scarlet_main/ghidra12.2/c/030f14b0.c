/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f14b0; name: FUN_030f14b0
 */


void FUN_030f14b0(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  
  puVar3 = PTR_PTR_047d1a50;
  iVar13 = *(int *)(param_1 + 0x10) + -1;
  if (0 < *(int *)(param_1 + 0x10)) {
    puVar1 = PTR_PTR_047d1a50 + 0x20;
    do {
      lVar12 = (long)iVar13;
      lVar10 = *(long *)(param_1 + 8);
      piVar7 = (int *)(lVar10 + (long)iVar13 * 0x68);
      iVar6 = *piVar7;
      iVar16 = piVar7[4];
      uVar8 = (ulong)(iVar16 - 1);
      if (0 < iVar16) {
        lVar18 = (long)(int)param_2[1];
        do {
          uVar9 = *(uint *)(*(long *)(lVar10 + lVar12 * 0x68 + 8) +
                           (-(uVar8 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar8 & 0xffffffff) << 2));
          iVar16 = (int)lVar18;
          if ((long)((ulong)*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= lVar18) {
            FUN_0305c42c(param_2,puVar1,lVar18 + 1);
            iVar16 = (int)param_2[1];
          }
          *(uint *)(*param_2 + (long)iVar16 * 4) = uVar9 | iVar6 << 0x16;
          *(int *)(param_2 + 1) = (int)lVar18 + 1;
          uVar8 = uVar8 + 0xffffffff;
          lVar18 = lVar18 + 1;
        } while (-1 < (int)uVar8);
      }
      iVar16 = *(int *)(lVar10 + lVar12 * 0x68 + 0x50);
      uVar9 = iVar16 - 1;
      if (0 < iVar16) {
        do {
          lVar18 = *(long *)(*(long *)(lVar10 + lVar12 * 0x68 + 0x48) +
                             ((long)((ulong)uVar9 << 0x20) >> 0x1c) + 8);
          if ((*(int *)(lVar18 + 0x18) == iVar6) &&
             (iVar16 = *(int *)(lVar18 + 0x28) + -1, 0 < *(int *)(lVar18 + 0x28))) {
            lVar15 = (long)(int)param_2[1];
            do {
              lVar17 = *(long *)(lVar18 + 0x20);
              lVar14 = (long)iVar16;
              lVar2 = lVar15 + 1;
              iVar4 = (int)lVar15;
              iVar5 = iVar4;
              if ((long)((ulong)*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= lVar15) {
                FUN_0305c42c(param_2,puVar3 + 0x20,lVar2);
                iVar5 = (int)param_2[1];
              }
              *(undefined4 *)(*param_2 + (long)iVar5 * 4) = *(undefined4 *)(lVar17 + lVar14 * 8);
              iVar5 = iVar4 + 1;
              lVar15 = lVar15 + 2;
              *(int *)(param_2 + 1) = iVar5;
              if ((long)((ulong)*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= lVar2) {
                FUN_0305c42c(param_2,puVar3 + 0x20,lVar15);
                iVar5 = (int)param_2[1];
              }
              iVar16 = iVar16 + -1;
              *(undefined4 *)(*param_2 + (long)iVar5 * 4) = *(undefined4 *)(lVar17 + lVar14 * 8 + 4)
              ;
              *(int *)(param_2 + 1) = iVar4 + 2;
            } while (-1 < iVar16);
          }
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  uVar9 = *(uint *)(param_2 + 1);
  if (uVar9 - 1 != 0 && 0 < (int)uVar9) {
    FUN_030a0c30(*param_2,0,uVar9 - 1);
    uVar9 = *(uint *)(param_2 + 1);
  }
  if (uVar9 == 0) {
    iVar13 = 0;
  }
  else {
    if ((int)uVar9 < 2) {
      iVar6 = 0;
    }
    else {
      piVar11 = (int *)*param_2;
      lVar10 = 0;
      lVar12 = (ulong)uVar9 - 1;
      piVar7 = piVar11;
      do {
        piVar7 = piVar7 + 1;
        if (piVar11[(int)lVar10] != *piVar7) {
          lVar10 = (long)(int)lVar10 + 1;
          piVar11[lVar10] = *piVar7;
        }
        iVar6 = (int)lVar10;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    iVar13 = iVar6 + 1;
    if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar6) {
      FUN_030bb7b8(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar13);
    }
  }
  if ((int)param_2[1] != iVar13) {
    *(int *)(param_2 + 1) = iVar13;
  }
  return;
}


