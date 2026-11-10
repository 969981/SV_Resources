/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d2c2d0; name: FUN_00d2c2d0
 */


int FUN_00d2c2d0(int *param_1,int *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ushort *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  
  puVar10 = (ushort *)((long)param_2 - (long)*param_2);
  if (((*puVar10 < 7) || ((ulong)puVar10[3] == 0)) ||
     (iVar6 = *(int *)((long)param_2 + (ulong)puVar10[3]), iVar6 == 0)) {
    iVar6 = 1;
  }
  else {
    if (iVar6 == 1) {
      lVar18 = 0;
      if ((ulong)puVar10[2] != 0) {
        puVar16 = (uint *)((long)param_2 + (ulong)puVar10[2]);
        lVar18 = (long)puVar16 + (ulong)*puVar16;
      }
      uVar12 = (ulong)*(ushort *)((long)param_1 + (6 - (long)*param_1));
      puVar1 = (uint *)((long)param_1 + uVar12);
      uVar14 = (ulong)*puVar1;
      puVar1 = (uint *)((long)puVar1 + uVar14);
      puVar16 = puVar1 + 1;
      uVar15 = (ulong)*puVar1;
      if (uVar15 != 0) {
        puVar16 = puVar16 + uVar15;
        lVar9 = uVar14 + uVar12;
        lVar17 = 0;
        do {
          uVar12 = (ulong)*(uint *)((long)param_1 + lVar17 + lVar9 + 4);
          lVar11 = lVar17 + (uVar12 - (long)*(int *)((long)param_1 + lVar17 + uVar12 + lVar9 + 4)) +
                            lVar9;
          if ((*(ushort *)((long)param_1 + lVar11 + 4) < 5) ||
             (uVar14 = (ulong)*(ushort *)((long)param_1 + lVar11 + 8), uVar14 == 0)) {
            lVar11 = 0;
          }
          else {
            lVar11 = uVar12 + uVar14;
            lVar11 = (long)param_1 +
                     lVar17 + lVar11 + (ulong)*(uint *)((long)param_1 + lVar17 + lVar11 + lVar9 + 4)
                     + lVar9 + 4;
          }
          iVar6 = strcmp((char *)(lVar18 + 4),(char *)(lVar11 + 4));
          if (iVar6 == 0) {
            puVar16 = (uint *)((long)param_1 + lVar17 + lVar9 + 4);
            break;
          }
          lVar17 = lVar17 + 4;
        } while (uVar15 * 4 != lVar17);
      }
      uVar4 = *puVar16;
      piVar2 = (int *)((long)puVar16 + (ulong)uVar4);
      uVar12 = (ulong)*(ushort *)((long)piVar2 + (8 - (long)*piVar2));
      puVar1 = (uint *)((long)piVar2 + uVar12);
      uVar14 = (ulong)*puVar1;
      puVar1 = (uint *)((long)puVar1 + uVar14);
      puVar19 = puVar1 + 1;
      uVar5 = *puVar1;
      uVar15 = (ulong)uVar5;
      if (uVar15 != 0) {
        piVar2 = (int *)((long)puVar19 + (ulong)*puVar19);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
           (uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar13 == 0)) {
          lVar18 = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar2 + uVar13);
          lVar18 = (long)puVar3 + (ulong)*puVar3;
        }
        iVar6 = FUN_00d2c2d0(param_1,lVar18);
        if (uVar5 == 1) {
          return iVar6;
        }
        puVar19 = puVar19 + uVar15;
        piVar2 = (int *)((long)(puVar1 + 2) + (ulong)puVar1[2]);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
           (uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar13 == 0)) {
          lVar18 = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar2 + uVar13);
          lVar18 = (long)puVar3 + (ulong)*puVar3;
        }
        iVar7 = FUN_00d2c2d0(param_1,lVar18);
        puVar3 = puVar1 + 3;
        if (puVar3 == puVar19) {
          return iVar7 + iVar6;
        }
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
           (uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar13 == 0)) {
          lVar18 = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar2 + uVar13);
          lVar18 = (long)puVar3 + (ulong)*puVar3;
        }
        iVar8 = FUN_00d2c2d0(param_1,lVar18);
        puVar3 = puVar1 + 4;
        iVar8 = iVar8 + iVar7 + iVar6;
        if (puVar3 == puVar19) {
          return iVar8;
        }
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
           (uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar13 == 0)) {
          lVar18 = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar2 + uVar13);
          lVar18 = (long)puVar3 + (ulong)*puVar3;
        }
        iVar6 = FUN_00d2c2d0(param_1,lVar18);
        puVar3 = puVar1 + 5;
        iVar6 = iVar6 + iVar8;
        if (puVar3 == puVar19) {
          return iVar6;
        }
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
           (uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar13 == 0)) {
          lVar18 = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar2 + uVar13);
          lVar18 = (long)puVar3 + (ulong)*puVar3;
        }
        iVar7 = FUN_00d2c2d0(param_1,lVar18);
        iVar7 = iVar7 + iVar6;
        if (puVar1 + 6 == puVar19) {
          return iVar7;
        }
        lVar17 = uVar4 + uVar14 + uVar12;
        lVar18 = 0;
        do {
          uVar12 = (ulong)*(uint *)((long)puVar16 + lVar18 + lVar17 + 0x18);
          lVar9 = lVar18 + (uVar12 - (long)*(int *)((long)puVar1 + lVar18 + uVar12 + 0x18)) + lVar17
          ;
          if ((*(ushort *)((long)puVar16 + lVar9 + 0x18) < 5) ||
             (uVar14 = (ulong)*(ushort *)((long)puVar16 + lVar9 + 0x1c), uVar14 == 0)) {
            lVar9 = 0;
          }
          else {
            lVar9 = uVar12 + uVar14;
            lVar9 = (long)puVar16 +
                    lVar18 + lVar9 + (ulong)*(uint *)((long)puVar16 + lVar18 + lVar9 + lVar17 + 0x18
                                                     ) + lVar17 + 0x18;
          }
          iVar6 = FUN_00d2c2d0(param_1,lVar9);
          lVar18 = lVar18 + 4;
          iVar7 = iVar6 + iVar7;
        } while (uVar15 * 4 + -0x14 != lVar18);
        return iVar7;
      }
    }
    else if (iVar6 == 2) {
      lVar18 = 0;
      if ((ulong)puVar10[2] != 0) {
        puVar16 = (uint *)((long)param_2 + (ulong)puVar10[2]);
        lVar18 = (long)puVar16 + (ulong)*puVar16;
      }
      uVar12 = (ulong)*(ushort *)((long)param_1 + (8 - (long)*param_1));
      puVar1 = (uint *)((long)param_1 + uVar12);
      uVar14 = (ulong)*puVar1;
      puVar1 = (uint *)((long)puVar1 + uVar14);
      puVar16 = puVar1 + 1;
      uVar15 = (ulong)*puVar1;
      if (uVar15 != 0) {
        puVar16 = puVar16 + uVar15;
        lVar9 = uVar14 + uVar12;
        lVar17 = 0;
        do {
          uVar12 = (ulong)*(uint *)((long)param_1 + lVar17 + lVar9 + 4);
          lVar11 = lVar17 + (uVar12 - (long)*(int *)((long)param_1 + lVar17 + uVar12 + lVar9 + 4)) +
                            lVar9;
          if ((*(ushort *)((long)param_1 + lVar11 + 4) < 5) ||
             (uVar14 = (ulong)*(ushort *)((long)param_1 + lVar11 + 8), uVar14 == 0)) {
            lVar11 = 0;
          }
          else {
            lVar11 = uVar12 + uVar14;
            lVar11 = (long)param_1 +
                     lVar17 + lVar11 + (ulong)*(uint *)((long)param_1 + lVar17 + lVar11 + lVar9 + 4)
                     + lVar9 + 4;
          }
          iVar6 = strcmp((char *)(lVar18 + 4),(char *)(lVar11 + 4));
          if (iVar6 == 0) {
            puVar16 = (uint *)((long)param_1 + lVar17 + lVar9 + 4);
            break;
          }
          lVar17 = lVar17 + 4;
        } while (uVar15 * 4 != lVar17);
      }
      piVar2 = (int *)((long)puVar16 + (ulong)*puVar16);
      puVar16 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (10 - (long)*piVar2)));
      puVar16 = (uint *)((long)puVar16 + (ulong)*puVar16);
      uVar4 = *puVar16;
      if ((ulong)uVar4 != 0) {
        lVar18 = 0;
        iVar6 = 0;
        do {
          uVar12 = (ulong)*(uint *)((long)puVar16 + lVar18 + 4);
          lVar17 = lVar18 + (uVar12 - (long)*(int *)((long)puVar16 + lVar18 + uVar12 + 4));
          if ((*(ushort *)((long)puVar16 + lVar17 + 4) < 5) ||
             (uVar14 = (ulong)*(ushort *)((long)puVar16 + lVar17 + 8), uVar14 == 0)) {
            lVar17 = 0;
          }
          else {
            lVar17 = uVar12 + uVar14;
            lVar17 = (long)puVar16 +
                     lVar18 + lVar17 + (ulong)*(uint *)((long)puVar16 + lVar18 + lVar17 + 4) + 4;
          }
          iVar7 = FUN_00d2c2d0(param_1,lVar17);
          lVar18 = lVar18 + 4;
          iVar6 = iVar7 + iVar6;
        } while ((ulong)uVar4 * 4 != lVar18);
        return iVar6;
      }
    }
    iVar6 = 0;
  }
  return iVar6;
}


