/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bd204c; name: FUN_00bd204c
 */


undefined8 FUN_00bd204c(long param_1,ulong *param_2)

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
  int iVar13;
  byte *pbVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  byte *pbVar19;
  char *pcVar20;
  char *pcVar21;
  long *plVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
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
LAB_00bd20b0:
  pbVar14 = (byte *)*param_2;
  if (pbVar14 < (byte *)param_2[1]) {
    bVar6 = *pbVar14;
    uVar16 = (uint)bVar6;
    if ((char)bVar6 < '\x01') {
      if (((byte *)param_2[1] <= pbVar14 + 1) ||
         (bVar4 = pbVar14[1], -1 < (char)((bVar4 ^ 0x80) & bVar6))) goto LAB_00bd21c4;
      uVar16 = (uVar16 + (uint)bVar4 * 0x80) - 0x80;
      uVar18 = (ulong)uVar16;
      *(uint *)(param_2 + 4) = uVar16;
      pbVar14 = pbVar14 + 2;
    }
    else {
      uVar18 = (ulong)bVar6;
      pbVar14 = pbVar14 + 1;
      *(uint *)(param_2 + 4) = uVar16;
    }
    *param_2 = (ulong)pbVar14;
LAB_00bd21ec:
    uVar16 = (uint)(uVar18 >> 3) & 0x1fffffff;
    iVar11 = (int)uVar18;
    switch(uVar16) {
    case 1:
      if (iVar11 == 8) {
        pbVar14 = (byte *)*param_2;
        if ((pbVar14 < (byte *)param_2[1]) && (-1 < (char)*pbVar14)) {
          uVar18 = (ulong)*pbVar14;
          *param_2 = (ulong)(pbVar14 + 1);
        }
        else {
          auVar25 = FUN_00c09268(param_2);
          uVar18 = auVar25._0_8_;
          if ((auVar25._8_8_ & 1) == 0) {
            return 0;
          }
        }
        *(bool *)(param_1 + 0x50) = uVar18 != 0;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
        pbVar14 = (byte *)*param_2;
        pbVar19 = (byte *)param_2[1];
        if ((pbVar14 < pbVar19) && (*pbVar14 == 0x10)) {
          pbVar14 = pbVar14 + 1;
          *param_2 = (ulong)pbVar14;
LAB_00bd22cc:
          if ((pbVar14 < pbVar19) && (-1 < (char)*pbVar14)) {
            uVar18 = (ulong)*pbVar14;
            *param_2 = (ulong)(pbVar14 + 1);
          }
          else {
            auVar25 = FUN_00c09268(param_2);
            uVar18 = auVar25._0_8_;
            if ((auVar25._8_8_ & 1) == 0) {
              return 0;
            }
          }
          *(bool *)(param_1 + 0x51) = uVar18 != 0;
          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
          pbVar14 = (byte *)*param_2;
          pbVar19 = (byte *)param_2[1];
          if ((pbVar14 < pbVar19) && (*pbVar14 == 0x18)) {
            pbVar14 = pbVar14 + 1;
            *param_2 = (ulong)pbVar14;
LAB_00bd2330:
            if ((pbVar14 < pbVar19) && (-1 < (char)*pbVar14)) {
              uVar18 = (ulong)*pbVar14;
              *param_2 = (ulong)(pbVar14 + 1);
            }
            else {
              auVar25 = FUN_00c09268(param_2);
              uVar18 = auVar25._0_8_;
              if ((auVar25._8_8_ & 1) == 0) {
                return 0;
              }
            }
            *(bool *)(param_1 + 0x52) = uVar18 != 0;
            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 4;
            pbVar14 = (byte *)*param_2;
            pbVar19 = (byte *)param_2[1];
            if ((pbVar14 < pbVar19) && (*pbVar14 == 0x38)) {
              pbVar14 = pbVar14 + 1;
              *param_2 = (ulong)pbVar14;
LAB_00bd2394:
              if ((pbVar14 < pbVar19) && (-1 < (char)*pbVar14)) {
                uVar18 = (ulong)*pbVar14;
                *param_2 = (ulong)(pbVar14 + 1);
              }
              else {
                auVar25 = FUN_00c09268(param_2);
                uVar18 = auVar25._0_8_;
                if ((auVar25._8_8_ & 1) == 0) {
                  return 0;
                }
              }
              *(bool *)(param_1 + 0x53) = uVar18 != 0;
              *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
              pcVar20 = (char *)*param_2;
              if (((1 < (int)param_2[1] - (int)pcVar20) && (*pcVar20 == -0x46)) &&
                 (pcVar20[1] == '>')) {
                *param_2 = (ulong)(pcVar20 + 2);
LAB_00bd240c:
                uVar18 = param_2[7];
                *(int *)(param_2 + 7) = (int)uVar18 + -1;
                if ((int)uVar18 < 1) {
                  return 0;
                }
                do {
                  piVar15 = *(int **)(param_1 + 0x48);
                  if (piVar15 == (int *)0x0) {
                    iVar11 = *(int *)(param_1 + 0x40);
                    iVar17 = *(int *)(param_1 + 0x44);
LAB_00bd2460:
                    if (iVar11 <= iVar17) {
                      FUN_00c11f04(param_1 + 0x38,(iVar17 - iVar11) + 1);
                      piVar15 = *(int **)(param_1 + 0x48);
                    }
                    iVar17 = *piVar15;
LAB_00bd247c:
                    *piVar15 = iVar17 + 1;
                    uVar23 = FUN_00be1e9c(*(undefined8 *)(param_1 + 0x38));
                    iVar11 = *(int *)(param_1 + 0x40);
                    *(int *)(param_1 + 0x40) = iVar11 + 1;
                    *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar11 * 8 + 8) = uVar23;
                  }
                  else {
                    iVar11 = *(int *)(param_1 + 0x40);
                    iVar17 = *piVar15;
                    if (iVar17 <= iVar11) {
                      if (iVar17 == *(int *)(param_1 + 0x44)) goto LAB_00bd2460;
                      goto LAB_00bd247c;
                    }
                    *(int *)(param_1 + 0x40) = iVar11 + 1;
                    uVar23 = *(undefined8 *)(piVar15 + (long)iVar11 * 2 + 2);
                  }
                  pbVar14 = (byte *)*param_2;
                  if (pbVar14 < (byte *)param_2[1]) {
                    uVar18 = (ulong)*pbVar14;
                    if ((char)*pbVar14 < '\0') goto LAB_00bd24d0;
                    *param_2 = (ulong)(pbVar14 + 1);
                  }
                  else {
                    uVar18 = 0;
LAB_00bd24d0:
                    uVar18 = FUN_00c0944c(param_2,uVar18);
                    if ((long)uVar18 < 0) {
                      uVar18 = 0;
                    }
                  }
                  iVar13 = (int)param_2[3];
                  iVar3 = (int)param_2[5];
                  iVar11 = (iVar13 - *(int *)((long)param_2 + 0x2c)) +
                           ((int)*param_2 - (int)param_2[1]);
                  iVar12 = (int)uVar18;
                  uVar18 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
                  param_2[1] = uVar18;
                  iVar17 = 0x7fffffff;
                  if (iVar12 <= 0x7fffffff - iVar11 && -1 < iVar12) {
                    iVar17 = iVar11 + iVar12;
                  }
                  iVar11 = iVar3;
                  if (iVar17 <= iVar3) {
                    iVar11 = iVar17;
                  }
                  *(int *)(param_2 + 5) = iVar11;
                  iVar17 = (int)param_2[6];
                  if (iVar11 <= (int)param_2[6]) {
                    iVar17 = iVar11;
                  }
                  iVar11 = iVar13 - iVar17;
                  if (iVar11 == 0 || iVar13 < iVar17) {
                    *(undefined4 *)((long)param_2 + 0x2c) = 0;
                  }
                  else {
                    *(int *)((long)param_2 + 0x2c) = iVar11;
                    param_2[1] = uVar18 - (long)iVar11;
                  }
                  uVar18 = FUN_00bdadac(uVar23,param_2);
                  if ((uVar18 & 1) == 0) {
                    return 0;
                  }
                  *(int *)(param_2 + 5) = iVar3;
                  cVar5 = *(char *)((long)param_2 + 0x24);
                  pcVar20 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
                  iVar17 = (int)param_2[3];
                  iVar11 = (int)param_2[6];
                  if (iVar3 <= (int)param_2[6]) {
                    iVar11 = iVar3;
                  }
                  iVar13 = iVar17 - iVar11;
                  param_2[1] = (ulong)pcVar20;
                  if (iVar13 == 0 || iVar17 < iVar11) {
                    iVar13 = 0;
                    *(undefined4 *)((long)param_2 + 0x2c) = 0;
                  }
                  else {
                    pcVar20 = pcVar20 + -(long)iVar13;
                    *(int *)((long)param_2 + 0x2c) = iVar13;
                    param_2[1] = (ulong)pcVar20;
                  }
                  *(undefined1 *)((long)param_2 + 0x24) = 0;
                  if (cVar5 == '\0') {
                    return 0;
                  }
                  pcVar21 = (char *)*param_2;
                  if ((((int)pcVar20 - (int)pcVar21 < 2) || (*pcVar21 != -0x46)) ||
                     (pcVar21[1] != '>')) goto LAB_00bd25e8;
                  *param_2 = (ulong)(pcVar21 + 2);
                } while( true );
              }
            }
          }
        }
        goto LAB_00bd20b0;
      }
      break;
    case 2:
      if (iVar11 == 0x10) {
        pbVar14 = (byte *)*param_2;
        pbVar19 = (byte *)param_2[1];
        goto LAB_00bd22cc;
      }
      break;
    case 3:
      if (iVar11 == 0x18) {
        pbVar14 = (byte *)*param_2;
        pbVar19 = (byte *)param_2[1];
        goto LAB_00bd2330;
      }
      break;
    case 4:
    case 5:
    case 6:
      break;
    case 7:
      if (iVar11 == 0x38) {
        pbVar14 = (byte *)*param_2;
        pbVar19 = (byte *)param_2[1];
        goto LAB_00bd2394;
      }
      break;
    default:
      if ((uVar16 == 999) && (iVar11 == 0x1f3a)) goto LAB_00bd240c;
    }
  }
  else {
    uVar16 = 0;
LAB_00bd21c4:
    iVar11 = FUN_00c096d0(param_2,uVar16);
    *(int *)(param_2 + 4) = iVar11;
    bVar10 = iVar11 - 1U < 0x3fff;
    uVar18 = (ulong)CONCAT14(bVar10,iVar11);
    if (bVar10) goto LAB_00bd21ec;
  }
  plVar9 = DAT_0483a878;
  uVar16 = (uint)uVar18;
  if ((uVar16 == 0) || ((uVar16 & 7) == 4)) {
    return 1;
  }
  if (uVar16 >> 6 < 0x7d) {
    if ((*puVar1 & 1) == 0) {
      uVar24 = FUN_00b7714c(puVar1);
    }
    else {
      uVar24 = *puVar1 & 0xfffffffffffffffe;
    }
    uVar18 = FUN_00c01b50(param_2,uVar18 & 0xffffffff,uVar24);
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
      uVar24 = param_2[9];
      uStack_78 = (**(code **)(*plVar9 + 0xb8))(plVar9);
      plStack_88 = plVar22;
      local_80 = uVar24;
      local_90 = puVar8;
    }
    local_90 = local_90 + 0x10;
    uVar18 = FUN_00c27388(param_1 + 8,uVar18 & 0xffffffff,param_2,&local_90,&local_70);
  }
  if ((uVar18 & 1) == 0) {
    return 0;
  }
  goto LAB_00bd20b0;
LAB_00bd25e8:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if ((pcVar20 == pcVar21) && ((iVar17 == iVar3 || (iVar13 != 0)))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_00bd20b0;
}


