/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bd650c; name: FUN_00bd650c
 */


undefined8 FUN_00bd650c(long param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  char *pcVar16;
  int *piVar17;
  int iVar18;
  ulong uVar19;
  char *pcVar20;
  undefined8 uVar21;
  ulong uVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  undefined *local_90;
  long *plStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined *local_70;
  ulong uStack_68;
  
  puVar8 = PTR_DAT_047dad50;
  puVar7 = PTR_DAT_047dad48;
  puVar1 = (ulong *)(param_1 + 0x28);
  puVar2 = PTR_DAT_047dad40 + 0x10;
LAB_00bd6570:
  pbVar15 = (byte *)*param_2;
  if (pbVar15 < (byte *)param_2[1]) {
    bVar6 = *pbVar15;
    uVar13 = (uint)bVar6;
    if ((char)bVar6 < '\x01') {
      if (((byte *)param_2[1] <= pbVar15 + 1) ||
         (bVar4 = pbVar15[1], -1 < (char)((bVar4 ^ 0x80) & bVar6))) goto LAB_00bd692c;
      uVar13 = (uVar13 + (uint)bVar4 * 0x80) - 0x80;
      uVar19 = (ulong)uVar13;
      *(uint *)(param_2 + 4) = uVar13;
      pbVar15 = pbVar15 + 2;
    }
    else {
      uVar19 = (ulong)bVar6;
      pbVar15 = pbVar15 + 1;
      *(uint *)(param_2 + 4) = uVar13;
    }
    *param_2 = (ulong)pbVar15;
LAB_00bd65d8:
    uVar13 = (uint)(uVar19 >> 3) & 0x1fffffff;
    if (uVar13 == 999) {
      if ((int)uVar19 == 0x1f3a) goto LAB_00bd6728;
    }
    else if ((uVar13 == 1) && ((int)uVar19 == 8)) {
      pbVar15 = (byte *)*param_2;
      if ((pbVar15 < (byte *)param_2[1]) && (-1 < (char)*pbVar15)) {
        uVar19 = (ulong)*pbVar15;
        *param_2 = (ulong)(pbVar15 + 1);
      }
      else {
        auVar24 = FUN_00c09268(param_2);
        uVar19 = auVar24._0_8_;
        if ((auVar24._8_8_ & 1) == 0) {
          return 0;
        }
      }
      *(bool *)(param_1 + 0x50) = uVar19 != 0;
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
      pcVar16 = (char *)*param_2;
      if (((1 < (int)param_2[1] - (int)pcVar16) && (*pcVar16 == -0x46)) && (pcVar16[1] == '>')) {
        *param_2 = (ulong)(pcVar16 + 2);
LAB_00bd6728:
        uVar19 = param_2[7];
        *(int *)(param_2 + 7) = (int)uVar19 + -1;
        if ((int)uVar19 < 1) {
          return 0;
        }
        do {
          piVar17 = *(int **)(param_1 + 0x48);
          if (piVar17 == (int *)0x0) {
            iVar11 = *(int *)(param_1 + 0x40);
            iVar18 = *(int *)(param_1 + 0x44);
LAB_00bd677c:
            if (iVar11 <= iVar18) {
              FUN_00c11f04(param_1 + 0x38,(iVar18 - iVar11) + 1);
              piVar17 = *(int **)(param_1 + 0x48);
            }
            iVar18 = *piVar17;
LAB_00bd6798:
            *piVar17 = iVar18 + 1;
            uVar21 = FUN_00be1e9c(*(undefined8 *)(param_1 + 0x38));
            iVar11 = *(int *)(param_1 + 0x40);
            *(int *)(param_1 + 0x40) = iVar11 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar11 * 8 + 8) = uVar21;
          }
          else {
            iVar11 = *(int *)(param_1 + 0x40);
            iVar18 = *piVar17;
            if (iVar18 <= iVar11) {
              if (iVar18 == *(int *)(param_1 + 0x44)) goto LAB_00bd677c;
              goto LAB_00bd6798;
            }
            *(int *)(param_1 + 0x40) = iVar11 + 1;
            uVar21 = *(undefined8 *)(piVar17 + (long)iVar11 * 2 + 2);
          }
          pbVar15 = (byte *)*param_2;
          if (pbVar15 < (byte *)param_2[1]) {
            uVar19 = (ulong)*pbVar15;
            if ((char)*pbVar15 < '\0') goto LAB_00bd67ec;
            *param_2 = (ulong)(pbVar15 + 1);
          }
          else {
            uVar19 = 0;
LAB_00bd67ec:
            uVar19 = FUN_00c0944c(param_2,uVar19);
            if ((long)uVar19 < 0) {
              uVar19 = 0;
            }
          }
          iVar14 = (int)param_2[3];
          iVar3 = (int)param_2[5];
          iVar11 = (iVar14 - *(int *)((long)param_2 + 0x2c)) + ((int)*param_2 - (int)param_2[1]);
          iVar12 = (int)uVar19;
          uVar19 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
          param_2[1] = uVar19;
          iVar18 = 0x7fffffff;
          if (iVar12 <= 0x7fffffff - iVar11 && -1 < iVar12) {
            iVar18 = iVar11 + iVar12;
          }
          iVar11 = iVar3;
          if (iVar18 <= iVar3) {
            iVar11 = iVar18;
          }
          *(int *)(param_2 + 5) = iVar11;
          iVar18 = (int)param_2[6];
          if (iVar11 <= (int)param_2[6]) {
            iVar18 = iVar11;
          }
          iVar11 = iVar14 - iVar18;
          if (iVar11 == 0 || iVar14 < iVar18) {
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            *(int *)((long)param_2 + 0x2c) = iVar11;
            param_2[1] = uVar19 - (long)iVar11;
          }
          uVar19 = FUN_00bdadac(uVar21,param_2);
          if ((uVar19 & 1) == 0) {
            return 0;
          }
          *(int *)(param_2 + 5) = iVar3;
          cVar5 = *(char *)((long)param_2 + 0x24);
          pcVar16 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
          iVar18 = (int)param_2[3];
          iVar11 = (int)param_2[6];
          if (iVar3 <= (int)param_2[6]) {
            iVar11 = iVar3;
          }
          iVar14 = iVar18 - iVar11;
          param_2[1] = (ulong)pcVar16;
          if (iVar14 == 0 || iVar18 < iVar11) {
            iVar14 = 0;
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            pcVar16 = pcVar16 + -(long)iVar14;
            *(int *)((long)param_2 + 0x2c) = iVar14;
            param_2[1] = (ulong)pcVar16;
          }
          *(undefined1 *)((long)param_2 + 0x24) = 0;
          if (cVar5 == '\0') {
            return 0;
          }
          pcVar20 = (char *)*param_2;
          if ((((int)pcVar16 - (int)pcVar20 < 2) || (*pcVar20 != -0x46)) || (pcVar20[1] != '>'))
          goto LAB_00bd6904;
          *param_2 = (ulong)(pcVar20 + 2);
        } while( true );
      }
      goto LAB_00bd6570;
    }
  }
  else {
    uVar13 = 0;
LAB_00bd692c:
    iVar11 = FUN_00c096d0(param_2,uVar13);
    *(int *)(param_2 + 4) = iVar11;
    bVar10 = iVar11 - 1U < 0x3fff;
    uVar19 = (ulong)CONCAT14(bVar10,iVar11);
    if (bVar10) goto LAB_00bd65d8;
  }
  plVar9 = DAT_0483a8e8;
  uVar13 = (uint)uVar19;
  if ((uVar13 == 0) || ((uVar13 & 7) == 4)) {
    return 1;
  }
  if (uVar13 >> 6 < 0x7d) {
    if ((*puVar1 & 1) == 0) {
      uVar22 = FUN_00b7714c(puVar1);
    }
    else {
      uVar22 = *puVar1 & 0xfffffffffffffffe;
    }
    uVar19 = FUN_00c01b50(param_2,uVar19 & 0xffffffff,uVar22);
  }
  else {
    if ((*puVar1 & 1) == 0) {
      uStack_68 = FUN_00b7714c(puVar1);
    }
    else {
      uStack_68 = *puVar1 & 0xfffffffffffffffe;
    }
    plVar23 = (long *)param_2[8];
    local_70 = puVar2;
    if (plVar23 == (long *)0x0) {
      plStack_88 = plVar9;
      local_90 = puVar7;
    }
    else {
      uVar22 = param_2[9];
      uStack_78 = (**(code **)(*plVar9 + 0xb8))(plVar9);
      plStack_88 = plVar23;
      local_80 = uVar22;
      local_90 = puVar8;
    }
    local_90 = local_90 + 0x10;
    uVar19 = FUN_00c27388(param_1 + 8,uVar19 & 0xffffffff,param_2,&local_90,&local_70);
  }
  if ((uVar19 & 1) == 0) {
    return 0;
  }
  goto LAB_00bd6570;
LAB_00bd6904:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if ((pcVar16 == pcVar20) && ((iVar18 == iVar3 || (iVar14 != 0)))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_00bd6570;
}


