/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0173f400; name: FUN_0173f400
 */


void FUN_0173f400(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar13;
  ulong *puVar12;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  
LAB_0173f438:
  do {
    puVar16 = (ulong *)((long)param_2 - 0xc);
    puVar17 = param_1;
LAB_0173f444:
    param_1 = puVar17;
    uVar10 = (long)param_2 - (long)param_1;
    switch(((long)uVar10 >> 2) * -0x5555555555555555) {
    case 0:
    case 1:
      goto switchD_0173f66c_caseD_0;
    case 2:
      if ((*puVar16 & 0xffff00000000) == 0) {
        return;
      }
      if ((int)*puVar16 == 0) {
        return;
      }
      if ((int)param_1[1] < *(int *)((long)param_2 - 4)) {
        uVar14 = *param_1;
        uVar10 = param_1[1];
        uVar15 = *puVar16;
        *(int *)(param_1 + 1) = *(int *)((long)param_2 - 4);
        *param_1 = uVar15;
        *(int *)((long)param_2 - 4) = (int)uVar10;
        *puVar16 = uVar14;
        return;
      }
      return;
    case 3:
      FUN_0173f970(param_1,(int *)((long)param_1 + 0xc),puVar16);
      return;
    case 4:
      FUN_0173fd10(param_1,(int *)((long)param_1 + 0xc),param_1 + 3,puVar16);
      return;
    case 5:
      FUN_0173fe60(param_1,(int *)((long)param_1 + 0xc),param_1 + 3,(int *)((long)param_1 + 0x24),
                   puVar16);
      return;
    }
    if ((long)uVar10 < 0x174) {
      FUN_01740010(param_1,param_2);
      return;
    }
    puVar17 = (ulong *)((long)param_1 + (uVar10 / 0x18) * 0xc);
    if ((long)uVar10 < 0x2ed5) {
      iVar9 = FUN_0173f970(param_1,puVar17,puVar16);
    }
    else {
      lVar1 = (uVar10 / 0x30) * 2 + uVar10 / 0x30;
      iVar9 = FUN_0173fe60(param_1,(int *)((long)param_1 + lVar1 * 4),puVar17,
                           (int *)((long)puVar17 + lVar1 * 4),puVar16);
    }
    iVar3 = (int)param_1[1];
    bVar7 = (*param_1 & 0xffff00000000) == 0;
    iVar4 = *(int *)((long)param_1 + (uVar10 / 0x18) * 0xc + 8);
    bVar8 = (int)*param_1 == 0;
    bVar5 = !bVar7;
    bVar6 = !bVar8;
    if ((iVar3 <= iVar4) || (!(bVar5 && bVar6))) {
      puVar11 = param_2 + -3;
LAB_0173f4c0:
      puVar12 = puVar11;
      if (param_1 == puVar12) {
        puVar11 = (ulong *)((long)param_1 + 0xc);
        if (iVar3 <= *(int *)((long)param_2 - 4) || (!bVar5 || !bVar6)) {
          if (puVar11 == puVar16 || (bVar7 || bVar8)) {
            return;
          }
          puVar11 = param_1 + 3;
          while (iVar3 <= *(int *)((long)puVar11 - 4)) {
            puVar11 = (ulong *)((long)puVar11 + 0xc);
            if (param_2 == puVar11) {
              return;
            }
          }
          uVar10 = *(ulong *)((long)puVar11 - 0xc);
          iVar9 = *(int *)((long)puVar11 - 4);
          uVar14 = *puVar16;
          *(int *)((long)puVar11 - 4) = *(int *)((long)param_2 - 4);
          *(ulong *)((long)puVar11 - 0xc) = uVar14;
          *(int *)((long)param_2 - 4) = iVar9;
          *puVar16 = uVar10;
        }
        if (puVar11 == puVar16) {
          return;
        }
        if (((*param_1 & 0xffff00000000) == 0) || ((int)*param_1 == 0)) {
LAB_0173f7e0:
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        puVar12 = puVar16;
        while( true ) {
          iVar9 = (int)param_1[1];
          puVar17 = (ulong *)((long)puVar11 - 0xc);
          do {
            puVar11 = puVar17;
            puVar17 = (ulong *)((long)puVar11 + 0xc);
          } while (iVar9 <= *(int *)((long)puVar11 + 0x14));
          if (*(int *)((long)puVar12 - 4) < iVar9) {
            puVar18 = puVar12 + -2;
            do {
              puVar12 = puVar18;
              puVar18 = (ulong *)((long)puVar12 + -0xc);
            } while ((int)*puVar12 < iVar9);
            puVar12 = puVar12 + -1;
          }
          else {
            puVar12 = (ulong *)((long)puVar12 - 0xc);
          }
          if (puVar12 <= puVar17) break;
          uVar10 = *puVar17;
          iVar9 = *(int *)((long)puVar11 + 0x14);
          uVar14 = *puVar12;
          *(int *)((long)puVar11 + 0x14) = (int)puVar12[1];
          *puVar17 = uVar14;
          *(int *)(puVar12 + 1) = iVar9;
          *puVar12 = uVar10;
          if (((*param_1 & 0xffff00000000) == 0) || (puVar11 = puVar11 + 3, (int)*param_1 == 0))
          goto LAB_0173f7e0;
        }
        goto LAB_0173f444;
      }
      puVar11 = (ulong *)((long)puVar12 - 0xc);
      if ((int)puVar12[1] <= iVar4) goto LAB_0173f4c0;
      if (((*puVar12 & 0xffff00000000) == 0) || ((int)*puVar12 == 0)) goto LAB_0173f4c0;
      uVar14 = *param_1;
      iVar9 = iVar9 + 1;
      uVar10 = param_1[1];
      uVar15 = *puVar12;
      *(int *)(param_1 + 1) = (int)puVar12[1];
      *param_1 = uVar15;
      *(int *)(puVar12 + 1) = (int)uVar10;
      *puVar12 = uVar14;
    }
    else {
      puVar12 = puVar16;
    }
    puVar11 = (ulong *)((long)param_1 + 0xc);
    puVar18 = puVar11;
    if (puVar11 < puVar12) {
      while( true ) {
        iVar3 = (int)puVar17[1];
        puVar2 = (ulong *)((long)puVar18 + 0xc);
        puVar11 = puVar18;
        if ((iVar3 < (int)puVar18[1] && (*puVar18 & 0xffff00000000) != 0) && (int)*puVar18 != 0) {
          do {
            puVar11 = puVar2;
            puVar2 = (ulong *)((long)puVar11 + 0xc);
          } while ((iVar3 < (int)puVar11[1] && (*puVar11 & 0xffff00000000) != 0) &&
                   (int)*puVar11 != 0);
        }
        do {
          puVar18 = puVar2;
          puVar13 = puVar12;
          puVar12 = (ulong *)((long)puVar13 + -0xc);
          puVar2 = puVar18;
        } while ((*(int *)((long)puVar13 + -4) <= iVar3 || (*puVar12 & 0xffff00000000) == 0) ||
                 (int)*puVar12 == 0);
        if (puVar12 < puVar11) break;
        uVar14 = *puVar11;
        iVar9 = iVar9 + 1;
        uVar10 = puVar11[1];
        uVar15 = *puVar12;
        *(int *)(puVar11 + 1) = *(int *)((long)puVar13 + -4);
        *puVar11 = uVar15;
        *(int *)((long)puVar13 + -4) = (int)uVar10;
        *puVar12 = uVar14;
        puVar2 = puVar12;
        if (puVar17 != puVar11) {
          puVar2 = puVar17;
        }
        puVar17 = puVar2;
      }
    }
    if ((((puVar11 != puVar17) && ((*puVar17 & 0xffff00000000) != 0)) && ((int)*puVar17 != 0)) &&
       ((int)puVar11[1] < (int)puVar17[1])) {
      uVar14 = *puVar11;
      iVar9 = iVar9 + 1;
      uVar10 = puVar11[1];
      uVar15 = *puVar17;
      *(int *)(puVar11 + 1) = (int)puVar17[1];
      *puVar11 = uVar15;
      *(int *)(puVar17 + 1) = (int)uVar10;
      *puVar17 = uVar14;
    }
    if (iVar9 != 0) goto LAB_0173f724;
    uVar10 = FUN_0173fb30(param_1,puVar11);
    uVar14 = FUN_0173fb30((ulong *)((long)puVar11 + 0xcU),param_2);
    if ((uVar14 & 1) == 0) break;
    param_2 = puVar11;
    if ((uVar10 & 1) != 0) {
switchD_0173f66c_caseD_0:
      return;
    }
  } while( true );
  puVar17 = (ulong *)((long)puVar11 + 0xcU);
  if ((uVar10 & 1) == 0) {
LAB_0173f724:
    if (((long)param_2 - (long)puVar11 >> 2) * -0x5555555555555555 <=
        ((long)puVar11 - (long)param_1 >> 2) * -0x5555555555555555) {
      FUN_0173f400((int *)((long)puVar11 + 0xc),param_2);
      param_2 = puVar11;
      goto LAB_0173f438;
    }
    FUN_0173f400(param_1,puVar11);
    puVar17 = (ulong *)((long)puVar11 + 0xc);
  }
  goto LAB_0173f444;
}


