/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bd471c; name: FUN_00bd471c
 */


undefined8 FUN_00bd471c(long param_1,ulong *param_2)

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
  int iVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  byte *pbVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  char *pcVar19;
  char *pcVar20;
  undefined8 uVar21;
  long *plVar22;
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
LAB_00bd4784:
  do {
    pbVar14 = (byte *)*param_2;
    if (pbVar14 < (byte *)param_2[1]) {
      bVar6 = *pbVar14;
      uVar11 = (uint)bVar6;
      if ((char)bVar6 < '\x01') {
        if (((byte *)param_2[1] <= pbVar14 + 1) ||
           (bVar4 = pbVar14[1], -1 < (char)((bVar4 ^ 0x80) & bVar6))) goto LAB_00bd49f8;
        uVar16 = (uVar11 + (uint)bVar4 * 0x80) - 0x80;
        *(uint *)(param_2 + 4) = uVar16;
        pbVar14 = pbVar14 + 2;
      }
      else {
        uVar16 = (uint)bVar6;
        pbVar14 = pbVar14 + 1;
        *(uint *)(param_2 + 4) = uVar11;
      }
      *param_2 = (ulong)pbVar14;
LAB_00bd47ec:
      if (uVar16 == 0x1f3a) {
        uVar12 = param_2[7];
        *(int *)(param_2 + 7) = (int)uVar12 + -1;
        if ((int)uVar12 < 1) {
          return 0;
        }
        do {
          piVar15 = *(int **)(param_1 + 0x48);
          if (piVar15 == (int *)0x0) {
            iVar18 = *(int *)(param_1 + 0x40);
            iVar17 = *(int *)(param_1 + 0x44);
LAB_00bd4848:
            if (iVar18 <= iVar17) {
              FUN_00c11f04(param_1 + 0x38,(iVar17 - iVar18) + 1);
              piVar15 = *(int **)(param_1 + 0x48);
            }
            iVar17 = *piVar15;
LAB_00bd4864:
            *piVar15 = iVar17 + 1;
            uVar21 = FUN_00be1e9c(*(undefined8 *)(param_1 + 0x38));
            iVar18 = *(int *)(param_1 + 0x40);
            *(int *)(param_1 + 0x40) = iVar18 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar18 * 8 + 8) = uVar21;
          }
          else {
            iVar18 = *(int *)(param_1 + 0x40);
            iVar17 = *piVar15;
            if (iVar17 <= iVar18) {
              if (iVar17 == *(int *)(param_1 + 0x44)) goto LAB_00bd4848;
              goto LAB_00bd4864;
            }
            *(int *)(param_1 + 0x40) = iVar18 + 1;
            uVar21 = *(undefined8 *)(piVar15 + (long)iVar18 * 2 + 2);
          }
          pbVar14 = (byte *)*param_2;
          if (pbVar14 < (byte *)param_2[1]) {
            uVar12 = (ulong)*pbVar14;
            if ((char)*pbVar14 < '\0') goto LAB_00bd48b8;
            *param_2 = (ulong)(pbVar14 + 1);
          }
          else {
            uVar12 = 0;
LAB_00bd48b8:
            uVar12 = FUN_00c0944c(param_2,uVar12);
            if ((long)uVar12 < 0) {
              uVar12 = 0;
            }
          }
          iVar13 = (int)param_2[3];
          iVar3 = (int)param_2[5];
          iVar18 = (iVar13 - *(int *)((long)param_2 + 0x2c)) + ((int)*param_2 - (int)param_2[1]);
          iVar10 = (int)uVar12;
          uVar12 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
          param_2[1] = uVar12;
          iVar17 = 0x7fffffff;
          if (iVar10 <= 0x7fffffff - iVar18 && -1 < iVar10) {
            iVar17 = iVar18 + iVar10;
          }
          iVar18 = iVar3;
          if (iVar17 <= iVar3) {
            iVar18 = iVar17;
          }
          *(int *)(param_2 + 5) = iVar18;
          iVar17 = (int)param_2[6];
          if (iVar18 <= (int)param_2[6]) {
            iVar17 = iVar18;
          }
          iVar18 = iVar13 - iVar17;
          if (iVar18 == 0 || iVar13 < iVar17) {
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            *(int *)((long)param_2 + 0x2c) = iVar18;
            param_2[1] = uVar12 - (long)iVar18;
          }
          uVar12 = FUN_00bdadac(uVar21,param_2);
          if ((uVar12 & 1) == 0) {
            return 0;
          }
          *(int *)(param_2 + 5) = iVar3;
          cVar5 = *(char *)((long)param_2 + 0x24);
          pcVar19 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
          iVar17 = (int)param_2[3];
          iVar18 = (int)param_2[6];
          if (iVar3 <= (int)param_2[6]) {
            iVar18 = iVar3;
          }
          iVar13 = iVar17 - iVar18;
          param_2[1] = (ulong)pcVar19;
          if (iVar13 == 0 || iVar17 < iVar18) {
            iVar13 = 0;
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            pcVar19 = pcVar19 + -(long)iVar13;
            *(int *)((long)param_2 + 0x2c) = iVar13;
            param_2[1] = (ulong)pcVar19;
          }
          *(undefined1 *)((long)param_2 + 0x24) = 0;
          if (cVar5 == '\0') {
            return 0;
          }
          pcVar20 = (char *)*param_2;
          if ((((int)pcVar19 - (int)pcVar20 < 2) || (*pcVar20 != -0x46)) || (pcVar20[1] != '>'))
          goto LAB_00bd49d0;
          *param_2 = (ulong)(pcVar20 + 2);
        } while( true );
      }
    }
    else {
      uVar11 = 0;
LAB_00bd49f8:
      uVar16 = FUN_00c096d0(param_2,uVar11);
      *(uint *)(param_2 + 4) = uVar16;
      if (uVar16 - 1 < 0x3fff) goto LAB_00bd47ec;
    }
    plVar9 = DAT_0483a8b8;
    if (uVar16 == 0) {
      return 1;
    }
    if ((uVar16 & 7) == 4) {
      return 1;
    }
    if (uVar16 >> 6 < 0x7d) {
      if ((*puVar1 & 1) == 0) {
        uVar12 = FUN_00b7714c(puVar1);
      }
      else {
        uVar12 = *puVar1 & 0xfffffffffffffffe;
      }
      uVar12 = FUN_00c01b50(param_2,uVar16,uVar12);
    }
    else {
      if ((*puVar1 & 1) == 0) {
        uStack_68 = FUN_00b7714c(puVar1);
      }
      else {
        uStack_68 = *puVar1 & 0xfffffffffffffffe;
      }
      plVar22 = (long *)param_2[8];
      local_70 = puVar2;
      if (plVar22 == (long *)0x0) {
        plStack_88 = plVar9;
        local_90 = puVar7;
      }
      else {
        uVar12 = param_2[9];
        uStack_78 = (**(code **)(*plVar9 + 0xb8))(plVar9);
        plStack_88 = plVar22;
        local_80 = uVar12;
        local_90 = puVar8;
      }
      local_90 = local_90 + 0x10;
      uVar12 = FUN_00c27388(param_1 + 8,uVar16,param_2,&local_90,&local_70);
    }
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  } while( true );
LAB_00bd49d0:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if ((pcVar19 == pcVar20) && ((iVar17 == iVar3 || (iVar13 != 0)))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_00bd4784;
}


