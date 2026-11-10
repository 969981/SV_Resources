/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c7c08; name: FUN_031c7c08
 */


long * FUN_031c7c08(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  iVar6 = (int)param_1[1];
  lVar8 = (long)iVar6;
  lVar13 = lVar8 + -1;
  uVar4 = (uint)lVar13;
  iVar10 = -1;
  lVar7 = lVar13;
  do {
    lVar12 = lVar7 + -1;
    if (lVar7 < 1) goto LAB_031c7c54;
    lVar1 = *param_1 + lVar7;
    lVar7 = lVar12;
  } while (*(char *)(lVar1 + -1) != '\\');
  iVar10 = (int)lVar12;
LAB_031c7c54:
  iVar11 = -1;
  lVar7 = lVar13;
  do {
    lVar12 = lVar7 + -1;
    if (lVar7 < 1) goto LAB_031c7c80;
    lVar1 = *param_1 + lVar7;
    lVar7 = lVar12;
  } while (*(char *)(lVar1 + -1) != '/');
  iVar11 = (int)lVar12;
LAB_031c7c80:
  if (iVar10 <= iVar11) {
    iVar10 = iVar11;
  }
  iVar11 = 1 - iVar6;
  do {
    if (lVar13 <= iVar10 + 1) goto LAB_031c7cc4;
    lVar12 = *param_1;
    lVar7 = lVar12 + lVar13;
    lVar13 = lVar13 + -1;
    iVar11 = iVar11 + 1;
  } while (*(char *)(lVar7 + -1) != '.');
  if (iVar11 == 1) {
LAB_031c7cc4:
    if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
      FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,1);
      iVar6 = (int)param_1[1];
    }
    if (iVar6 != 1) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    *(undefined1 *)*param_1 = 0;
  }
  else {
    uVar3 = -iVar11;
    if ((int)uVar4 <= -iVar11) {
      uVar3 = uVar4;
    }
    if (0 < (int)uVar3) {
      uVar4 = iVar6 - uVar3;
      *(uint *)(param_1 + 1) = uVar4;
      if (uVar4 != 0) {
        if ((ulong)(lVar8 + (int)~uVar3) < 3) {
          uVar14 = 0;
        }
        else {
          uVar3 = iVar6 - 1;
          if (-iVar11 < (int)uVar3) {
            uVar3 = -iVar11;
          }
          uVar14 = 0;
          do {
            puVar9 = (undefined1 *)(lVar12 + (ulong)uVar3 + 3 + uVar14);
            puVar2 = (undefined1 *)(lVar12 + 1 + uVar14);
            uVar14 = uVar14 + 4;
            puVar2[-1] = puVar9[-3];
            *puVar2 = puVar9[-2];
            puVar2[1] = puVar9[-1];
            puVar2[2] = *puVar9;
          } while ((lVar8 - (int)uVar3 & 0xfffffffffffffffcU) != uVar14);
        }
        if ((uVar4 & 3) != 0) {
          uVar4 = iVar6 - 1;
          if (-iVar11 < (int)uVar4) {
            uVar4 = -iVar11;
          }
          lVar7 = -((ulong)(iVar6 - uVar4) & 3);
          puVar9 = (undefined1 *)(lVar12 + uVar14);
          do {
            bVar5 = lVar7 != -1;
            lVar7 = lVar7 + 1;
            *puVar9 = puVar9[uVar4];
            puVar9 = puVar9 + 1;
          } while (bVar5);
        }
      }
    }
  }
  return param_1;
}


