/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bd31ac; name: FUN_00bd31ac
 */


undefined8 FUN_00bd31ac(long param_1,ulong *param_2)

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
  byte *pbVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
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
LAB_00bd3218:
  pbVar14 = (byte *)*param_2;
  if (pbVar14 < (byte *)param_2[1]) {
    bVar6 = *pbVar14;
    uVar17 = (uint)bVar6;
    if ((char)bVar6 < '\x01') {
      if (((byte *)param_2[1] <= pbVar14 + 1) ||
         (bVar4 = pbVar14[1], -1 < (char)((bVar4 ^ 0x80) & bVar6))) goto LAB_00bd3330;
      uVar17 = (uVar17 + (uint)bVar4 * 0x80) - 0x80;
      uVar19 = (ulong)uVar17;
      *(uint *)(param_2 + 4) = uVar17;
      pbVar14 = pbVar14 + 2;
    }
    else {
      uVar19 = (ulong)bVar6;
      pbVar14 = pbVar14 + 1;
      *(uint *)(param_2 + 4) = uVar17;
    }
    *param_2 = (ulong)pbVar14;
LAB_00bd3358:
    uVar17 = (uint)(uVar19 >> 3) & 0x1fffffff;
    iVar11 = (int)uVar19;
    switch(uVar17) {
    case 1:
      if (iVar11 == 8) {
        pbVar14 = (byte *)*param_2;
        if (pbVar14 < (byte *)param_2[1]) {
          uVar19 = (ulong)*pbVar14;
          if ((char)*pbVar14 < '\0') goto LAB_00bd342c;
          *param_2 = (ulong)(pbVar14 + 1);
        }
        else {
          uVar19 = 0;
LAB_00bd342c:
          uVar19 = FUN_00c0944c(param_2,uVar19);
          if ((long)uVar19 < 0) {
            return 0;
          }
        }
        uVar17 = (uint)uVar19;
        if (uVar17 < 3) {
          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
          *(uint *)(param_1 + 0x38) = uVar17;
        }
        else {
          if ((*puVar1 & 1) == 0) {
            uVar19 = FUN_00b7714c(puVar1);
          }
          else {
            uVar19 = *puVar1 & 0xfffffffffffffffe;
          }
          FUN_00c001d0(uVar19,1,(long)(int)uVar17);
        }
        pbVar14 = (byte *)*param_2;
        pbVar15 = (byte *)param_2[1];
        if ((pbVar14 < pbVar15) && (*pbVar14 == 0x10)) {
          pbVar14 = pbVar14 + 1;
          *param_2 = (ulong)pbVar14;
LAB_00bd3494:
          if ((pbVar14 < pbVar15) && (-1 < (char)*pbVar14)) {
            uVar19 = (ulong)*pbVar14;
            *param_2 = (ulong)(pbVar14 + 1);
          }
          else {
            auVar25 = FUN_00c09268(param_2);
            uVar19 = auVar25._0_8_;
            if ((auVar25._8_8_ & 1) == 0) {
              return 0;
            }
          }
          *(bool *)(param_1 + 0x58) = uVar19 != 0;
          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
          pbVar14 = (byte *)*param_2;
          pbVar15 = (byte *)param_2[1];
          if ((pbVar14 < pbVar15) && (*pbVar14 == 0x18)) {
            pbVar14 = pbVar14 + 1;
            *param_2 = (ulong)pbVar14;
LAB_00bd34f8:
            if ((pbVar14 < pbVar15) && (-1 < (char)*pbVar14)) {
              uVar19 = (ulong)*pbVar14;
              *param_2 = (ulong)(pbVar14 + 1);
            }
            else {
              auVar25 = FUN_00c09268(param_2);
              uVar19 = auVar25._0_8_;
              if ((auVar25._8_8_ & 1) == 0) {
                return 0;
              }
            }
            *(bool *)(param_1 + 0x5a) = uVar19 != 0;
            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x10;
            pbVar14 = (byte *)*param_2;
            pbVar15 = (byte *)param_2[1];
            if ((pbVar14 < pbVar15) && (*pbVar14 == 0x28)) {
              pbVar14 = pbVar14 + 1;
              *param_2 = (ulong)pbVar14;
LAB_00bd355c:
              if ((pbVar14 < pbVar15) && (-1 < (char)*pbVar14)) {
                uVar19 = (ulong)*pbVar14;
                *param_2 = (ulong)(pbVar14 + 1);
              }
              else {
                auVar25 = FUN_00c09268(param_2);
                uVar19 = auVar25._0_8_;
                if ((auVar25._8_8_ & 1) == 0) {
                  return 0;
                }
              }
              *(bool *)(param_1 + 0x59) = uVar19 != 0;
              *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
              pbVar14 = (byte *)*param_2;
              pbVar15 = (byte *)param_2[1];
              if ((pbVar14 < pbVar15) && (*pbVar14 == 0x30)) {
                pbVar14 = pbVar14 + 1;
                *param_2 = (ulong)pbVar14;
LAB_00bd35c0:
                if (pbVar14 < pbVar15) {
                  uVar19 = (ulong)*pbVar14;
                  if ((char)*pbVar14 < '\0') goto LAB_00bd35e4;
                  *param_2 = (ulong)(pbVar14 + 1);
                }
                else {
                  uVar19 = 0;
LAB_00bd35e4:
                  uVar19 = FUN_00c0944c(param_2,uVar19);
                  if ((long)uVar19 < 0) {
                    return 0;
                  }
                }
                uVar17 = (uint)uVar19;
                if (uVar17 < 3) {
                  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 4;
                  *(uint *)(param_1 + 0x3c) = uVar17;
                }
                else {
                  if ((*puVar1 & 1) == 0) {
                    uVar19 = FUN_00b7714c(puVar1);
                  }
                  else {
                    uVar19 = *puVar1 & 0xfffffffffffffffe;
                  }
                  FUN_00c001d0(uVar19,6,(long)(int)uVar17);
                }
                pbVar14 = (byte *)*param_2;
                pbVar15 = (byte *)param_2[1];
                if ((pbVar14 < pbVar15) && (*pbVar14 == 0x50)) {
                  pbVar14 = pbVar14 + 1;
                  *param_2 = (ulong)pbVar14;
LAB_00bd364c:
                  if ((pbVar14 < pbVar15) && (-1 < (char)*pbVar14)) {
                    uVar19 = (ulong)*pbVar14;
                    *param_2 = (ulong)(pbVar14 + 1);
                  }
                  else {
                    auVar25 = FUN_00c09268(param_2);
                    uVar19 = auVar25._0_8_;
                    if ((auVar25._8_8_ & 1) == 0) {
                      return 0;
                    }
                  }
                  *(bool *)(param_1 + 0x5b) = uVar19 != 0;
                  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x20;
                  pcVar20 = (char *)*param_2;
                  if (((1 < (int)param_2[1] - (int)pcVar20) && (*pcVar20 == -0x46)) &&
                     (pcVar20[1] == '>')) {
                    *param_2 = (ulong)(pcVar20 + 2);
LAB_00bd36c4:
                    uVar19 = param_2[7];
                    *(int *)(param_2 + 7) = (int)uVar19 + -1;
                    if ((int)uVar19 < 1) {
                      return 0;
                    }
                    do {
                      piVar16 = *(int **)(param_1 + 0x50);
                      if (piVar16 == (int *)0x0) {
                        iVar11 = *(int *)(param_1 + 0x48);
                        iVar18 = *(int *)(param_1 + 0x4c);
LAB_00bd3718:
                        if (iVar11 <= iVar18) {
                          FUN_00c11f04(param_1 + 0x40,(iVar18 - iVar11) + 1);
                          piVar16 = *(int **)(param_1 + 0x50);
                        }
                        iVar18 = *piVar16;
LAB_00bd3734:
                        *piVar16 = iVar18 + 1;
                        uVar23 = FUN_00be1e9c(*(undefined8 *)(param_1 + 0x40));
                        iVar11 = *(int *)(param_1 + 0x48);
                        *(int *)(param_1 + 0x48) = iVar11 + 1;
                        *(undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar11 * 8 + 8) = uVar23;
                      }
                      else {
                        iVar11 = *(int *)(param_1 + 0x48);
                        iVar18 = *piVar16;
                        if (iVar18 <= iVar11) {
                          if (iVar18 == *(int *)(param_1 + 0x4c)) goto LAB_00bd3718;
                          goto LAB_00bd3734;
                        }
                        *(int *)(param_1 + 0x48) = iVar11 + 1;
                        uVar23 = *(undefined8 *)(piVar16 + (long)iVar11 * 2 + 2);
                      }
                      pbVar14 = (byte *)*param_2;
                      if (pbVar14 < (byte *)param_2[1]) {
                        uVar19 = (ulong)*pbVar14;
                        if ((char)*pbVar14 < '\0') goto LAB_00bd3788;
                        *param_2 = (ulong)(pbVar14 + 1);
                      }
                      else {
                        uVar19 = 0;
LAB_00bd3788:
                        uVar19 = FUN_00c0944c(param_2,uVar19);
                        if ((long)uVar19 < 0) {
                          uVar19 = 0;
                        }
                      }
                      iVar13 = (int)param_2[3];
                      iVar3 = (int)param_2[5];
                      iVar11 = (iVar13 - *(int *)((long)param_2 + 0x2c)) +
                               ((int)*param_2 - (int)param_2[1]);
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
                      iVar11 = iVar13 - iVar18;
                      if (iVar11 == 0 || iVar13 < iVar18) {
                        *(undefined4 *)((long)param_2 + 0x2c) = 0;
                      }
                      else {
                        *(int *)((long)param_2 + 0x2c) = iVar11;
                        param_2[1] = uVar19 - (long)iVar11;
                      }
                      uVar19 = FUN_00bdadac(uVar23,param_2);
                      if ((uVar19 & 1) == 0) {
                        return 0;
                      }
                      *(int *)(param_2 + 5) = iVar3;
                      cVar5 = *(char *)((long)param_2 + 0x24);
                      pcVar20 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
                      iVar18 = (int)param_2[3];
                      iVar11 = (int)param_2[6];
                      if (iVar3 <= (int)param_2[6]) {
                        iVar11 = iVar3;
                      }
                      iVar13 = iVar18 - iVar11;
                      param_2[1] = (ulong)pcVar20;
                      if (iVar13 == 0 || iVar18 < iVar11) {
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
                         (pcVar21[1] != '>')) goto LAB_00bd38a0;
                      *param_2 = (ulong)(pcVar21 + 2);
                    } while( true );
                  }
                }
              }
            }
          }
        }
        goto LAB_00bd3218;
      }
      break;
    case 2:
      if (iVar11 == 0x10) {
        pbVar14 = (byte *)*param_2;
        pbVar15 = (byte *)param_2[1];
        goto LAB_00bd3494;
      }
      break;
    case 3:
      if (iVar11 == 0x18) {
        pbVar14 = (byte *)*param_2;
        pbVar15 = (byte *)param_2[1];
        goto LAB_00bd34f8;
      }
      break;
    case 4:
    case 7:
    case 8:
    case 9:
      break;
    case 5:
      if (iVar11 == 0x28) {
        pbVar14 = (byte *)*param_2;
        pbVar15 = (byte *)param_2[1];
        goto LAB_00bd355c;
      }
      break;
    case 6:
      if (iVar11 == 0x30) {
        pbVar14 = (byte *)*param_2;
        pbVar15 = (byte *)param_2[1];
        goto LAB_00bd35c0;
      }
      break;
    case 10:
      if (iVar11 == 0x50) {
        pbVar14 = (byte *)*param_2;
        pbVar15 = (byte *)param_2[1];
        goto LAB_00bd364c;
      }
      break;
    default:
      if ((uVar17 == 999) && (iVar11 == 0x1f3a)) goto LAB_00bd36c4;
    }
  }
  else {
    uVar17 = 0;
LAB_00bd3330:
    iVar11 = FUN_00c096d0(param_2,uVar17);
    *(int *)(param_2 + 4) = iVar11;
    bVar10 = iVar11 - 1U < 0x3fff;
    uVar19 = (ulong)CONCAT14(bVar10,iVar11);
    if (bVar10) goto LAB_00bd3358;
  }
  plVar9 = DAT_0483a890;
  uVar17 = (uint)uVar19;
  if ((uVar17 == 0) || ((uVar17 & 7) == 4)) {
    return 1;
  }
  if (uVar17 >> 6 < 0x7d) {
    if ((*puVar1 & 1) == 0) {
      uVar24 = FUN_00b7714c(puVar1);
    }
    else {
      uVar24 = *puVar1 & 0xfffffffffffffffe;
    }
    uVar19 = FUN_00c01b50(param_2,uVar19 & 0xffffffff,uVar24);
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
    uVar19 = FUN_00c27388(param_1 + 8,uVar19 & 0xffffffff,param_2,&local_90,&local_70);
  }
  if ((uVar19 & 1) == 0) {
    return 0;
  }
  goto LAB_00bd3218;
LAB_00bd38a0:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if ((pcVar20 == pcVar21) && ((iVar18 == iVar3 || (iVar13 != 0)))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_00bd3218;
}


