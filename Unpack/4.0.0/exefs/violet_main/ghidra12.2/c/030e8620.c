/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e8620; name: FUN_030e8620
 */


ulong FUN_030e8620(long param_1,uint param_2,long *param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  
  puVar5 = PTR_DAT_047e4f38;
  iVar8 = *(int *)PTR_DAT_047e4f38;
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar4 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar8 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (param_2 == 1) {
    *param_3 = param_1;
    uVar19 = 1;
  }
  else {
    uVar1 = param_2;
    if ((int)param_2 < 0) {
      uVar1 = param_2 + 1;
    }
    iVar8 = (int)uVar1 >> 1;
    iVar6 = FUN_030e8620(param_1,iVar8,param_4,param_3);
    lVar9 = param_4 + (long)iVar8 * 8;
    iVar7 = FUN_030e8620(param_1 + (long)iVar8 * 0xc,param_2 - iVar8,lVar9,param_3);
    iVar8 = 0;
    if (iVar6 < 1) {
      uVar19 = 0;
      iVar10 = 0;
    }
    else {
      uVar19 = 0;
      iVar10 = 0;
      if (0 < iVar7) {
        iVar10 = 0;
        uVar19 = 0;
        iVar8 = 0;
        do {
          lVar13 = *(long *)(param_4 + (long)iVar10 * 8);
          iVar2 = *(int *)(lVar13 + 4);
          lVar15 = *(long *)(lVar9 + (long)iVar8 * 8);
          iVar3 = *(int *)(lVar15 + 4);
          iVar18 = (int)uVar19;
          if (iVar2 < iVar3) {
            param_3[iVar18] = lVar13;
            iVar10 = iVar10 + 1;
          }
          else {
            param_3[iVar18] = lVar15;
            if (iVar2 <= iVar3) {
              iVar10 = iVar10 + 1;
            }
            iVar8 = iVar8 + 1;
          }
          uVar19 = (ulong)(iVar18 + 1);
        } while ((iVar8 < iVar7) && (iVar10 < iVar6));
      }
    }
    if (iVar10 < iVar6) {
      uVar16 = (ulong)iVar10;
      uVar14 = (ulong)(int)uVar19;
      uVar11 = ~uVar16;
      if ((iVar6 - iVar10 & 1U) != 0) {
        lVar13 = uVar16 * 8;
        uVar19 = uVar14 + 1;
        uVar16 = uVar16 + 1;
        param_3[uVar14] = *(long *)(param_4 + lVar13);
        uVar14 = uVar19;
      }
      if (uVar11 + (long)iVar6 != 0) {
        lVar13 = (long)iVar6 - uVar16;
        plVar12 = (long *)(param_4 + uVar16 * 8 + 8);
        plVar17 = param_3 + uVar14 + 1;
        uVar19 = uVar14;
        do {
          plVar17[-1] = plVar12[-1];
          uVar19 = uVar19 + 2;
          lVar13 = lVar13 + -2;
          *plVar17 = *plVar12;
          plVar12 = plVar12 + 2;
          plVar17 = plVar17 + 2;
        } while (lVar13 != 0);
      }
    }
    if (iVar8 < iVar7) {
      uVar16 = (ulong)iVar8;
      uVar14 = (ulong)(int)uVar19;
      uVar11 = ~uVar16;
      if ((iVar7 - iVar8 & 1U) != 0) {
        lVar13 = uVar16 * 8;
        uVar19 = uVar14 + 1;
        uVar16 = uVar16 + 1;
        param_3[uVar14] = *(long *)(lVar9 + lVar13);
        uVar14 = uVar19;
      }
      if (uVar11 + (long)iVar7 != 0) {
        lVar9 = (long)iVar7 - uVar16;
        plVar12 = param_3 + uVar14 + 1;
        plVar17 = (long *)(param_4 + (uVar16 + ((long)((ulong)uVar1 << 0x20) >> 0x21)) * 8 + 8);
        uVar19 = uVar14;
        do {
          plVar12[-1] = plVar17[-1];
          uVar19 = uVar19 + 2;
          lVar9 = lVar9 + -2;
          *plVar12 = *plVar17;
          plVar12 = plVar12 + 2;
          plVar17 = plVar17 + 2;
        } while (lVar9 != 0);
      }
    }
    iVar8 = *(int *)puVar5;
    lVar9 = *(long *)(lVar4 + 0x1000b8);
    if (lVar9 == 0) {
      lVar9 = FUN_00e5d3b4();
      *(long *)(lVar4 + 0x1000b8) = lVar9;
    }
    if (*(long *)(lVar9 + (long)iVar8 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
  }
  return uVar19 & 0xffffffff;
}


