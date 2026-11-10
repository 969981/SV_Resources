/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bbacb0; name: FUN_00bbacb0
 */


undefined8 FUN_00bbacb0(long param_1,ulong *param_2)

{
  int *piVar1;
  int *piVar2;
  ulong *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 uVar19;
  char *pcVar20;
  long *plVar21;
  byte *pbVar22;
  int iVar23;
  char *pcVar24;
  byte *pbVar25;
  byte *pbVar26;
  undefined8 *puVar27;
  undefined *local_78;
  undefined *local_70;
  undefined1 local_68;
  
  puVar10 = PTR_DAT_047daba0;
  piVar1 = (int *)(param_1 + 0x50);
  piVar2 = (int *)(param_1 + 0x40);
  puVar3 = param_2 + 7;
  puVar4 = PTR_DAT_047daba0 + 0x10;
LAB_00bbad3c:
  pbVar26 = (byte *)*param_2;
  if ((byte *)param_2[1] <= pbVar26) {
    uVar15 = 0;
LAB_00bbad74:
    iVar12 = FUN_00c096d0(param_2,uVar15);
    bVar11 = iVar12 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar12;
    uVar15 = (ulong)CONCAT14(bVar11,iVar12);
    if (bVar11) goto LAB_00bbadc8;
    goto switchD_00bbade4_default;
  }
  bVar8 = *pbVar26;
  uVar15 = (ulong)(uint)bVar8;
  if ((char)bVar8 < '\x01') goto LAB_00bbad74;
  *(uint *)(param_2 + 4) = (uint)bVar8;
  *param_2 = (ulong)(pbVar26 + 1);
LAB_00bbadc8:
  iVar12 = (int)uVar15;
  switch((uint)(uVar15 >> 3) & 0x1fffffff) {
  case 1:
    if (iVar12 == 10) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      lVar16 = *(long *)(param_1 + 0x18);
      if (lVar16 == *(long *)PTR_DAT_047dabb0) {
        FUN_00b6eb88((long *)(param_1 + 0x18),*(long *)PTR_DAT_047dabb0);
        lVar16 = *(long *)(param_1 + 0x18);
      }
      uVar15 = FUN_00c0d824(param_2,lVar16);
      if ((uVar15 & 1) == 0) {
        return 0;
      }
      pcVar24 = (char *)*param_2;
      if ((pcVar24 < (char *)param_2[1]) && (*pcVar24 == '\x12')) {
        *param_2 = (ulong)(pcVar24 + 1);
LAB_00bbaed4:
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
        lVar16 = *(long *)(param_1 + 0x20);
        if (lVar16 == *(long *)PTR_DAT_047dabb0) {
          FUN_00b6eb88((long *)(param_1 + 0x20),*(long *)PTR_DAT_047dabb0);
          lVar16 = *(long *)(param_1 + 0x20);
        }
        uVar15 = FUN_00c0d824(param_2,lVar16);
        if ((uVar15 & 1) == 0) {
          return 0;
        }
        pcVar24 = (char *)*param_2;
        if ((pcVar24 < (char *)param_2[1]) && (*pcVar24 == '\x1a')) {
          do {
            *param_2 = (ulong)(pcVar24 + 1);
LAB_00bbafcc:
            piVar18 = *(int **)(param_1 + 0x38);
            if (piVar18 == (int *)0x0) {
              iVar12 = *(int *)(param_1 + 0x30);
              iVar23 = *(int *)(param_1 + 0x34);
LAB_00bbb010:
              if (iVar12 <= iVar23) {
                FUN_00c11f04((long *)(param_1 + 0x28),(iVar23 - iVar12) + 1);
                piVar18 = *(int **)(param_1 + 0x38);
              }
              iVar23 = *piVar18;
LAB_00bbb02c:
              *piVar18 = iVar23 + 1;
              lVar16 = *(long *)(param_1 + 0x28);
              if (lVar16 == 0) {
                lVar16 = tpidr_el0;
                plVar21 = *(long **)(lVar16 + 0x30);
                if (plVar21 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar21 = DAT_04859430;
                  *(long **)(lVar16 + 0x30) = DAT_04859430;
                }
                puVar27 = (undefined8 *)(**(code **)(*plVar21 + 0x10))(plVar21,0x18,8);
                *puVar27 = 0;
                puVar27[1] = 0;
                puVar27[2] = 0;
              }
              else {
                puVar27 = (undefined8 *)FUN_00c0e238(lVar16,0,0x18);
                *puVar27 = 0;
                puVar27[1] = 0;
                puVar27[2] = 0;
                FUN_00c0e13c(lVar16,puVar27,PTR_LAB_047dabf0);
              }
              iVar12 = *(int *)(param_1 + 0x30);
              *(int *)(param_1 + 0x30) = iVar12 + 1;
              *(undefined8 **)(*(long *)(param_1 + 0x38) + (long)iVar12 * 8 + 8) = puVar27;
            }
            else {
              iVar12 = *(int *)(param_1 + 0x30);
              iVar23 = *piVar18;
              if (iVar23 <= iVar12) {
                if (iVar23 == *(int *)(param_1 + 0x34)) goto LAB_00bbb010;
                goto LAB_00bbb02c;
              }
              *(int *)(param_1 + 0x30) = iVar12 + 1;
              puVar27 = *(undefined8 **)(piVar18 + (long)iVar12 * 2 + 2);
            }
            uVar15 = FUN_00c0d824(param_2,puVar27);
            if ((uVar15 & 1) == 0) {
              return 0;
            }
            pcVar24 = (char *)*param_2;
            if ((char *)param_2[1] <= pcVar24) goto LAB_00bbad3c;
          } while (*pcVar24 == '\x1a');
          if (*pcVar24 == '\"') {
            *param_2 = (ulong)(pcVar24 + 1);
LAB_00bbb104:
            uVar15 = *puVar3;
            *(int *)puVar3 = (int)uVar15 + -1;
            if ((int)uVar15 < 1) {
              return 0;
            }
            do {
              piVar18 = *(int **)(param_1 + 0x70);
              if (piVar18 == (int *)0x0) {
                iVar12 = *(int *)(param_1 + 0x68);
                iVar23 = *(int *)(param_1 + 0x6c);
LAB_00bbb158:
                if (iVar12 <= iVar23) {
                  FUN_00c11f04(param_1 + 0x60,(iVar23 - iVar12) + 1);
                  piVar18 = *(int **)(param_1 + 0x70);
                }
                iVar23 = *piVar18;
LAB_00bbb174:
                *piVar18 = iVar23 + 1;
                uVar19 = FUN_00ba8784(0,*(undefined8 *)(param_1 + 0x60));
                iVar12 = *(int *)(param_1 + 0x68);
                *(int *)(param_1 + 0x68) = iVar12 + 1;
                *(undefined8 *)(*(long *)(param_1 + 0x70) + (long)iVar12 * 8 + 8) = uVar19;
              }
              else {
                iVar12 = *(int *)(param_1 + 0x68);
                iVar23 = *piVar18;
                if (iVar23 <= iVar12) {
                  if (iVar23 == *(int *)(param_1 + 0x6c)) goto LAB_00bbb158;
                  goto LAB_00bbb174;
                }
                *(int *)(param_1 + 0x68) = iVar12 + 1;
                uVar19 = *(undefined8 *)(piVar18 + (long)iVar12 * 2 + 2);
              }
              pbVar26 = (byte *)*param_2;
              if (pbVar26 < (byte *)param_2[1]) {
                uVar15 = (ulong)*pbVar26;
                if ((char)*pbVar26 < '\0') goto LAB_00bbb1cc;
                *param_2 = (ulong)(pbVar26 + 1);
              }
              else {
                uVar15 = 0;
LAB_00bbb1cc:
                uVar15 = FUN_00c0944c(param_2,uVar15);
                if ((long)uVar15 < 0) {
                  uVar15 = 0;
                }
              }
              iVar6 = (int)param_2[3];
              iVar5 = (int)param_2[5];
              iVar12 = (iVar6 - *(int *)((long)param_2 + 0x2c)) + ((int)*param_2 - (int)param_2[1]);
              iVar14 = (int)uVar15;
              uVar15 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
              param_2[1] = uVar15;
              iVar23 = 0x7fffffff;
              if (iVar14 <= 0x7fffffff - iVar12 && -1 < iVar14) {
                iVar23 = iVar12 + iVar14;
              }
              iVar12 = iVar5;
              if (iVar23 <= iVar5) {
                iVar12 = iVar23;
              }
              *(int *)(param_2 + 5) = iVar12;
              iVar23 = (int)param_2[6];
              if (iVar12 <= (int)param_2[6]) {
                iVar23 = iVar12;
              }
              iVar12 = iVar6 - iVar23;
              if (iVar12 == 0 || iVar6 < iVar23) {
                *(undefined4 *)((long)param_2 + 0x2c) = 0;
              }
              else {
                *(int *)((long)param_2 + 0x2c) = iVar12;
                param_2[1] = uVar15 - (long)iVar12;
              }
              uVar15 = FUN_00bc0e18(uVar19,param_2);
              if ((uVar15 & 1) == 0) {
                return 0;
              }
              pcVar24 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
              iVar12 = (int)param_2[6];
              if (iVar5 <= (int)param_2[6]) {
                iVar12 = iVar5;
              }
              cVar7 = *(char *)((long)param_2 + 0x24);
              *(int *)(param_2 + 5) = iVar5;
              param_2[1] = (ulong)pcVar24;
              iVar23 = (int)param_2[3] - iVar12;
              if (iVar23 == 0 || (int)param_2[3] < iVar12) {
                *(undefined4 *)((long)param_2 + 0x2c) = 0;
              }
              else {
                pcVar24 = pcVar24 + -(long)iVar23;
                *(int *)((long)param_2 + 0x2c) = iVar23;
                param_2[1] = (ulong)pcVar24;
              }
              *(undefined1 *)((long)param_2 + 0x24) = 0;
              if (cVar7 == '\0') {
                return 0;
              }
              pcVar20 = (char *)*param_2;
              if (pcVar24 <= pcVar20) goto LAB_00bbb33c;
              if (*pcVar20 != '\"') goto LAB_00bbb2d0;
              *param_2 = (ulong)(pcVar20 + 1);
            } while( true );
          }
        }
      }
      goto LAB_00bbad3c;
    }
    break;
  case 2:
    if (iVar12 == 0x12) goto LAB_00bbaed4;
    break;
  case 3:
    if (iVar12 == 0x1a) goto LAB_00bbafcc;
    break;
  case 4:
    if (iVar12 == 0x22) goto LAB_00bbb104;
    break;
  case 5:
    if (iVar12 == 0x2a) {
      uVar15 = *puVar3;
      *(int *)puVar3 = (int)uVar15 + -1;
      if (0 < (int)uVar15) goto LAB_00bbb354;
      return 0;
    }
    break;
  case 6:
    if (iVar12 == 0x32) {
      uVar15 = *puVar3;
      *(int *)puVar3 = (int)uVar15 + -1;
      if (0 < (int)uVar15) goto LAB_00bbb514;
      return 0;
    }
    break;
  case 7:
    if (iVar12 == 0x3a) {
      uVar15 = *puVar3;
      *(int *)puVar3 = (int)uVar15 + -1;
      if (0 < (int)uVar15) goto LAB_00bbb6d4;
      return 0;
    }
    break;
  case 8:
    if (iVar12 != 0x42) break;
    goto LAB_00bbb8a4;
  case 9:
    if (iVar12 != 0x4a) break;
    goto LAB_00bbbb04;
  case 10:
    if (iVar12 == 0x50) {
      pbVar26 = (byte *)*param_2;
      pbVar22 = (byte *)param_2[1];
      goto LAB_00bbbd4c;
    }
    if (iVar12 == 0x52) {
      uVar15 = FUN_00bbc03c(param_2,piVar2);
      if ((uVar15 & 1) != 0) goto LAB_00bbbe40;
      return 0;
    }
    break;
  case 0xb:
    if (iVar12 == 0x58) {
      pbVar26 = (byte *)*param_2;
      pbVar22 = (byte *)param_2[1];
      goto LAB_00bbbe6c;
    }
    if (iVar12 == 0x5a) {
      uVar15 = FUN_00bbc03c(param_2,piVar1);
      if ((uVar15 & 1) != 0) goto LAB_00bbbf64;
      return 0;
    }
    break;
  case 0xc:
    if (iVar12 != 0x62) break;
LAB_00bbbf98:
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x800;
    lVar16 = *(long *)(param_1 + 0xd0);
    if (lVar16 == *(long *)PTR_DAT_047dabb0) {
      FUN_00b6eb88((long *)(param_1 + 0xd0),*(long *)PTR_DAT_047dabb0);
      lVar16 = *(long *)(param_1 + 0xd0);
    }
    uVar15 = FUN_00c0d824(param_2,lVar16);
    if ((uVar15 & 1) == 0) {
      return 0;
    }
    if ((*param_2 == param_2[1]) &&
       ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined1 *)((long)param_2 + 0x24) = 1;
      return 1;
    }
    goto LAB_00bbad3c;
  }
switchD_00bbade4_default:
  if (((uint)uVar15 == 0) || (((uint)uVar15 & 7) == 4)) {
    return 1;
  }
  uVar17 = *(ulong *)(param_1 + 8);
  if ((uVar17 & 1) == 0) {
    uVar17 = FUN_00b7714c((ulong *)(param_1 + 8));
  }
  else {
    uVar17 = uVar17 & 0xfffffffffffffffe;
  }
  uVar15 = FUN_00c01b50(param_2,uVar15 & 0xffffffff,uVar17);
  if ((uVar15 & 1) == 0) {
    return 0;
  }
  goto LAB_00bbad3c;
LAB_00bbb2d0:
  if (*pcVar20 == '*') {
    do {
      *param_2 = (ulong)(pcVar20 + 1);
LAB_00bbb354:
      piVar18 = *(int **)(param_1 + 0x88);
      if (piVar18 == (int *)0x0) {
        iVar12 = *(int *)(param_1 + 0x80);
        iVar23 = *(int *)(param_1 + 0x84);
LAB_00bbb398:
        if (iVar12 <= iVar23) {
          FUN_00c11f04(param_1 + 0x78,(iVar23 - iVar12) + 1);
          piVar18 = *(int **)(param_1 + 0x88);
        }
        iVar23 = *piVar18;
LAB_00bbb3b4:
        *piVar18 = iVar23 + 1;
        uVar19 = FUN_00ba888c(0,*(undefined8 *)(param_1 + 0x78));
        iVar12 = *(int *)(param_1 + 0x80);
        *(int *)(param_1 + 0x80) = iVar12 + 1;
        *(undefined8 *)(*(long *)(param_1 + 0x88) + (long)iVar12 * 8 + 8) = uVar19;
      }
      else {
        iVar12 = *(int *)(param_1 + 0x80);
        iVar23 = *piVar18;
        if (iVar23 <= iVar12) {
          if (iVar23 == *(int *)(param_1 + 0x84)) goto LAB_00bbb398;
          goto LAB_00bbb3b4;
        }
        *(int *)(param_1 + 0x80) = iVar12 + 1;
        uVar19 = *(undefined8 *)(piVar18 + (long)iVar12 * 2 + 2);
      }
      pbVar26 = (byte *)*param_2;
      if (pbVar26 < (byte *)param_2[1]) {
        uVar15 = (ulong)*pbVar26;
        if ((char)*pbVar26 < '\0') goto LAB_00bbb40c;
        *param_2 = (ulong)(pbVar26 + 1);
      }
      else {
        uVar15 = 0;
LAB_00bbb40c:
        uVar15 = FUN_00c0944c(param_2,uVar15);
        if ((long)uVar15 < 0) {
          uVar15 = 0;
        }
      }
      iVar6 = (int)param_2[3];
      iVar5 = (int)param_2[5];
      iVar12 = (iVar6 - *(int *)((long)param_2 + 0x2c)) + ((int)*param_2 - (int)param_2[1]);
      iVar14 = (int)uVar15;
      uVar15 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
      param_2[1] = uVar15;
      iVar23 = 0x7fffffff;
      if (iVar14 <= 0x7fffffff - iVar12 && -1 < iVar14) {
        iVar23 = iVar12 + iVar14;
      }
      iVar12 = iVar5;
      if (iVar23 <= iVar5) {
        iVar12 = iVar23;
      }
      *(int *)(param_2 + 5) = iVar12;
      iVar23 = (int)param_2[6];
      if (iVar12 <= (int)param_2[6]) {
        iVar23 = iVar12;
      }
      iVar12 = iVar6 - iVar23;
      if (iVar12 == 0 || iVar6 < iVar23) {
        *(undefined4 *)((long)param_2 + 0x2c) = 0;
      }
      else {
        *(int *)((long)param_2 + 0x2c) = iVar12;
        param_2[1] = uVar15 - (long)iVar12;
      }
      uVar15 = FUN_00bc8a0c(uVar19,param_2);
      if ((uVar15 & 1) == 0) {
        return 0;
      }
      pcVar24 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
      iVar12 = (int)param_2[6];
      if (iVar5 <= (int)param_2[6]) {
        iVar12 = iVar5;
      }
      cVar7 = *(char *)((long)param_2 + 0x24);
      *(int *)(param_2 + 5) = iVar5;
      param_2[1] = (ulong)pcVar24;
      iVar23 = (int)param_2[3] - iVar12;
      if (iVar23 == 0 || (int)param_2[3] < iVar12) {
        *(undefined4 *)((long)param_2 + 0x2c) = 0;
      }
      else {
        pcVar24 = pcVar24 + -(long)iVar23;
        *(int *)((long)param_2 + 0x2c) = iVar23;
        param_2[1] = (ulong)pcVar24;
      }
      *(undefined1 *)((long)param_2 + 0x24) = 0;
      if (cVar7 == '\0') {
        return 0;
      }
      pcVar20 = (char *)*param_2;
      if (pcVar24 <= pcVar20) goto LAB_00bbb33c;
    } while (*pcVar20 == '*');
    if (*pcVar20 == '2') {
      do {
        *param_2 = (ulong)(pcVar20 + 1);
LAB_00bbb514:
        piVar18 = *(int **)(param_1 + 0xa0);
        if (piVar18 == (int *)0x0) {
          iVar12 = *(int *)(param_1 + 0x98);
          iVar23 = *(int *)(param_1 + 0x9c);
LAB_00bbb558:
          if (iVar12 <= iVar23) {
            FUN_00c11f04(param_1 + 0x90,(iVar23 - iVar12) + 1);
            piVar18 = *(int **)(param_1 + 0xa0);
          }
          iVar23 = *piVar18;
LAB_00bbb574:
          *piVar18 = iVar23 + 1;
          uVar19 = FUN_00ba898c(0,*(undefined8 *)(param_1 + 0x90));
          iVar12 = *(int *)(param_1 + 0x98);
          *(int *)(param_1 + 0x98) = iVar12 + 1;
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + (long)iVar12 * 8 + 8) = uVar19;
        }
        else {
          iVar12 = *(int *)(param_1 + 0x98);
          iVar23 = *piVar18;
          if (iVar23 <= iVar12) {
            if (iVar23 == *(int *)(param_1 + 0x9c)) goto LAB_00bbb558;
            goto LAB_00bbb574;
          }
          *(int *)(param_1 + 0x98) = iVar12 + 1;
          uVar19 = *(undefined8 *)(piVar18 + (long)iVar12 * 2 + 2);
        }
        pbVar26 = (byte *)*param_2;
        if (pbVar26 < (byte *)param_2[1]) {
          uVar15 = (ulong)*pbVar26;
          if ((char)*pbVar26 < '\0') goto LAB_00bbb5cc;
          *param_2 = (ulong)(pbVar26 + 1);
        }
        else {
          uVar15 = 0;
LAB_00bbb5cc:
          uVar15 = FUN_00c0944c(param_2,uVar15);
          if ((long)uVar15 < 0) {
            uVar15 = 0;
          }
        }
        iVar6 = (int)param_2[3];
        iVar5 = (int)param_2[5];
        iVar12 = (iVar6 - *(int *)((long)param_2 + 0x2c)) + ((int)*param_2 - (int)param_2[1]);
        iVar14 = (int)uVar15;
        uVar15 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
        param_2[1] = uVar15;
        iVar23 = 0x7fffffff;
        if (iVar14 <= 0x7fffffff - iVar12 && -1 < iVar14) {
          iVar23 = iVar12 + iVar14;
        }
        iVar12 = iVar5;
        if (iVar23 <= iVar5) {
          iVar12 = iVar23;
        }
        *(int *)(param_2 + 5) = iVar12;
        iVar23 = (int)param_2[6];
        if (iVar12 <= (int)param_2[6]) {
          iVar23 = iVar12;
        }
        iVar12 = iVar6 - iVar23;
        if (iVar12 == 0 || iVar6 < iVar23) {
          *(undefined4 *)((long)param_2 + 0x2c) = 0;
        }
        else {
          *(int *)((long)param_2 + 0x2c) = iVar12;
          param_2[1] = uVar15 - (long)iVar12;
        }
        uVar15 = FUN_00bcc048(uVar19,param_2);
        if ((uVar15 & 1) == 0) {
          return 0;
        }
        pcVar24 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
        iVar12 = (int)param_2[6];
        if (iVar5 <= (int)param_2[6]) {
          iVar12 = iVar5;
        }
        cVar7 = *(char *)((long)param_2 + 0x24);
        *(int *)(param_2 + 5) = iVar5;
        param_2[1] = (ulong)pcVar24;
        iVar23 = (int)param_2[3] - iVar12;
        if (iVar23 == 0 || (int)param_2[3] < iVar12) {
          *(undefined4 *)((long)param_2 + 0x2c) = 0;
        }
        else {
          pcVar24 = pcVar24 + -(long)iVar23;
          *(int *)((long)param_2 + 0x2c) = iVar23;
          param_2[1] = (ulong)pcVar24;
        }
        *(undefined1 *)((long)param_2 + 0x24) = 0;
        if (cVar7 == '\0') {
          return 0;
        }
        pcVar20 = (char *)*param_2;
        if (pcVar24 <= pcVar20) goto LAB_00bbb33c;
      } while (*pcVar20 == '2');
      if (*pcVar20 == ':') {
        do {
          *param_2 = (ulong)(pcVar20 + 1);
LAB_00bbb6d4:
          piVar18 = *(int **)(param_1 + 0xb8);
          if (piVar18 == (int *)0x0) {
            iVar12 = *(int *)(param_1 + 0xb0);
            iVar23 = *(int *)(param_1 + 0xb4);
LAB_00bbb718:
            if (iVar12 <= iVar23) {
              FUN_00c11f04(param_1 + 0xa8,(iVar23 - iVar12) + 1);
              piVar18 = *(int **)(param_1 + 0xb8);
            }
            iVar23 = *piVar18;
LAB_00bbb734:
            *piVar18 = iVar23 + 1;
            uVar19 = FUN_00ba8a8c(0,*(undefined8 *)(param_1 + 0xa8));
            iVar12 = *(int *)(param_1 + 0xb0);
            *(int *)(param_1 + 0xb0) = iVar12 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0xb8) + (long)iVar12 * 8 + 8) = uVar19;
          }
          else {
            iVar12 = *(int *)(param_1 + 0xb0);
            iVar23 = *piVar18;
            if (iVar23 <= iVar12) {
              if (iVar23 == *(int *)(param_1 + 0xb4)) goto LAB_00bbb718;
              goto LAB_00bbb734;
            }
            *(int *)(param_1 + 0xb0) = iVar12 + 1;
            uVar19 = *(undefined8 *)(piVar18 + (long)iVar12 * 2 + 2);
          }
          pbVar26 = (byte *)*param_2;
          if (pbVar26 < (byte *)param_2[1]) {
            uVar15 = (ulong)*pbVar26;
            if ((char)*pbVar26 < '\0') goto LAB_00bbb78c;
            *param_2 = (ulong)(pbVar26 + 1);
          }
          else {
            uVar15 = 0;
LAB_00bbb78c:
            uVar15 = FUN_00c0944c(param_2,uVar15);
            if ((long)uVar15 < 0) {
              uVar15 = 0;
            }
          }
          iVar6 = (int)param_2[3];
          iVar5 = (int)param_2[5];
          iVar12 = (iVar6 - *(int *)((long)param_2 + 0x2c)) + ((int)*param_2 - (int)param_2[1]);
          iVar14 = (int)uVar15;
          uVar15 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
          param_2[1] = uVar15;
          iVar23 = 0x7fffffff;
          if (iVar14 <= 0x7fffffff - iVar12 && -1 < iVar14) {
            iVar23 = iVar12 + iVar14;
          }
          iVar12 = iVar5;
          if (iVar23 <= iVar5) {
            iVar12 = iVar23;
          }
          *(int *)(param_2 + 5) = iVar12;
          iVar23 = (int)param_2[6];
          if (iVar12 <= (int)param_2[6]) {
            iVar23 = iVar12;
          }
          iVar12 = iVar6 - iVar23;
          if (iVar12 == 0 || iVar6 < iVar23) {
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            *(int *)((long)param_2 + 0x2c) = iVar12;
            param_2[1] = uVar15 - (long)iVar12;
          }
          uVar15 = FUN_00bc4c38(uVar19,param_2);
          if ((uVar15 & 1) == 0) {
            return 0;
          }
          pcVar24 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
          iVar12 = (int)param_2[6];
          if (iVar5 <= (int)param_2[6]) {
            iVar12 = iVar5;
          }
          cVar7 = *(char *)((long)param_2 + 0x24);
          *(int *)(param_2 + 5) = iVar5;
          param_2[1] = (ulong)pcVar24;
          iVar23 = (int)param_2[3] - iVar12;
          if (iVar23 == 0 || (int)param_2[3] < iVar12) {
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            pcVar24 = pcVar24 + -(long)iVar23;
            *(int *)((long)param_2 + 0x2c) = iVar23;
            param_2[1] = (ulong)pcVar24;
          }
          *(undefined1 *)((long)param_2 + 0x24) = 0;
          if (cVar7 == '\0') {
            return 0;
          }
          pcVar20 = (char *)*param_2;
          if (pcVar24 <= pcVar20) goto LAB_00bbb33c;
        } while (*pcVar20 == ':');
        *(int *)puVar3 = (int)*puVar3 + 1;
        if (*pcVar20 == 'B') {
          *param_2 = (ulong)(pcVar20 + 1);
LAB_00bbb8a4:
          puVar27 = *(undefined8 **)(param_1 + 0xc0);
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
          if (puVar27 == (undefined8 *)0x0) {
            lVar16 = tpidr_el0;
            plVar21 = *(long **)(lVar16 + 0x30);
            if (plVar21 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar21 = DAT_04859430;
              *(long **)(lVar16 + 0x30) = DAT_04859430;
            }
            puVar27 = (undefined8 *)(**(code **)(*plVar21 + 0x10))(plVar21,0x88,8);
            puVar27[2] = 0;
            puVar27[3] = 0;
            puVar27[4] = 0;
            *puVar27 = &PTR_FUN_0455aeb0;
            puVar27[1] = puVar27 + 2;
            puVar27[0xf] = 0;
            puVar27[5] = 0;
            puVar27[0xd] = 0;
            puVar27[0xe] = 0;
            puVar9 = PTR_DAT_047dab98;
            if (*(long *)PTR_DAT_047dab98 != 2) {
              local_70 = PTR_LAB_047daba8;
              local_68 = 0;
              local_78 = puVar4;
              if (*(long *)PTR_DAT_047dab98 != 2) {
                do {
                  lVar16 = *(long *)puVar9;
                  if (lVar16 != 0) break;
                  cVar7 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar9,0x10);
                  if (bVar11) {
                    *(undefined8 *)puVar9 = 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                DataMemoryBarrier(2,3);
                if (lVar16 == 0) {
                  (**(code **)(puVar10 + 0x20))(&local_78);
                  *(undefined8 *)PTR_DAT_047dab98 = 2;
                }
                else {
                  while (lVar16 == 1) {
                    sched_yield();
                    lVar16 = *(long *)PTR_DAT_047dab98;
                  }
                }
              }
            }
            *(undefined4 *)((long)puVar27 + 0x34) = 0;
            uVar19 = *(undefined8 *)PTR_DAT_047dabb0;
            *(undefined4 *)(puVar27 + 0x10) = 0;
            puVar27[7] = uVar19;
            puVar27[8] = uVar19;
            *(undefined4 *)(puVar27 + 6) = 0;
            puVar27[9] = 0x100000000;
            puVar27[10] = uVar19;
            puVar27[0xb] = uVar19;
            puVar27[0xc] = uVar19;
            *(undefined8 **)(param_1 + 0xc0) = puVar27;
          }
          pbVar26 = (byte *)*param_2;
          pbVar22 = (byte *)param_2[1];
          if ((pbVar26 < pbVar22) && (-1 < (char)*pbVar26)) {
            pbVar25 = pbVar26 + 1;
            uVar13 = (uint)*pbVar26;
            *param_2 = (ulong)pbVar25;
          }
          else {
            uVar13 = FUN_00c0954c(param_2);
            if ((int)uVar13 < 0) {
              return 0;
            }
            pbVar25 = (byte *)*param_2;
            pbVar22 = (byte *)param_2[1];
          }
          iVar14 = (int)param_2[3];
          iVar5 = (int)param_2[5];
          iVar6 = *(int *)((long)param_2 + 0x2c);
          param_2[1] = (ulong)(pbVar22 + iVar6);
          iVar12 = (iVar14 - iVar6) + ((int)pbVar25 - (int)pbVar22);
          iVar23 = 0x7fffffff;
          if ((int)uVar13 <= 0x7fffffff - iVar12) {
            iVar23 = iVar12 + uVar13;
          }
          iVar12 = iVar5;
          if (iVar23 <= iVar5) {
            iVar12 = iVar23;
          }
          *(int *)(param_2 + 5) = iVar12;
          iVar23 = (int)param_2[6];
          if (iVar12 <= (int)param_2[6]) {
            iVar23 = iVar12;
          }
          iVar12 = iVar14 - iVar23;
          if (iVar12 == 0 || iVar14 < iVar23) {
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            *(int *)((long)param_2 + 0x2c) = iVar12;
            param_2[1] = (long)(pbVar22 + iVar6) - (long)iVar12;
          }
          uVar15 = *puVar3;
          *(int *)puVar3 = (int)uVar15 + -1;
          if ((int)uVar15 < 1) {
            return 0;
          }
          uVar15 = FUN_00bd0200(puVar27,param_2);
          if ((uVar15 & 1) == 0) {
            return 0;
          }
          pcVar24 = (char *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
          iVar12 = (int)param_2[6];
          if (iVar5 <= (int)param_2[6]) {
            iVar12 = iVar5;
          }
          cVar7 = *(char *)((long)param_2 + 0x24);
          *(int *)(param_2 + 5) = iVar5;
          param_2[1] = (ulong)pcVar24;
          iVar23 = (int)param_2[3] - iVar12;
          if (iVar23 == 0 || (int)param_2[3] < iVar12) {
            *(undefined4 *)((long)param_2 + 0x2c) = 0;
          }
          else {
            pcVar24 = pcVar24 + -(long)iVar23;
            *(int *)((long)param_2 + 0x2c) = iVar23;
            param_2[1] = (ulong)pcVar24;
          }
          *(undefined1 *)((long)param_2 + 0x24) = 0;
          *(int *)(param_2 + 7) = (int)param_2[7] + 1;
          if (cVar7 == '\0') {
            return 0;
          }
          pcVar20 = (char *)*param_2;
          if ((pcVar20 < pcVar24) && (*pcVar20 == 'J')) {
            *param_2 = (ulong)(pcVar20 + 1);
LAB_00bbbb04:
            puVar27 = *(undefined8 **)(param_1 + 200);
            *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x400;
            if (puVar27 == (undefined8 *)0x0) {
              lVar16 = tpidr_el0;
              plVar21 = *(long **)(lVar16 + 0x30);
              if (plVar21 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar21 = DAT_04859430;
                *(long **)(lVar16 + 0x30) = DAT_04859430;
              }
              puVar27 = (undefined8 *)(**(code **)(*plVar21 + 0x10))(plVar21,0x30,8);
              *puVar27 = &PTR_FUN_0455b7a0;
              puVar27[1] = 0;
              puVar27[2] = 0;
              puVar27[3] = 0;
              puVar27[4] = 0;
              puVar27[5] = 0;
              *(undefined8 **)(param_1 + 200) = puVar27;
            }
            pbVar26 = (byte *)*param_2;
            pbVar22 = (byte *)param_2[1];
            if ((pbVar26 < pbVar22) && (-1 < (char)*pbVar26)) {
              pbVar25 = pbVar26 + 1;
              uVar13 = (uint)*pbVar26;
              *param_2 = (ulong)pbVar25;
            }
            else {
              uVar13 = FUN_00c0954c(param_2);
              if ((int)uVar13 < 0) {
                return 0;
              }
              pbVar25 = (byte *)*param_2;
              pbVar22 = (byte *)param_2[1];
            }
            iVar14 = (int)param_2[3];
            iVar5 = (int)param_2[5];
            iVar6 = *(int *)((long)param_2 + 0x2c);
            param_2[1] = (ulong)(pbVar22 + iVar6);
            iVar12 = (iVar14 - iVar6) + ((int)pbVar25 - (int)pbVar22);
            iVar23 = 0x7fffffff;
            if ((int)uVar13 <= 0x7fffffff - iVar12) {
              iVar23 = iVar12 + uVar13;
            }
            iVar12 = iVar5;
            if (iVar23 <= iVar5) {
              iVar12 = iVar23;
            }
            *(int *)(param_2 + 5) = iVar12;
            iVar23 = (int)param_2[6];
            if (iVar12 <= (int)param_2[6]) {
              iVar23 = iVar12;
            }
            iVar12 = iVar14 - iVar23;
            if (iVar12 == 0 || iVar14 < iVar23) {
              *(undefined4 *)((long)param_2 + 0x2c) = 0;
            }
            else {
              *(int *)((long)param_2 + 0x2c) = iVar12;
              param_2[1] = (long)(pbVar22 + iVar6) - (long)iVar12;
            }
            uVar15 = *puVar3;
            *(int *)puVar3 = (int)uVar15 + -1;
            if ((int)uVar15 < 1) {
              return 0;
            }
            uVar15 = FUN_00bdea74(puVar27,param_2);
            if ((uVar15 & 1) == 0) {
              return 0;
            }
            pbVar22 = (byte *)(param_2[1] + (long)*(int *)((long)param_2 + 0x2c));
            iVar12 = (int)param_2[6];
            if (iVar5 <= (int)param_2[6]) {
              iVar12 = iVar5;
            }
            cVar7 = *(char *)((long)param_2 + 0x24);
            *(int *)(param_2 + 5) = iVar5;
            param_2[1] = (ulong)pbVar22;
            iVar23 = (int)param_2[3] - iVar12;
            if (iVar23 == 0 || (int)param_2[3] < iVar12) {
              *(undefined4 *)((long)param_2 + 0x2c) = 0;
            }
            else {
              pbVar22 = pbVar22 + -(long)iVar23;
              *(int *)((long)param_2 + 0x2c) = iVar23;
              param_2[1] = (ulong)pbVar22;
            }
            *(undefined1 *)((long)param_2 + 0x24) = 0;
            *(int *)(param_2 + 7) = (int)param_2[7] + 1;
            if (cVar7 == '\0') {
              return 0;
            }
            pbVar26 = (byte *)*param_2;
            if (pbVar26 < pbVar22) {
              bVar8 = *pbVar26;
              do {
                if (bVar8 != 0x50) goto LAB_00bbad3c;
                pbVar26 = pbVar26 + 1;
                *param_2 = (ulong)pbVar26;
LAB_00bbbd4c:
                if (pbVar26 < pbVar22) {
                  uVar15 = (ulong)*pbVar26;
                  if ((char)*pbVar26 < '\0') goto LAB_00bbbd70;
                  *param_2 = (ulong)(pbVar26 + 1);
                }
                else {
                  uVar15 = 0;
LAB_00bbbd70:
                  uVar15 = FUN_00c0944c(param_2,uVar15);
                  if ((long)uVar15 < 0) {
                    return 0;
                  }
                }
                iVar12 = *(int *)(param_1 + 0x40);
                if (iVar12 == *(int *)(param_1 + 0x44)) {
                  FUN_00ba867c(piVar2,iVar12 + 1);
                  iVar12 = *piVar2;
                }
                *(int *)(param_1 + 0x40) = iVar12 + 1;
                *(int *)(*(long *)(param_1 + 0x48) + (long)iVar12 * 4 + 8) = (int)uVar15;
                iVar12 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40);
                if (0 < iVar12) {
                  iVar12 = iVar12 + 1;
                  do {
                    pbVar26 = (byte *)*param_2;
                    if (((byte *)param_2[1] <= pbVar26) || (*pbVar26 != 0x50)) break;
                    pbVar22 = pbVar26 + 1;
                    *param_2 = (ulong)pbVar22;
                    if (pbVar22 < (byte *)param_2[1]) {
                      uVar15 = (ulong)*pbVar22;
                      if ((char)*pbVar22 < '\0') goto LAB_00bbbe0c;
                      *param_2 = (ulong)(pbVar26 + 2);
                    }
                    else {
                      uVar15 = 0;
LAB_00bbbe0c:
                      uVar15 = FUN_00c0944c(param_2,uVar15);
                      if ((long)uVar15 < 0) {
                        return 0;
                      }
                    }
                    iVar12 = iVar12 + -1;
                    iVar23 = *(int *)(param_1 + 0x40);
                    *(int *)(param_1 + 0x40) = iVar23 + 1;
                    *(int *)(*(long *)(param_1 + 0x48) + (long)iVar23 * 4 + 8) = (int)uVar15;
                  } while (1 < iVar12);
                }
LAB_00bbbe40:
                pbVar26 = (byte *)*param_2;
                pbVar22 = (byte *)param_2[1];
                if (pbVar22 <= pbVar26) goto LAB_00bbad3c;
                bVar8 = *pbVar26;
              } while (bVar8 != 0x58);
              do {
                pbVar26 = pbVar26 + 1;
                *param_2 = (ulong)pbVar26;
LAB_00bbbe6c:
                if (pbVar26 < pbVar22) {
                  uVar15 = (ulong)*pbVar26;
                  if ((char)*pbVar26 < '\0') goto LAB_00bbbe90;
                  *param_2 = (ulong)(pbVar26 + 1);
                }
                else {
                  uVar15 = 0;
LAB_00bbbe90:
                  uVar15 = FUN_00c0944c(param_2,uVar15);
                  if ((long)uVar15 < 0) {
                    return 0;
                  }
                }
                iVar12 = *(int *)(param_1 + 0x50);
                if (iVar12 == *(int *)(param_1 + 0x54)) {
                  FUN_00ba867c(piVar1,iVar12 + 1);
                  iVar12 = *piVar1;
                }
                *(int *)(param_1 + 0x50) = iVar12 + 1;
                *(int *)(*(long *)(param_1 + 0x58) + (long)iVar12 * 4 + 8) = (int)uVar15;
                iVar12 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50);
                if (0 < iVar12) {
                  iVar12 = iVar12 + 1;
                  do {
                    pbVar26 = (byte *)*param_2;
                    if (((byte *)param_2[1] <= pbVar26) || (*pbVar26 != 0x58)) break;
                    pbVar22 = pbVar26 + 1;
                    *param_2 = (ulong)pbVar22;
                    if (pbVar22 < (byte *)param_2[1]) {
                      uVar15 = (ulong)*pbVar22;
                      if ((char)*pbVar22 < '\0') goto LAB_00bbbf30;
                      *param_2 = (ulong)(pbVar26 + 2);
                    }
                    else {
                      uVar15 = 0;
LAB_00bbbf30:
                      uVar15 = FUN_00c0944c(param_2,uVar15);
                      if ((long)uVar15 < 0) {
                        return 0;
                      }
                    }
                    iVar12 = iVar12 + -1;
                    iVar23 = *(int *)(param_1 + 0x50);
                    *(int *)(param_1 + 0x50) = iVar23 + 1;
                    *(int *)(*(long *)(param_1 + 0x58) + (long)iVar23 * 4 + 8) = (int)uVar15;
                  } while (1 < iVar12);
                }
LAB_00bbbf64:
                pbVar26 = (byte *)*param_2;
                pbVar22 = (byte *)param_2[1];
                if (pbVar22 <= pbVar26) break;
                if (*pbVar26 == 0x62) {
                  *param_2 = (ulong)(pbVar26 + 1);
                  goto LAB_00bbbf98;
                }
              } while (*pbVar26 == 0x58);
            }
          }
        }
        goto LAB_00bbad3c;
      }
    }
  }
LAB_00bbb33c:
  *(int *)puVar3 = (int)*puVar3 + 1;
  goto LAB_00bbad3c;
}


