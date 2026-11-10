/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bd0200; name: FUN_00bd0200
 */


undefined8 FUN_00bd0200(long param_1,ulong *param_2)

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
  long lVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  char *pcVar18;
  int *piVar19;
  int iVar20;
  ulong uVar21;
  char *pcVar22;
  undefined8 uVar23;
  long *plVar24;
  ulong uVar25;
  undefined1 auVar26 [16];
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
LAB_00bd028c:
  pbVar16 = (byte *)*param_2;
  if (pbVar16 < (byte *)param_2[1]) {
    bVar6 = *pbVar16;
    uVar14 = (uint)bVar6;
    if ((char)bVar6 < '\x01') {
      if (((byte *)param_2[1] <= pbVar16 + 1) ||
         (bVar4 = pbVar16[1], -1 < (char)((bVar4 ^ 0x80) & bVar6))) goto LAB_00bd03a0;
      uVar14 = (uVar14 + (uint)bVar4 * 0x80) - 0x80;
      uVar21 = (ulong)uVar14;
      *(uint *)(param_2 + 4) = uVar14;
      pbVar16 = pbVar16 + 2;
    }
    else {
      uVar21 = (ulong)bVar6;
      pbVar16 = pbVar16 + 1;
      *(uint *)(param_2 + 4) = uVar14;
    }
    *param_2 = (ulong)pbVar16;
LAB_00bd03c8:
    uVar14 = (uint)(uVar21 >> 3) & 0x1fffffff;
    iVar11 = (int)uVar21;
    switch(uVar14) {
    case 8:
      if (iVar11 == 0x42) {
LAB_00bd0470:
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
        lVar13 = *(long *)(param_1 + 0x40);
        if (lVar13 == *(long *)PTR_DAT_047dabb0) {
          FUN_00b6eb88((long *)(param_1 + 0x40),*(long *)PTR_DAT_047dabb0);
          lVar13 = *(long *)(param_1 + 0x40);
        }
        uVar21 = FUN_00c0d824(param_2,lVar13);
        if ((uVar21 & 1) == 0) {
          return 0;
        }
        pbVar16 = (byte *)*param_2;
        pbVar17 = (byte *)param_2[1];
        if ((pbVar16 < pbVar17) && (*pbVar16 == 0x48)) {
          pbVar16 = pbVar16 + 1;
          *param_2 = (ulong)pbVar16;
LAB_00bd04e4:
          if (pbVar16 < pbVar17) {
            uVar21 = (ulong)*pbVar16;
            if ((char)*pbVar16 < '\0') goto LAB_00bd05d8;
            *param_2 = (ulong)(pbVar16 + 1);
          }
          else {
            uVar21 = 0;
LAB_00bd05d8:
            uVar21 = FUN_00c0944c(param_2,uVar21);
            if ((long)uVar21 < 0) {
              return 0;
            }
          }
          iVar11 = (int)uVar21;
          if (iVar11 - 1U < 3) {
            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x20;
            *(int *)(param_1 + 0x4c) = iVar11;
          }
          else {
            if ((*puVar1 & 1) == 0) {
              uVar21 = FUN_00b7714c(puVar1);
            }
            else {
              uVar21 = *puVar1 & 0xfffffffffffffffe;
            }
            FUN_00c001d0(uVar21,9,(long)iVar11);
          }
          pbVar16 = (byte *)*param_2;
          pbVar17 = (byte *)param_2[1];
          if ((pbVar16 < pbVar17) && (*pbVar16 == 0x50)) {
            pbVar16 = pbVar16 + 1;
            *param_2 = (ulong)pbVar16;
LAB_00bd0644:
            if ((pbVar16 < pbVar17) && (-1 < (char)*pbVar16)) {
              uVar21 = (ulong)*pbVar16;
              *param_2 = (ulong)(pbVar16 + 1);
            }
            else {
              auVar26 = FUN_00c09268(param_2);
              uVar21 = auVar26._0_8_;
              if ((auVar26._8_8_ & 1) == 0) {
                return 0;
              }
            }
            *(bool *)(param_1 + 0x48) = uVar21 != 0;
            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 4;
            pcVar18 = (char *)*param_2;
            if ((pcVar18 < (char *)param_2[1]) && (*pcVar18 == 'Z')) {
              *param_2 = (ulong)(pcVar18 + 1);
LAB_00bd06a8:
              *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x40;
              lVar13 = *(long *)(param_1 + 0x50);
              if (lVar13 == *(long *)PTR_DAT_047dabb0) {
                FUN_00b6eb88((long *)(param_1 + 0x50),*(long *)PTR_DAT_047dabb0);
                lVar13 = *(long *)(param_1 + 0x50);
              }
              uVar21 = FUN_00c0d824(param_2,lVar13);
              if ((uVar21 & 1) == 0) {
                return 0;
              }
              pcVar18 = (char *)*param_2;
              pbVar17 = (byte *)param_2[1];
              if (((1 < (int)pbVar17 - (int)pcVar18) && (*pcVar18 == -0x80)) &&
                 (pcVar18[1] == '\x01')) {
                pbVar16 = (byte *)(pcVar18 + 2);
                *param_2 = (ulong)pbVar16;
LAB_00bd071c:
                if ((pbVar16 < pbVar17) && (-1 < (char)*pbVar16)) {
                  uVar21 = (ulong)*pbVar16;
                  *param_2 = (ulong)(pbVar16 + 1);
                }
                else {
                  auVar26 = FUN_00c09268(param_2);
                  uVar21 = auVar26._0_8_;
                  if ((auVar26._8_8_ & 1) == 0) {
                    return 0;
                  }
                }
                *(bool *)(param_1 + 0x4b) = uVar21 != 0;
                *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80;
                pcVar18 = (char *)*param_2;
                pbVar17 = (byte *)param_2[1];
                if (((1 < (int)pbVar17 - (int)pcVar18) && (*pcVar18 == -0x78)) &&
                   (pcVar18[1] == '\x01')) {
                  pbVar16 = (byte *)(pcVar18 + 2);
                  *param_2 = (ulong)pbVar16;
LAB_00bd0790:
                  if ((pbVar16 < pbVar17) && (-1 < (char)*pbVar16)) {
                    uVar21 = (ulong)*pbVar16;
                    *param_2 = (ulong)(pbVar16 + 1);
                  }
                  else {
                    auVar26 = FUN_00c09268(param_2);
                    uVar21 = auVar26._0_8_;
                    if ((auVar26._8_8_ & 1) == 0) {
                      return 0;
                    }
                  }
                  *(bool *)(param_1 + 0x80) = uVar21 != 0;
                  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x100;
                  pcVar18 = (char *)*param_2;
                  pbVar17 = (byte *)param_2[1];
                  if (((1 < (int)pbVar17 - (int)pcVar18) && (*pcVar18 == -0x70)) &&
                     (pcVar18[1] == '\x01')) {
                    pbVar16 = (byte *)(pcVar18 + 2);
                    *param_2 = (ulong)pbVar16;
LAB_00bd0804:
                    if ((pbVar16 < pbVar17) && (-1 < (char)*pbVar16)) {
                      uVar21 = (ulong)*pbVar16;
                      *param_2 = (ulong)(pbVar16 + 1);
                    }
                    else {
                      auVar26 = FUN_00c09268(param_2);
                      uVar21 = auVar26._0_8_;
                      if ((auVar26._8_8_ & 1) == 0) {
                        return 0;
                      }
                    }
                    *(bool *)(param_1 + 0x81) = uVar21 != 0;
                    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x200;
                    pcVar18 = (char *)*param_2;
                    pbVar17 = (byte *)param_2[1];
                    if (((1 < (int)pbVar17 - (int)pcVar18) && (*pcVar18 == -0x60)) &&
                       (pcVar18[1] == '\x01')) {
                      pbVar16 = (byte *)(pcVar18 + 2);
                      *param_2 = (ulong)pbVar16;
LAB_00bd0878:
                      if ((pbVar16 < pbVar17) && (-1 < (char)*pbVar16)) {
                        uVar21 = (ulong)*pbVar16;
                        *param_2 = (ulong)(pbVar16 + 1);
                      }
                      else {
                        auVar26 = FUN_00c09268(param_2);
                        uVar21 = auVar26._0_8_;
                        if ((auVar26._8_8_ & 1) == 0) {
                          return 0;
                        }
                      }
                      *(bool *)(param_1 + 0x49) = uVar21 != 0;
                      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
                      pcVar18 = (char *)*param_2;
                      pbVar17 = (byte *)param_2[1];
                      if (((1 < (int)pbVar17 - (int)pcVar18) && (*pcVar18 == -0x48)) &&
                         (pcVar18[1] == '\x01')) {
                        pbVar16 = (byte *)(pcVar18 + 2);
                        *param_2 = (ulong)pbVar16;
LAB_00bd08ec:
                        if ((pbVar16 < pbVar17) && (-1 < (char)*pbVar16)) {
                          uVar21 = (ulong)*pbVar16;
                          *param_2 = (ulong)(pbVar16 + 1);
                        }
                        else {
                          auVar26 = FUN_00c09268(param_2);
                          uVar21 = auVar26._0_8_;
                          if ((auVar26._8_8_ & 1) == 0) {
                            return 0;
                          }
                        }
                        *(bool *)(param_1 + 0x82) = uVar21 != 0;
                        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x400;
                        pcVar18 = (char *)*param_2;
                        pbVar17 = (byte *)param_2[1];
                        if (((1 < (int)pbVar17 - (int)pcVar18) && (*pcVar18 == -0x28)) &&
                           (pcVar18[1] == '\x01')) {
                          pbVar16 = (byte *)(pcVar18 + 2);
                          *param_2 = (ulong)pbVar16;
LAB_00bd0960:
                          if ((pbVar16 < pbVar17) && (-1 < (char)*pbVar16)) {
                            uVar21 = (ulong)*pbVar16;
                            *param_2 = (ulong)(pbVar16 + 1);
                          }
                          else {
                            auVar26 = FUN_00c09268(param_2);
                            uVar21 = auVar26._0_8_;
                            if ((auVar26._8_8_ & 1) == 0) {
                              return 0;
                            }
                          }
                          *(bool *)(param_1 + 0x4a) = uVar21 != 0;
                          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x10;
                          pcVar18 = (char *)*param_2;
                          pbVar17 = (byte *)param_2[1];
                          if (((1 < (int)pbVar17 - (int)pcVar18) && (*pcVar18 == -8)) &&
                             (pcVar18[1] == '\x01')) {
                            pbVar16 = (byte *)(pcVar18 + 2);
                            *param_2 = (ulong)pbVar16;
LAB_00bd09d4:
                            if ((pbVar16 < pbVar17) && (-1 < (char)*pbVar16)) {
                              uVar21 = (ulong)*pbVar16;
                              *param_2 = (ulong)(pbVar16 + 1);
                            }
                            else {
                              auVar26 = FUN_00c09268(param_2);
                              uVar21 = auVar26._0_8_;
                              if ((auVar26._8_8_ & 1) == 0) {
                                return 0;
                              }
                            }
                            *(bool *)(param_1 + 0x83) = uVar21 != 0;
                            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800;
                            pcVar18 = (char *)*param_2;
                            if (((1 < (int)param_2[1] - (int)pcVar18) && (*pcVar18 == -0x5e)) &&
                               (pcVar18[1] == '\x02')) {
                              *param_2 = (ulong)(pcVar18 + 2);
LAB_00bd0a4c:
                              *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x1000;
                              lVar13 = *(long *)(param_1 + 0x58);
                              if (lVar13 == *(long *)PTR_DAT_047dabb0) {
                                FUN_00b6eb88((long *)(param_1 + 0x58),*(long *)PTR_DAT_047dabb0);
                                lVar13 = *(long *)(param_1 + 0x58);
                              }
                              uVar21 = FUN_00c0d824(param_2,lVar13);
                              if ((uVar21 & 1) == 0) {
                                return 0;
                              }
                              pcVar18 = (char *)*param_2;
                              if (((1 < (int)param_2[1] - (int)pcVar18) && (*pcVar18 == -0x56)) &&
                                 (pcVar18[1] == '\x02')) {
                                *param_2 = (ulong)(pcVar18 + 2);
LAB_00bd0ac4:
                                *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x2000;
                                lVar13 = *(long *)(param_1 + 0x60);
                                if (lVar13 == *(long *)PTR_DAT_047dabb0) {
                                  FUN_00b6eb88((long *)(param_1 + 0x60),*(long *)PTR_DAT_047dabb0);
                                  lVar13 = *(long *)(param_1 + 0x60);
                                }
                                uVar21 = FUN_00c0d824(param_2,lVar13);
                                if ((uVar21 & 1) == 0) {
                                  return 0;
                                }
                                pcVar18 = (char *)*param_2;
                                if (((1 < (int)param_2[1] - (int)pcVar18) && (*pcVar18 == -0x46)) &&
                                   (pcVar18[1] == '>')) {
                                  *param_2 = (ulong)(pcVar18 + 2);
LAB_00bd0b3c:
                                  uVar21 = param_2[7];
                                  *(int *)(param_2 + 7) = (int)uVar21 + -1;
                                  if ((int)uVar21 < 1) {
                                    return 0;
                                  }
                                  do {
                                    piVar19 = *(int **)(param_1 + 0x78);
                                    if (piVar19 == (int *)0x0) {
                                      iVar11 = *(int *)(param_1 + 0x70);
                                      iVar20 = *(int *)(param_1 + 0x74);
LAB_00bd0b90:
                                      if (iVar11 <= iVar20) {
                                        FUN_00c11f04(param_1 + 0x68,(iVar20 - iVar11) + 1);
                                        piVar19 = *(int **)(param_1 + 0x78);
                                      }
                                      iVar20 = *piVar19;
LAB_00bd0bac:
                                      *piVar19 = iVar20 + 1;
                                      uVar23 = FUN_00be1e9c(*(undefined8 *)(param_1 + 0x68));
                                      iVar11 = *(int *)(param_1 + 0x70);
                                      *(int *)(param_1 + 0x70) = iVar11 + 1;
                                      *(undefined8 *)
                                       (*(long *)(param_1 + 0x78) + (long)iVar11 * 8 + 8) = uVar23;
                                    }
                                    else {
                                      iVar11 = *(int *)(param_1 + 0x70);
                                      iVar20 = *piVar19;
                                      if (iVar20 <= iVar11) {
                                        if (iVar20 == *(int *)(param_1 + 0x74)) goto LAB_00bd0b90;
                                        goto LAB_00bd0bac;
                                      }
                                      *(int *)(param_1 + 0x70) = iVar11 + 1;
                                      uVar23 = *(undefined8 *)(piVar19 + (long)iVar11 * 2 + 2);
                                    }
                                    pbVar16 = (byte *)*param_2;
                                    if (pbVar16 < (byte *)param_2[1]) {
                                      uVar21 = (ulong)*pbVar16;
                                      if ((char)*pbVar16 < '\0') goto LAB_00bd0c00;
                                      *param_2 = (ulong)(pbVar16 + 1);
                                    }
                                    else {
                                      uVar21 = 0;
LAB_00bd0c00:
                                      uVar21 = FUN_00c0944c(param_2,uVar21);
                                      if ((long)uVar21 < 0) {
                                        uVar21 = 0;
                                      }
                                    }
                                    iVar15 = (int)param_2[3];
                                    iVar3 = (int)param_2[5];
                                    iVar11 = (iVar15 - *(int *)((long)param_2 + 0x2c)) +
                                             ((int)*param_2 - (int)param_2[1]);
                                    iVar12 = (int)uVar21;
                                    uVar21 = param_2[1] + (long)*(int *)((long)param_2 + 0x2c);
                                    param_2[1] = uVar21;
                                    iVar20 = 0x7fffffff;
                                    if (iVar12 <= 0x7fffffff - iVar11 && -1 < iVar12) {
                                      iVar20 = iVar11 + iVar12;
                                    }
                                    iVar11 = iVar3;
                                    if (iVar20 <= iVar3) {
                                      iVar11 = iVar20;
                                    }
                                    *(int *)(param_2 + 5) = iVar11;
                                    iVar20 = (int)param_2[6];
                                    if (iVar11 <= (int)param_2[6]) {
                                      iVar20 = iVar11;
                                    }
                                    iVar11 = iVar15 - iVar20;
                                    if (iVar11 == 0 || iVar15 < iVar20) {
                                      *(undefined4 *)((long)param_2 + 0x2c) = 0;
                                    }
                                    else {
                                      *(int *)((long)param_2 + 0x2c) = iVar11;
                                      param_2[1] = uVar21 - (long)iVar11;
                                    }
                                    uVar21 = FUN_00bdadac(uVar23,param_2);
                                    if ((uVar21 & 1) == 0) {
                                      return 0;
                                    }
                                    *(int *)(param_2 + 5) = iVar3;
                                    cVar5 = *(char *)((long)param_2 + 0x24);
                                    pcVar18 = (char *)(param_2[1] +
                                                      (long)*(int *)((long)param_2 + 0x2c));
                                    iVar20 = (int)param_2[3];
                                    iVar11 = (int)param_2[6];
                                    if (iVar3 <= (int)param_2[6]) {
                                      iVar11 = iVar3;
                                    }
                                    iVar15 = iVar20 - iVar11;
                                    param_2[1] = (ulong)pcVar18;
                                    if (iVar15 == 0 || iVar20 < iVar11) {
                                      iVar15 = 0;
                                      *(undefined4 *)((long)param_2 + 0x2c) = 0;
                                    }
                                    else {
                                      pcVar18 = pcVar18 + -(long)iVar15;
                                      *(int *)((long)param_2 + 0x2c) = iVar15;
                                      param_2[1] = (ulong)pcVar18;
                                    }
                                    *(undefined1 *)((long)param_2 + 0x24) = 0;
                                    if (cVar5 == '\0') {
                                      return 0;
                                    }
                                    pcVar22 = (char *)*param_2;
                                    if ((((int)pcVar18 - (int)pcVar22 < 2) || (*pcVar22 != -0x46))
                                       || (pcVar22[1] != '>')) goto LAB_00bd0d1c;
                                    *param_2 = (ulong)(pcVar22 + 2);
                                  } while( true );
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_00bd028c;
      }
      break;
    case 9:
      if (iVar11 == 0x48) {
        pbVar16 = (byte *)*param_2;
        pbVar17 = (byte *)param_2[1];
        goto LAB_00bd04e4;
      }
      break;
    case 10:
      if (iVar11 == 0x50) {
        pbVar16 = (byte *)*param_2;
        pbVar17 = (byte *)param_2[1];
        goto LAB_00bd0644;
      }
      break;
    case 0xb:
      if (iVar11 == 0x5a) goto LAB_00bd06a8;
      break;
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x13:
    case 0x15:
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
      break;
    case 0x10:
      if (iVar11 == 0x80) {
        pbVar16 = (byte *)*param_2;
        pbVar17 = (byte *)param_2[1];
        goto LAB_00bd071c;
      }
      break;
    case 0x11:
      if (iVar11 == 0x88) {
        pbVar16 = (byte *)*param_2;
        pbVar17 = (byte *)param_2[1];
        goto LAB_00bd0790;
      }
      break;
    case 0x12:
      if (iVar11 == 0x90) {
        pbVar16 = (byte *)*param_2;
        pbVar17 = (byte *)param_2[1];
        goto LAB_00bd0804;
      }
      break;
    case 0x14:
      if (iVar11 == 0xa0) {
        pbVar16 = (byte *)*param_2;
        pbVar17 = (byte *)param_2[1];
        goto LAB_00bd0878;
      }
      break;
    case 0x17:
      if (iVar11 == 0xb8) {
        pbVar16 = (byte *)*param_2;
        pbVar17 = (byte *)param_2[1];
        goto LAB_00bd08ec;
      }
      break;
    case 0x1b:
      if (iVar11 == 0xd8) {
        pbVar16 = (byte *)*param_2;
        pbVar17 = (byte *)param_2[1];
        goto LAB_00bd0960;
      }
      break;
    case 0x1f:
      if (iVar11 == 0xf8) {
        pbVar16 = (byte *)*param_2;
        pbVar17 = (byte *)param_2[1];
        goto LAB_00bd09d4;
      }
      break;
    case 0x24:
      if (iVar11 == 0x122) goto LAB_00bd0a4c;
      break;
    case 0x25:
      if (iVar11 == 0x12a) goto LAB_00bd0ac4;
      break;
    default:
      if (uVar14 == 999) {
        if (iVar11 == 0x1f3a) goto LAB_00bd0b3c;
      }
      else if ((uVar14 == 1) && (iVar11 == 10)) {
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
        lVar13 = *(long *)(param_1 + 0x38);
        if (lVar13 == *(long *)PTR_DAT_047dabb0) {
          FUN_00b6eb88((long *)(param_1 + 0x38),*(long *)PTR_DAT_047dabb0);
          lVar13 = *(long *)(param_1 + 0x38);
        }
        uVar21 = FUN_00c0d824(param_2,lVar13);
        if ((uVar21 & 1) == 0) {
          return 0;
        }
        pcVar18 = (char *)*param_2;
        if ((pcVar18 < (char *)param_2[1]) && (*pcVar18 == 'B')) {
          *param_2 = (ulong)(pcVar18 + 1);
          goto LAB_00bd0470;
        }
        goto LAB_00bd028c;
      }
    }
  }
  else {
    uVar14 = 0;
LAB_00bd03a0:
    iVar11 = FUN_00c096d0(param_2,uVar14);
    *(int *)(param_2 + 4) = iVar11;
    bVar10 = iVar11 - 1U < 0x3fff;
    uVar21 = (ulong)CONCAT14(bVar10,iVar11);
    if (bVar10) goto LAB_00bd03c8;
  }
  plVar9 = DAT_0483a858;
  uVar14 = (uint)uVar21;
  if ((uVar14 == 0) || ((uVar14 & 7) == 4)) {
    return 1;
  }
  if (uVar14 >> 6 < 0x7d) {
    if ((*puVar1 & 1) == 0) {
      uVar25 = FUN_00b7714c(puVar1);
    }
    else {
      uVar25 = *puVar1 & 0xfffffffffffffffe;
    }
    uVar21 = FUN_00c01b50(param_2,uVar21 & 0xffffffff,uVar25);
  }
  else {
    if ((*puVar1 & 1) == 0) {
      uStack_68 = FUN_00b7714c(puVar1);
    }
    else {
      uStack_68 = *puVar1 & 0xfffffffffffffffe;
    }
    plVar24 = (long *)param_2[8];
    local_70 = puVar2;
    if (plVar24 == (long *)0x0) {
      plStack_88 = plVar9;
      local_90 = puVar7;
    }
    else {
      uVar25 = param_2[9];
      uStack_78 = (**(code **)(*plVar9 + 0xb8))(plVar9);
      plStack_88 = plVar24;
      local_80 = uVar25;
      local_90 = puVar8;
    }
    local_90 = local_90 + 0x10;
    uVar21 = FUN_00c27388(param_1 + 8,uVar21 & 0xffffffff,param_2,&local_90,&local_70);
  }
  if ((uVar21 & 1) == 0) {
    return 0;
  }
  goto LAB_00bd028c;
LAB_00bd0d1c:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if ((pcVar18 == pcVar22) && ((iVar20 == iVar3 || (iVar15 != 0)))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_00bd028c;
}


