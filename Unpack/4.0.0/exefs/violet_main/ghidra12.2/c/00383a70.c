/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00383a70; name: FUN_00383a70
 */


void FUN_00383a70(long *param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  ushort *puVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  
  if (*(int *)((long)param_1 + 0xc4) < 1) {
    uVar16 = param_3 + 5;
    iVar9 = 0;
    uVar6 = uVar16;
    if (param_2 != 0) goto LAB_00383ef8;
LAB_00383f34:
    uVar18 = *(uint *)((long)param_1 + 0x1734);
    if ((uVar16 == uVar6) || ((int)param_1[0x19] == 4)) {
      uVar20 = param_4 + 2U & 0xffff;
      uVar11 = (uint)*(ushort *)(param_1 + 0x2e6) | uVar20 << (ulong)(uVar18 & 0x1f);
      *(short *)(param_1 + 0x2e6) = (short)uVar11;
      if ((int)uVar18 < 0xe) {
        iVar9 = uVar18 + 3;
      }
      else {
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(char *)(param_1[2] + lVar14) = (char)uVar11;
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(undefined1 *)(param_1[2] + lVar14) = *(undefined1 *)((long)param_1 + 0x1731);
        *(short *)(param_1 + 0x2e6) =
             (short)(uVar20 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f));
        iVar9 = *(int *)((long)param_1 + 0x1734) + -0xd;
      }
      *(int *)((long)param_1 + 0x1734) = iVar9;
      FUN_00384cb0(param_1,&DAT_03cdad4c,&DAT_03cdb1cc);
      FUN_003835f0(param_1);
    }
    else {
      uVar20 = param_4 + 4U & 0xffff;
      uVar11 = (uint)*(ushort *)(param_1 + 0x2e6) | uVar20 << (ulong)(uVar18 & 0x1f);
      *(short *)(param_1 + 0x2e6) = (short)uVar11;
      if ((int)uVar18 < 0xe) {
        uVar18 = uVar18 + 3;
      }
      else {
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(char *)(param_1[2] + lVar14) = (char)uVar11;
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(undefined1 *)(param_1[2] + lVar14) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar11 = uVar20 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        uVar18 = *(int *)((long)param_1 + 0x1734) - 0xd;
        *(short *)(param_1 + 0x2e6) = (short)uVar11;
      }
      uVar1 = *(uint *)(param_1 + 0x16f);
      uVar20 = (int)param_1[0x16c] + 0xff00U & 0xffff;
      uVar11 = uVar11 | uVar20 << (ulong)(uVar18 & 0x1f);
      *(uint *)((long)param_1 + 0x1734) = uVar18;
      *(short *)(param_1 + 0x2e6) = (short)uVar11;
      if ((int)uVar18 < 0xc) {
        uVar18 = uVar18 + 5;
      }
      else {
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(char *)(param_1[2] + lVar14) = (char)uVar11;
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(undefined1 *)(param_1[2] + lVar14) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar11 = uVar20 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar11;
        uVar18 = *(int *)((long)param_1 + 0x1734) - 0xb;
      }
      uVar20 = uVar1 & 0xffff;
      uVar11 = uVar11 | uVar20 << (ulong)(uVar18 & 0x1f);
      *(uint *)((long)param_1 + 0x1734) = uVar18;
      *(short *)(param_1 + 0x2e6) = (short)uVar11;
      if ((int)uVar18 < 0xc) {
        uVar18 = uVar18 + 5;
      }
      else {
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(char *)(param_1[2] + lVar14) = (char)uVar11;
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(undefined1 *)(param_1[2] + lVar14) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar11 = uVar20 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar11;
        uVar18 = *(int *)((long)param_1 + 0x1734) - 0xb;
      }
      *(uint *)((long)param_1 + 0x1734) = uVar18;
      uVar20 = iVar9 + 0xfffdU & 0xffff;
      uVar11 = uVar11 | uVar20 << (ulong)(uVar18 & 0x1f);
      *(short *)(param_1 + 0x2e6) = (short)uVar11;
      if ((int)uVar18 < 0xd) {
        uVar18 = uVar18 + 4;
      }
      else {
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(char *)(param_1[2] + lVar14) = (char)uVar11;
        lVar14 = param_1[5];
        param_1[5] = lVar14 + 1;
        *(undefined1 *)(param_1[2] + lVar14) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar18 = *(int *)((long)param_1 + 0x1734) - 0xc;
        uVar11 = uVar20 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar11;
      }
      uVar16 = (ulong)(iVar9 + 1);
      *(uint *)((long)param_1 + 0x1734) = uVar18;
      pbVar15 = &DAT_03cdb37c;
      do {
        while( true ) {
          uVar2 = *(ushort *)((long)param_1 + (ulong)*pbVar15 * 4 + 0xabe);
          uVar11 = uVar11 | (uint)uVar2 << (ulong)(uVar18 & 0x1f);
          *(short *)(param_1 + 0x2e6) = (short)uVar11;
          if ((int)uVar18 < 0xe) break;
          lVar14 = param_1[5];
          param_1[5] = lVar14 + 1;
          *(char *)(param_1[2] + lVar14) = (char)uVar11;
          lVar14 = param_1[5];
          param_1[5] = lVar14 + 1;
          *(undefined1 *)(param_1[2] + lVar14) = *(undefined1 *)((long)param_1 + 0x1731);
          uVar18 = *(int *)((long)param_1 + 0x1734) - 0xd;
          uVar2 = uVar2 >> (ulong)(0x10U - *(int *)((long)param_1 + 0x1734) & 0x1f);
          uVar11 = (uint)uVar2;
          *(ushort *)(param_1 + 0x2e6) = uVar2;
          uVar16 = uVar16 - 1;
          pbVar15 = pbVar15 + 1;
          *(uint *)((long)param_1 + 0x1734) = uVar18;
          if (uVar16 == 0) goto LAB_00384270;
        }
        uVar18 = uVar18 + 3;
        uVar16 = uVar16 - 1;
        pbVar15 = pbVar15 + 1;
        *(uint *)((long)param_1 + 0x1734) = uVar18;
      } while (uVar16 != 0);
LAB_00384270:
      FUN_00385090(param_1,(long)param_1 + 0xd4);
      FUN_00385090(param_1,param_1 + 0x139,uVar1);
      FUN_00384cb0(param_1,(long)param_1 + 0xd4,param_1 + 0x139);
      FUN_003835f0(param_1);
    }
  }
  else {
    if (*(int *)(*param_1 + 0x58) == 2) {
      if (((((((((*(short *)((long)param_1 + 0xd4) == 0) && ((short)param_1[0x1b] == 0)) &&
               (*(short *)((long)param_1 + 0xdc) == 0)) &&
              (((short)param_1[0x1c] == 0 && (*(short *)((long)param_1 + 0xe4) == 0)))) &&
             ((short)param_1[0x1d] == 0)) &&
            (((*(short *)((long)param_1 + 0xec) == 0 && (*(short *)((long)param_1 + 0x10c) == 0)) &&
             (((short)param_1[0x22] == 0 &&
              (((*(short *)((long)param_1 + 0x114) == 0 && ((short)param_1[0x23] == 0)) &&
               (*(short *)((long)param_1 + 0x11c) == 0)))))))) &&
           (((short)param_1[0x24] == 0 && (*(short *)((long)param_1 + 0x124) == 0)))) &&
          (((short)param_1[0x25] == 0 &&
           (((*(short *)((long)param_1 + 300) == 0 && ((short)param_1[0x26] == 0)) &&
            ((*(short *)((long)param_1 + 0x134) == 0 &&
             ((((short)param_1[0x27] == 0 && (*(short *)((long)param_1 + 0x144) == 0)) &&
              ((short)param_1[0x29] == 0)))))))))) &&
         ((*(short *)((long)param_1 + 0x14c) == 0 && ((short)param_1[0x2a] == 0)))) {
        if (((short)param_1[0x1f] == 0) &&
           ((*(short *)((long)param_1 + 0xfc) == 0 && ((short)param_1[0x21] == 0)))) {
          lVar14 = 0;
          do {
            if ((*(short *)((long)param_1 + lVar14 + 0x154) != 0) ||
               (*(short *)((long)param_1 + lVar14 + 0x158) != 0)) goto LAB_0038433c;
            lVar14 = lVar14 + 8;
          } while (lVar14 != 0x380);
          uVar12 = 0;
        }
        else {
LAB_0038433c:
          uVar12 = 1;
        }
      }
      else {
        uVar12 = 0;
      }
      *(undefined4 *)(*param_1 + 0x58) = uVar12;
    }
    FUN_00384370(param_1,param_1 + 0x16b);
    FUN_00384370(param_1,param_1 + 0x16e);
    lVar14 = param_1[0x16c];
    uVar18 = (int)lVar14 + 1;
    uVar2 = *(ushort *)((long)param_1 + 0xd6);
    *(undefined2 *)((long)param_1 + (long)(int)uVar18 * 4 + 0xd6) = 0xffff;
    if (-1 < (int)lVar14) {
      iVar9 = 3;
      if (uVar2 != 0) {
        iVar9 = 4;
      }
      iVar13 = 0x8a;
      if (uVar2 != 0) {
        iVar13 = 7;
      }
      uVar16 = (ulong)uVar18;
      puVar17 = (ushort *)((long)param_1 + 0xda);
      uVar6 = 0xffffffff;
      iVar10 = 0;
      do {
        uVar19 = (ulong)uVar2;
        uVar3 = *puVar17;
        iVar7 = iVar10 + 1;
        uVar18 = (uint)uVar2;
        uVar20 = (uint)uVar3;
        if ((iVar13 <= iVar7) || (uVar18 != uVar20)) {
          if (iVar7 < iVar9) {
            plVar5 = (long *)((long)param_1 + uVar19 * 4 + 0xabc);
            sVar4 = *(short *)((long)param_1 + uVar19 * 4 + 0xabc) + (short)iVar7;
          }
          else if (uVar18 == 0) {
            if (iVar10 < 10) {
              sVar4 = (short)param_1[0x160] + 1;
              plVar5 = param_1 + 0x160;
            }
            else {
              sVar4 = *(short *)((long)param_1 + 0xb04) + 1;
              plVar5 = (long *)((long)param_1 + 0xb04);
            }
          }
          else {
            if (uVar18 != (uint)uVar6) {
              *(short *)((long)param_1 + uVar19 * 4 + 0xabc) =
                   *(short *)((long)param_1 + uVar19 * 4 + 0xabc) + 1;
            }
            sVar4 = *(short *)((long)param_1 + 0xafc) + 1;
            plVar5 = (long *)((long)param_1 + 0xafc);
          }
          iVar9 = 6;
          if (uVar18 != uVar20) {
            iVar9 = 7;
          }
          *(short *)plVar5 = sVar4;
          iVar10 = 3;
          if (uVar18 != uVar20) {
            iVar10 = 4;
          }
          iVar7 = 0;
          iVar13 = 0x8a;
          if (uVar20 != 0) {
            iVar13 = iVar9;
          }
          iVar9 = 3;
          if (uVar20 != 0) {
            iVar9 = iVar10;
          }
          uVar6 = uVar19;
        }
        uVar16 = uVar16 - 1;
        puVar17 = puVar17 + 2;
        iVar10 = iVar7;
        uVar2 = uVar3;
      } while (uVar16 != 0);
    }
    lVar14 = param_1[0x16f];
    uVar18 = (int)lVar14 + 1;
    uVar2 = *(ushort *)((long)param_1 + 0x9ca);
    *(undefined2 *)((long)param_1 + (long)(int)uVar18 * 4 + 0x9ca) = 0xffff;
    if (-1 < (int)lVar14) {
      iVar9 = 3;
      if (uVar2 != 0) {
        iVar9 = 4;
      }
      iVar13 = 0x8a;
      if (uVar2 != 0) {
        iVar13 = 7;
      }
      uVar16 = (ulong)uVar18;
      puVar17 = (ushort *)((long)param_1 + 0x9ce);
      uVar6 = 0xffffffff;
      iVar10 = 0;
      do {
        uVar19 = (ulong)uVar2;
        uVar3 = *puVar17;
        iVar7 = iVar10 + 1;
        uVar18 = (uint)uVar2;
        uVar20 = (uint)uVar3;
        if ((iVar13 <= iVar7) || (uVar18 != uVar20)) {
          if (iVar7 < iVar9) {
            plVar5 = (long *)((long)param_1 + uVar19 * 4 + 0xabc);
            sVar4 = *(short *)((long)param_1 + uVar19 * 4 + 0xabc) + (short)iVar7;
          }
          else if (uVar18 == 0) {
            if (iVar10 < 10) {
              sVar4 = (short)param_1[0x160] + 1;
              plVar5 = param_1 + 0x160;
            }
            else {
              sVar4 = *(short *)((long)param_1 + 0xb04) + 1;
              plVar5 = (long *)((long)param_1 + 0xb04);
            }
          }
          else {
            if (uVar18 != (uint)uVar6) {
              *(short *)((long)param_1 + uVar19 * 4 + 0xabc) =
                   *(short *)((long)param_1 + uVar19 * 4 + 0xabc) + 1;
            }
            sVar4 = *(short *)((long)param_1 + 0xafc) + 1;
            plVar5 = (long *)((long)param_1 + 0xafc);
          }
          iVar9 = 6;
          if (uVar18 != uVar20) {
            iVar9 = 7;
          }
          *(short *)plVar5 = sVar4;
          iVar10 = 3;
          if (uVar18 != uVar20) {
            iVar10 = 4;
          }
          iVar7 = 0;
          iVar13 = 0x8a;
          if (uVar20 != 0) {
            iVar13 = iVar9;
          }
          iVar9 = 3;
          if (uVar20 != 0) {
            iVar9 = iVar10;
          }
          uVar6 = uVar19;
        }
        uVar16 = uVar16 - 1;
        puVar17 = puVar17 + 2;
        iVar10 = iVar7;
        uVar2 = uVar3;
      } while (uVar16 != 0);
    }
    FUN_00384370(param_1,param_1 + 0x171);
    if (*(short *)((long)param_1 + 0xafa) == 0) {
      if (*(short *)((long)param_1 + 0xac2) == 0) {
        if (*(short *)((long)param_1 + 0xaf6) == 0) {
          if (*(short *)((long)param_1 + 0xac6) == 0) {
            if (*(short *)((long)param_1 + 0xaf2) == 0) {
              if (*(short *)((long)param_1 + 0xaca) == 0) {
                if (*(short *)((long)param_1 + 0xaee) == 0) {
                  if (*(short *)((long)param_1 + 0xace) == 0) {
                    if (*(short *)((long)param_1 + 0xaea) == 0) {
                      if (*(short *)((long)param_1 + 0xad2) == 0) {
                        if (*(short *)((long)param_1 + 0xae6) == 0) {
                          if (*(short *)((long)param_1 + 0xad6) == 0) {
                            if (*(short *)((long)param_1 + 0xae2) == 0) {
                              if (*(short *)((long)param_1 + 0xada) == 0) {
                                if (*(short *)((long)param_1 + 0xade) == 0) {
                                  iVar9 = 2;
                                  if (*(short *)((long)param_1 + 0xabe) != 0) {
                                    iVar9 = 3;
                                  }
                                }
                                else {
                                  iVar9 = 4;
                                }
                              }
                              else {
                                iVar9 = 5;
                              }
                            }
                            else {
                              iVar9 = 6;
                            }
                          }
                          else {
                            iVar9 = 7;
                          }
                        }
                        else {
                          iVar9 = 8;
                        }
                      }
                      else {
                        iVar9 = 9;
                      }
                    }
                    else {
                      iVar9 = 10;
                    }
                  }
                  else {
                    iVar9 = 0xb;
                  }
                }
                else {
                  iVar9 = 0xc;
                }
              }
              else {
                iVar9 = 0xd;
              }
            }
            else {
              iVar9 = 0xe;
            }
          }
          else {
            iVar9 = 0xf;
          }
        }
        else {
          iVar9 = 0x10;
        }
      }
      else {
        iVar9 = 0x11;
      }
    }
    else {
      iVar9 = 0x12;
    }
    lVar14 = param_1[0x2e3] + (ulong)(iVar9 * 3 + 0x11);
    param_1[0x2e3] = lVar14;
    uVar6 = lVar14 + 10U >> 3;
    uVar16 = param_1[0x2e4] + 10U >> 3;
    if (uVar16 <= uVar6) {
      uVar6 = uVar16;
    }
    if (param_2 == 0) goto LAB_00383f34;
LAB_00383ef8:
    if (uVar6 < param_3 + 4U) goto LAB_00383f34;
    FUN_00383700(param_1,param_2,param_3,param_4);
    FUN_003835f0(param_1);
  }
  if (param_4 == 0) {
    return;
  }
  if (*(int *)((long)param_1 + 0x1734) < 9) {
    if (*(int *)((long)param_1 + 0x1734) < 1) goto LAB_0038430c;
    uVar8 = (undefined1)param_1[0x2e6];
  }
  else {
    lVar14 = param_1[5];
    param_1[5] = lVar14 + 1;
    *(char *)(param_1[2] + lVar14) = (char)param_1[0x2e6];
    uVar8 = *(undefined1 *)((long)param_1 + 0x1731);
  }
  lVar14 = param_1[5];
  param_1[5] = lVar14 + 1;
  *(undefined1 *)(param_1[2] + lVar14) = uVar8;
LAB_0038430c:
  *(undefined2 *)(param_1 + 0x2e6) = 0;
  *(undefined4 *)((long)param_1 + 0x1734) = 0;
  return;
}


