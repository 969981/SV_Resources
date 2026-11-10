/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0333b7ac; name: FUN_0333b7ac
 */


void FUN_0333b7ac(long *param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  undefined *puVar13;
  ulong *puVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  byte bVar29;
  byte *local_110;
  byte *pbStack_108;
  byte *local_100;
  undefined8 local_f8;
  byte local_f0 [128];
  int local_70;
  ulong local_68;
  
  local_100 = local_f0;
  local_f8._0_4_ = 0;
  local_f8._4_4_ = 0x80000080;
  local_70 = 1;
  FUN_031c6afc(&local_100,*param_3,*(int *)(param_3 + 1) - (int)*param_3);
  lVar12 = (long)(int)(uint)local_f8;
  uVar16 = 0xffffffff;
  lVar23 = lVar12 + -1;
  lVar21 = 0;
  do {
    lVar26 = lVar21;
    uVar16 = uVar16 + 1;
    if (lVar23 <= lVar26) break;
    lVar21 = lVar26 + 1;
  } while (local_100[lVar26] == 0x20 || local_100[lVar26] == 9);
  iVar7 = 0;
  lVar21 = -1;
  do {
    iVar8 = ((uint)local_f8 - 2) + iVar7;
    iVar7 = iVar7 + -1;
    lVar1 = lVar26 + 1 + lVar21;
    lVar21 = lVar21 + 1;
    if (lVar23 <= lVar1) break;
  } while (local_100[iVar8] == 0x20 || local_100[iVar8] == 9);
  uVar11 = (uint)lVar26;
  if ((int)(uint)lVar23 <= (int)(uint)lVar26) {
    uVar11 = (uint)lVar23;
  }
  uVar5 = (uint)local_f8;
  if (0 < (int)uVar11) {
    uVar5 = (uint)local_f8 - uVar11;
    if (uVar5 != 0) {
      if ((ulong)(lVar12 + (int)~uVar11) < 3) {
        uVar24 = 0;
      }
      else {
        uVar11 = uVar16;
        if ((int)((uint)local_f8 - 1) <= (int)uVar16) {
          uVar11 = (uint)local_f8 - 1;
        }
        uVar24 = 0;
        do {
          pbVar20 = local_100 + uVar24 + (ulong)uVar11 + 3;
          pbVar2 = local_100 + uVar24 + 1;
          uVar24 = uVar24 + 4;
          pbVar2[-1] = pbVar20[-3];
          *pbVar2 = pbVar20[-2];
          pbVar2[1] = pbVar20[-1];
          pbVar2[2] = *pbVar20;
        } while ((lVar12 - (int)uVar11 & 0xfffffffffffffffcU) != uVar24);
      }
      if ((uVar5 & 3) != 0) {
        if ((int)((uint)local_f8 - 1) <= (int)uVar16) {
          uVar16 = (uint)local_f8 - 1;
        }
        lVar12 = -((ulong)((uint)local_f8 - uVar16) & 3);
        pbVar20 = local_100 + uVar24;
        do {
          bVar6 = lVar12 != -1;
          lVar12 = lVar12 + 1;
          *pbVar20 = pbVar20[uVar16];
          pbVar20 = pbVar20 + 1;
        } while (bVar6);
      }
    }
  }
  local_f8._0_4_ = uVar5;
  if (0 < (int)lVar21) {
    uVar16 = (uint)local_f8 + iVar7 & ((int)((uint)local_f8 + iVar7) >> 0x1f ^ 0xffffffffU);
    uVar5 = (local_f8._4_4_ & 0x7fffffff) - 1;
    uVar11 = uVar16;
    if ((int)uVar5 <= (int)uVar16) {
      uVar11 = uVar5;
    }
    if (local_70 != 0) {
      uVar11 = uVar16;
    }
    uVar16 = uVar11 + 1;
    if ((int)(local_f8._4_4_ & 0x7fffffff) <= (int)uVar11) {
      FUN_030b4a20(&local_100,PTR_PTR_047d1a50 + 0x20,uVar16);
    }
    if ((int)(uint)local_f8 <= (int)uVar11 || (int)uVar16 < (int)(uint)local_f8) {
      local_f8._0_4_ = uVar16;
    }
    local_100[(int)uVar11] = 0;
  }
  pbVar20 = local_100;
  sVar9 = strlen((char *)local_100);
  if ((0 < (int)sVar9) && (pbVar20[(int)sVar9 + -1] == 0x5d)) {
    uVar16 = (uint)local_f8 - 2 & ((int)((uint)local_f8 - 2) >> 0x1f ^ 0xffffffffU);
    uVar5 = (local_f8._4_4_ & 0x7fffffff) - 1;
    uVar11 = uVar16;
    if ((int)uVar5 <= (int)uVar16) {
      uVar11 = uVar5;
    }
    if (local_70 != 0) {
      uVar11 = uVar16;
    }
    uVar16 = uVar11 + 1;
    if ((int)(local_f8._4_4_ & 0x7fffffff) <= (int)uVar11) {
      FUN_030b4a20(&local_100,PTR_PTR_047d1a50 + 0x20,uVar16);
    }
    if (((int)(uint)local_f8 <= (int)uVar11) || ((int)uVar16 < (int)(uint)local_f8)) {
      local_f8._0_4_ = uVar16;
    }
    local_100[(int)uVar11] = 0;
    lVar12 = (long)(int)(uint)local_f8;
    uVar16 = 0xffffffff;
    lVar23 = lVar12 + -1;
    lVar21 = 0;
    do {
      lVar26 = lVar21;
      uVar16 = uVar16 + 1;
      if (lVar23 <= lVar26) break;
      lVar21 = lVar26 + 1;
    } while (local_100[lVar26] == 0x20 || local_100[lVar26] == 9);
    iVar7 = 0;
    lVar21 = -1;
    do {
      iVar8 = ((uint)local_f8 - 2) + iVar7;
      iVar7 = iVar7 + -1;
      lVar1 = lVar26 + 1 + lVar21;
      lVar21 = lVar21 + 1;
      if (lVar23 <= lVar1) break;
    } while (local_100[iVar8] == 0x20 || local_100[iVar8] == 9);
    uVar11 = (uint)lVar26;
    if ((int)(uint)lVar23 <= (int)(uint)lVar26) {
      uVar11 = (uint)lVar23;
    }
    uVar5 = (uint)local_f8;
    if (0 < (int)uVar11) {
      uVar5 = (uint)local_f8 - uVar11;
      if (uVar5 != 0) {
        if ((ulong)(lVar12 + (int)~uVar11) < 3) {
          uVar24 = 0;
        }
        else {
          uVar11 = uVar16;
          if ((int)((uint)local_f8 - 1) <= (int)uVar16) {
            uVar11 = (uint)local_f8 - 1;
          }
          uVar24 = 0;
          do {
            pbVar20 = local_100 + uVar24 + (ulong)uVar11 + 3;
            pbVar2 = local_100 + uVar24 + 1;
            uVar24 = uVar24 + 4;
            pbVar2[-1] = pbVar20[-3];
            *pbVar2 = pbVar20[-2];
            pbVar2[1] = pbVar20[-1];
            pbVar2[2] = *pbVar20;
          } while ((lVar12 - (int)uVar11 & 0xfffffffffffffffcU) != uVar24);
        }
        if ((uVar5 & 3) != 0) {
          if ((int)((uint)local_f8 - 1) <= (int)uVar16) {
            uVar16 = (uint)local_f8 - 1;
          }
          lVar12 = -((ulong)((uint)local_f8 - uVar16) & 3);
          pbVar20 = local_100 + uVar24;
          do {
            bVar6 = lVar12 != -1;
            lVar12 = lVar12 + 1;
            *pbVar20 = pbVar20[uVar16];
            pbVar20 = pbVar20 + 1;
          } while (bVar6);
        }
      }
    }
    local_f8._0_4_ = uVar5;
    if (0 < (int)lVar21) {
      uVar16 = (uint)local_f8 + iVar7 & ((int)((uint)local_f8 + iVar7) >> 0x1f ^ 0xffffffffU);
      uVar5 = (local_f8._4_4_ & 0x7fffffff) - 1;
      uVar11 = uVar16;
      if ((int)uVar5 <= (int)uVar16) {
        uVar11 = uVar5;
      }
      if (local_70 != 0) {
        uVar11 = uVar16;
      }
      uVar16 = uVar11 + 1;
      if ((int)(local_f8._4_4_ & 0x7fffffff) <= (int)uVar11) {
        FUN_030b4a20(&local_100,PTR_PTR_047d1a50 + 0x20,uVar16);
      }
      if ((int)(uint)local_f8 <= (int)uVar11 || (int)uVar16 < (int)(uint)local_f8) {
        local_f8._0_4_ = uVar16;
      }
      local_100[(int)uVar11] = 0;
    }
    lVar12 = (long)(int)(uint)local_f8 + -2;
    lVar21 = lVar12;
    if (0 < lVar12) {
      lVar21 = 1;
    }
    do {
      lVar23 = lVar12;
      if (lVar23 < 2) goto LAB_0333c1f0;
      lVar12 = lVar23 + -1;
    } while (local_100[lVar23 + -1] - 0x30 < 10);
    lVar21 = lVar23;
LAB_0333c1f0:
    uVar24 = strtoul((char *)(local_100 + lVar21),(char **)0x0,0);
    lVar12 = (long)(int)(uint)local_f8;
    uVar16 = 0xffffffff;
    lVar23 = lVar12 + -1;
    lVar21 = 0;
    do {
      lVar26 = lVar21;
      uVar16 = uVar16 + 1;
      if (lVar23 <= lVar26) break;
      lVar21 = lVar26 + 1;
    } while (local_100[lVar26] == 0x20 || local_100[lVar26] == 9);
    iVar7 = 0;
    lVar21 = -1;
    do {
      iVar8 = ((uint)local_f8 - 2) + iVar7;
      iVar7 = iVar7 + -1;
      lVar1 = lVar26 + 1 + lVar21;
      lVar21 = lVar21 + 1;
      if (lVar23 <= lVar1) break;
    } while (local_100[iVar8] == 0x20 || local_100[iVar8] == 9);
    uVar11 = (uint)lVar26;
    if ((int)(uint)lVar23 <= (int)(uint)lVar26) {
      uVar11 = (uint)lVar23;
    }
    uVar5 = (uint)local_f8;
    if (0 < (int)uVar11) {
      uVar5 = (uint)local_f8 - uVar11;
      if (uVar5 != 0) {
        if ((ulong)(lVar12 + (int)~uVar11) < 3) {
          uVar25 = 0;
        }
        else {
          uVar11 = uVar16;
          if ((int)((uint)local_f8 - 1) <= (int)uVar16) {
            uVar11 = (uint)local_f8 - 1;
          }
          uVar25 = 0;
          do {
            pbVar20 = local_100 + uVar25 + (ulong)uVar11 + 3;
            pbVar2 = local_100 + uVar25 + 1;
            uVar25 = uVar25 + 4;
            pbVar2[-1] = pbVar20[-3];
            *pbVar2 = pbVar20[-2];
            pbVar2[1] = pbVar20[-1];
            pbVar2[2] = *pbVar20;
          } while ((lVar12 - (int)uVar11 & 0xfffffffffffffffcU) != uVar25);
        }
        if ((uVar5 & 3) != 0) {
          if ((int)((uint)local_f8 - 1) <= (int)uVar16) {
            uVar16 = (uint)local_f8 - 1;
          }
          lVar12 = -((ulong)((uint)local_f8 - uVar16) & 3);
          pbVar20 = local_100 + uVar25;
          do {
            bVar6 = lVar12 != -1;
            lVar12 = lVar12 + 1;
            *pbVar20 = pbVar20[uVar16];
            pbVar20 = pbVar20 + 1;
          } while (bVar6);
        }
      }
    }
    local_f8._0_4_ = uVar5;
    if (0 < (int)lVar21) {
      uVar16 = (uint)local_f8 + iVar7 & ((int)((uint)local_f8 + iVar7) >> 0x1f ^ 0xffffffffU);
      uVar5 = (local_f8._4_4_ & 0x7fffffff) - 1;
      uVar11 = uVar16;
      if ((int)uVar5 <= (int)uVar16) {
        uVar11 = uVar5;
      }
      if (local_70 != 0) {
        uVar11 = uVar16;
      }
      uVar16 = uVar11 + 1;
      if ((int)(local_f8._4_4_ & 0x7fffffff) <= (int)uVar11) {
        FUN_030b4a20(&local_100,PTR_PTR_047d1a50 + 0x20,uVar16);
      }
      if ((int)(uint)local_f8 <= (int)uVar11 || (int)uVar16 < (int)(uint)local_f8) {
        local_f8._0_4_ = uVar16;
      }
      local_100[(int)uVar11] = 0;
    }
    uVar16 = (uint)local_f8 - 2 & ((int)((uint)local_f8 - 2) >> 0x1f ^ 0xffffffffU);
    uVar5 = (local_f8._4_4_ & 0x7fffffff) - 1;
    uVar11 = uVar16;
    if ((int)uVar5 <= (int)uVar16) {
      uVar11 = uVar5;
    }
    if (local_70 != 0) {
      uVar11 = uVar16;
    }
    uVar16 = uVar11 + 1;
    if ((int)(local_f8._4_4_ & 0x7fffffff) <= (int)uVar11) {
      FUN_030b4a20(&local_100,PTR_PTR_047d1a50 + 0x20,uVar16);
    }
    if ((int)(uint)local_f8 <= (int)uVar11 || (int)uVar16 < (int)(uint)local_f8) {
      local_f8._0_4_ = uVar16;
    }
    local_100[(int)uVar11] = 0;
    lVar12 = (long)(int)(uint)local_f8;
    uVar16 = 0xffffffff;
    lVar23 = lVar12 + -1;
    lVar21 = 0;
    do {
      lVar26 = lVar21;
      uVar16 = uVar16 + 1;
      if (lVar23 <= lVar26) break;
      lVar21 = lVar26 + 1;
    } while (local_100[lVar26] == 0x20 || local_100[lVar26] == 9);
    iVar7 = 0;
    lVar21 = -1;
    do {
      iVar8 = ((uint)local_f8 - 2) + iVar7;
      iVar7 = iVar7 + -1;
      lVar1 = lVar26 + 1 + lVar21;
      lVar21 = lVar21 + 1;
      if (lVar23 <= lVar1) break;
    } while (local_100[iVar8] == 0x20 || local_100[iVar8] == 9);
    uVar11 = (uint)lVar26;
    if ((int)(uint)lVar23 <= (int)(uint)lVar26) {
      uVar11 = (uint)lVar23;
    }
    uVar5 = (uint)local_f8;
    if (0 < (int)uVar11) {
      uVar5 = (uint)local_f8 - uVar11;
      if (uVar5 != 0) {
        if ((ulong)(lVar12 + (int)~uVar11) < 3) {
          uVar25 = 0;
        }
        else {
          uVar11 = uVar16;
          if ((int)((uint)local_f8 - 1) <= (int)uVar16) {
            uVar11 = (uint)local_f8 - 1;
          }
          uVar25 = 0;
          do {
            pbVar20 = local_100 + uVar25 + (ulong)uVar11 + 3;
            pbVar2 = local_100 + uVar25 + 1;
            uVar25 = uVar25 + 4;
            pbVar2[-1] = pbVar20[-3];
            *pbVar2 = pbVar20[-2];
            pbVar2[1] = pbVar20[-1];
            pbVar2[2] = *pbVar20;
          } while ((lVar12 - (int)uVar11 & 0xfffffffffffffffcU) != uVar25);
        }
        if ((uVar5 & 3) != 0) {
          if ((int)((uint)local_f8 - 1) <= (int)uVar16) {
            uVar16 = (uint)local_f8 - 1;
          }
          lVar12 = -((ulong)((uint)local_f8 - uVar16) & 3);
          pbVar20 = local_100 + uVar25;
          do {
            bVar6 = lVar12 != -1;
            lVar12 = lVar12 + 1;
            *pbVar20 = pbVar20[uVar16];
            pbVar20 = pbVar20 + 1;
          } while (bVar6);
        }
      }
    }
    local_f8._0_4_ = uVar5;
    if (0 < (int)lVar21) {
      uVar16 = (uint)local_f8 + iVar7 & ((int)((uint)local_f8 + iVar7) >> 0x1f ^ 0xffffffffU);
      uVar5 = (local_f8._4_4_ & 0x7fffffff) - 1;
      uVar11 = uVar16;
      if ((int)uVar5 <= (int)uVar16) {
        uVar11 = uVar5;
      }
      if (local_70 != 0) {
        uVar11 = uVar16;
      }
      uVar16 = uVar11 + 1;
      if ((int)(local_f8._4_4_ & 0x7fffffff) <= (int)uVar11) {
        FUN_030b4a20(&local_100,PTR_PTR_047d1a50 + 0x20,uVar16);
      }
      if ((int)(uint)local_f8 <= (int)uVar11 || (int)uVar16 < (int)(uint)local_f8) {
        local_f8._0_4_ = uVar16;
      }
      local_100[(int)uVar11] = 0;
    }
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,0x68);
    puVar10[7] = 0;
    uVar16 = 8;
    if ((int)uVar24 != 0) {
      uVar16 = 0x28;
    }
    *puVar10 = 0x30800f;
    puVar10[1] = 0;
    puVar10[5] = &DAT_03bec20a;
    plVar28 = puVar10 + 2;
    *plVar28 = (long)(int)(uVar16 | (int)uVar24 << 8);
    plVar27 = puVar10 + 3;
    *plVar27 = 0;
    puVar10[4] = PTR_DAT_047e66f8;
    puVar10[0xb] = 1;
    puVar10[0xc] = 0;
    puVar10[8] = 0;
    puVar10[10] = 0;
    puVar10[6] = puVar10 + 10;
    puVar10[0xd] = &DAT_03c4f61e;
    pbStack_108 = local_100 + (long)(int)(uint)local_f8 + -1;
    local_110 = local_100;
    FUN_0333b7ac(param_1,plVar27,&local_110,param_4);
    puVar14 = (ulong *)*plVar27;
    puVar17 = puVar14;
    do {
      uVar16 = (uint)*puVar17;
      if ((uVar16 >> 0x14 & 1) != 0) {
        uVar25 = 0;
        if (puVar17 != (ulong *)0x0) {
          uVar16 = uVar16 & 0xfffff;
          uVar25 = (ulong)(ushort)puVar17[(ulong)(byte)(POPCOUNT((char)uVar16) +
                                                        POPCOUNT((char)(uVar16 >> 8)) +
                                                       POPCOUNT((char)(uVar16 >> 0x10))) + 2];
        }
        goto LAB_0333c6d4;
      }
      if ((*puVar17 & 1) != 0) {
        uVar25 = 0;
        goto LAB_0333c6d4;
      }
      puVar17 = (ulong *)puVar17[1];
    } while (puVar17 != (ulong *)0x0);
    uVar25 = 0;
LAB_0333c6d4:
    while( true ) {
      uVar16 = (uint)*puVar14;
      if ((uVar16 >> 0x14 & 1) != 0) break;
      if (((*puVar14 & 1) != 0) || (puVar14 = (ulong *)puVar14[1], puVar14 == (ulong *)0x0))
      goto LAB_0333c71c;
    }
    if (puVar14 != (ulong *)0x0) {
      uVar16 = uVar16 & 0xfffff;
      uVar18 = puVar14[(ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8)) +
                                    POPCOUNT((char)(uVar16 >> 0x10))) + 2] & 0xfff0000;
      goto LAB_0333c720;
    }
LAB_0333c71c:
    uVar18 = 0;
LAB_0333c720:
    uVar11 = (uint)*puVar10;
    uVar16 = uVar11 & 0xfffff;
    bVar29 = POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8)) +
             POPCOUNT((char)(uVar16 >> 0x10));
    if ((uVar11 >> 0x14 & 1) == 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = plVar28[bVar29] & 0xf0000000;
    }
    plVar28[bVar29] = uVar18 | uVar25 * uVar24 & 0xffff | uVar22;
    puVar19 = puVar10;
    if ((uVar11 >> 0xf & 1) == 0) {
      do {
        puVar19 = (undefined8 *)puVar19[1];
        uVar11 = (uint)*puVar19;
      } while ((uVar11 >> 0xf & 1) == 0);
    }
    *(undefined8 *)
     (puVar19[(ulong)(byte)(POPCOUNT((char)(uVar11 & 0x7fff)) +
                           POPCOUNT((char)((uVar11 & 0x7fff) >> 8))) + 2] + 0x10) = puVar10[3];
    if (param_2 != (long *)0x0) {
      *param_2 = (long)puVar10;
    }
    goto LAB_0333cdc0;
  }
  bVar29 = *pbVar20;
  iVar7 = tolower((uint)bVar29);
  iVar8 = tolower(0x68);
  if (iVar7 == iVar8) {
    iVar7 = tolower((uint)pbVar20[1]);
    iVar8 = tolower(0x6b);
    if (iVar7 != iVar8) goto LAB_0333bc1c;
    iVar7 = tolower((uint)pbVar20[2]);
    iVar8 = tolower(0x41);
    if (iVar7 != iVar8) goto LAB_0333bc1c;
    iVar7 = tolower((uint)pbVar20[3]);
    iVar8 = tolower(0x72);
    if (iVar7 != iVar8) goto LAB_0333bc1c;
    iVar7 = tolower((uint)pbVar20[4]);
    iVar8 = tolower(0x72);
    if (iVar7 != iVar8) goto LAB_0333bc1c;
    iVar7 = tolower((uint)pbVar20[5]);
    iVar8 = tolower(0x61);
    if (iVar7 != iVar8) goto LAB_0333bc1c;
    iVar7 = tolower((uint)pbVar20[6]);
    iVar8 = tolower(0x79);
    if (iVar7 != iVar8) goto LAB_0333bc1c;
    lVar21 = (long)(int)(uint)local_f8;
    uVar16 = 7;
    if ((int)(uint)local_f8 < 8) {
      uVar16 = (uint)local_f8 - 1;
    }
    if ((0 < (int)uVar16) && (local_f8._0_4_ = (uint)local_f8 - uVar16, (uint)local_f8 != 0)) {
      uVar24 = (long)(int)(uint)local_f8 & 3;
      if ((ulong)(lVar21 + (int)~uVar16) < 3) {
        uVar25 = 0;
      }
      else {
        uVar25 = 0;
        do {
          pbVar2 = pbVar20 + uVar25 + (ulong)uVar16 + 3;
          pbVar3 = pbVar20 + uVar25 + 1;
          uVar25 = uVar25 + 4;
          pbVar3[-1] = pbVar2[-3];
          *pbVar3 = pbVar2[-2];
          pbVar3[1] = pbVar2[-1];
          pbVar3[2] = *pbVar2;
        } while (((long)(int)(uint)local_f8 & 0xfffffffffffffffcU) != uVar25);
      }
      if (uVar24 != 0) {
        pbVar20 = pbVar20 + uVar25;
        do {
          uVar24 = uVar24 - 1;
          *pbVar20 = pbVar20[uVar16];
          pbVar20 = pbVar20 + 1;
        } while (uVar24 != 0);
      }
    }
    FUN_0333ce10(&local_100);
    puVar19 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,0x78);
    puVar19[4] = param_1[0x12];
    puVar19[5] = "hkArray";
    *puVar19 = 0x30800f;
    puVar19[1] = 0;
    puVar19[7] = 0x80018;
    puVar19[8] = 0;
    puVar19[2] = 8;
    puVar10 = puVar19 + 3;
    *puVar10 = 0x22222222;
    puVar19[0xb] = 2;
    puVar19[10] = 0;
    puVar19[6] = puVar19 + 10;
    puVar13 = PTR_DAT_047e4b78;
    puVar19[0xc] = 0x22222222;
    puVar19[0xd] = &DAT_03c4f61e;
    puVar19[0xe] = puVar13;
    puVar19[0xf] = "tAllocator";
    pbStack_108 = local_100 + (long)(int)(uint)local_f8 + -1;
    local_110 = local_100;
    FUN_0333b7ac(param_1,puVar10,&local_110,param_4);
    uVar15 = *puVar10;
    uVar16 = (uint)*puVar19;
    puVar10 = puVar19;
    if ((uVar16 >> 0xf & 1) != 0) goto LAB_0333cd90;
    do {
      puVar10 = (undefined8 *)puVar10[1];
      uVar16 = (uint)*puVar10;
    } while ((uVar16 >> 0xf & 1) == 0);
  }
  else {
LAB_0333bc1c:
    iVar7 = tolower((uint)bVar29);
    iVar8 = tolower(0x68);
    if (iVar7 == iVar8) {
      lVar21 = 1;
LAB_0333bc44:
      if (lVar21 != 0x1d) goto code_r0x0333bc4c;
      lVar21 = (long)(int)(uint)local_f8;
      uVar16 = 0x1d;
      if ((int)(uint)local_f8 < 0x1e) {
        uVar16 = (uint)local_f8 - 1;
      }
      if ((0 < (int)uVar16) && (local_f8._0_4_ = (uint)local_f8 - uVar16, (uint)local_f8 != 0)) {
        uVar24 = (long)(int)(uint)local_f8 & 3;
        if ((ulong)(lVar21 + (int)~uVar16) < 3) {
          uVar25 = 0;
        }
        else {
          uVar25 = 0;
          do {
            pbVar2 = pbVar20 + uVar25 + (ulong)uVar16 + 3;
            pbVar3 = pbVar20 + uVar25 + 1;
            uVar25 = uVar25 + 4;
            pbVar3[-1] = pbVar2[-3];
            *pbVar3 = pbVar2[-2];
            pbVar3[1] = pbVar2[-1];
            pbVar3[2] = *pbVar2;
          } while (((long)(int)(uint)local_f8 & 0xfffffffffffffffcU) != uVar25);
        }
        if (uVar24 != 0) {
          pbVar20 = pbVar20 + uVar25;
          do {
            uVar24 = uVar24 - 1;
            *pbVar20 = pbVar20[uVar16];
            pbVar20 = pbVar20 + 1;
          } while (uVar24 != 0);
        }
      }
      FUN_0333ce10(&local_100);
      puVar19 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,0x78);
      lVar21 = param_1[0x12];
      puVar19[7] = 0x80018;
      puVar19[8] = 0;
      *puVar19 = 0x30800f;
      puVar19[1] = 0;
      puVar19[4] = lVar21;
      puVar19[5] = "hkDefaultFreeListArrayStorage";
      puVar19[2] = 8;
      puVar10 = puVar19 + 3;
      *puVar10 = 0x22222222;
      puVar19[0xb] = 1;
      puVar19[0xc] = 0x22222222;
      puVar19[10] = 0;
      puVar19[6] = puVar19 + 10;
      puVar19[0xd] = &DAT_03c4f61e;
      pbStack_108 = local_100 + (long)(int)(uint)local_f8 + -1;
      local_110 = local_100;
      FUN_0333b7ac(param_1,puVar10,&local_110,param_4);
      uVar15 = *puVar10;
      uVar16 = (uint)*puVar19;
      puVar10 = puVar19;
      if ((uVar16 >> 0xf & 1) != 0) goto LAB_0333cd90;
      do {
        puVar10 = (undefined8 *)puVar10[1];
        uVar16 = (uint)*puVar10;
      } while ((uVar16 >> 0xf & 1) == 0);
      goto LAB_0333cd94;
    }
LAB_0333bc70:
    iVar7 = tolower((uint)bVar29);
    iVar8 = tolower(0x68);
    if (iVar7 == iVar8) {
      lVar21 = 1;
LAB_0333bc98:
      if (lVar21 != 0x19) goto code_r0x0333bca0;
      lVar21 = (long)(int)(uint)local_f8;
      uVar16 = 0x19;
      if ((int)(uint)local_f8 < 0x1a) {
        uVar16 = (uint)local_f8 - 1;
      }
      if ((0 < (int)uVar16) && (local_f8._0_4_ = (uint)local_f8 - uVar16, (uint)local_f8 != 0)) {
        uVar24 = (long)(int)(uint)local_f8 & 3;
        if ((ulong)(lVar21 + (int)~uVar16) < 3) {
          uVar25 = 0;
        }
        else {
          uVar25 = 0;
          do {
            pbVar2 = pbVar20 + uVar25 + (ulong)uVar16 + 3;
            pbVar3 = pbVar20 + uVar25 + 1;
            uVar25 = uVar25 + 4;
            pbVar3[-1] = pbVar2[-3];
            *pbVar3 = pbVar2[-2];
            pbVar3[1] = pbVar2[-1];
            pbVar3[2] = *pbVar2;
          } while (((long)(int)(uint)local_f8 & 0xfffffffffffffffcU) != uVar25);
        }
        if (uVar24 != 0) {
          pbVar20 = pbVar20 + uVar25;
          do {
            uVar24 = uVar24 - 1;
            *pbVar20 = pbVar20[uVar16];
            pbVar20 = pbVar20 + 1;
          } while (uVar24 != 0);
        }
      }
      FUN_0333ce10(&local_100);
      puVar19 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,0x78);
      lVar21 = param_1[0x12];
      puVar19[7] = 0x80018;
      puVar19[8] = 0;
      *puVar19 = 0x30800f;
      puVar19[1] = 0;
      puVar19[4] = lVar21;
      puVar19[5] = "hkFreeListRelArrayStorage";
      puVar19[2] = 8;
      puVar10 = puVar19 + 3;
      *puVar10 = 0x22222222;
      puVar19[0xb] = 1;
      puVar19[0xc] = 0x22222222;
      puVar19[10] = 0;
      puVar19[6] = puVar19 + 10;
      puVar19[0xd] = &DAT_03c4f61e;
      pbStack_108 = local_100 + (long)(int)(uint)local_f8 + -1;
      local_110 = local_100;
      FUN_0333b7ac(param_1,puVar10,&local_110,param_4);
      uVar15 = *puVar10;
      uVar16 = (uint)*puVar19;
      puVar10 = puVar19;
      if ((uVar16 >> 0xf & 1) != 0) goto LAB_0333cd90;
      do {
        puVar10 = (undefined8 *)puVar10[1];
        uVar16 = (uint)*puVar10;
      } while ((uVar16 >> 0xf & 1) == 0);
      goto LAB_0333cd94;
    }
LAB_0333bcc4:
    if (bVar29 != 0x68) {
LAB_0333beb8:
      pbStack_108 = pbVar20 + (long)(int)(uint)local_f8 + -1;
      local_110 = pbVar20;
      if (pbVar20 != pbStack_108) {
        FUN_031ca554(&local_68,pbVar20);
        lVar21 = FUN_033418d0(param_4,&local_68);
        if (lVar21 == 0) {
          iVar7 = -1;
        }
        else {
          iVar7 = *(int *)(*param_4 + (long)*(int *)(lVar21 + 4) * 0x10 + 8);
        }
        if ((local_68 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_68 - 1,0);
        }
        if (iVar7 != -1) {
          lVar21 = FUN_03342334(*(undefined8 *)(*(long *)(param_1[0x20] + 0x68) + 0x90),&local_110,
                                iVar7);
          uVar16 = *(uint *)((long)param_1 + 100);
          if (0 < (int)uVar16) {
            uVar11 = (int)lVar21 * -0x61c8864f;
            uVar5 = (int)((ulong)lVar21 >> 0x20) * -0x61c8864f;
            uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
            uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
            uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
            uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
            uVar24 = (ulong)((uVar11 + (uVar11 >> 2) + uVar5 * 0x40 + 0x9e3779b9 ^ uVar5) & uVar16);
            lVar12 = param_1[0xb];
            lVar23 = *(long *)(lVar12 + uVar24 * 0x10);
            if (lVar23 != -1) {
              if (lVar23 != lVar21) {
                do {
                  uVar24 = (ulong)((int)uVar24 + 1U & uVar16);
                  lVar23 = *(long *)(lVar12 + uVar24 * 0x10);
                  if (lVar23 == -1) goto LAB_0333c098;
                } while (lVar23 != lVar21);
              }
              uVar24 = *(ulong *)(lVar12 + uVar24 * 0x10 + 8);
              iVar7 = (int)uVar24;
              if (((-1 < iVar7) && (iVar7 != 0x50000000)) &&
                 (puVar10 = *(undefined8 **)(param_1[9] + (uVar24 & 0xffffffff) * 8),
                 puVar10 != (undefined8 *)0x0)) {
                if (param_2 == (long *)0x0) goto LAB_0333cdc0;
                puVar13 = (undefined *)*puVar10;
                goto LAB_0333c090;
              }
            }
          }
        }
      }
LAB_0333c098:
      lVar21 = (**(code **)(*(long *)param_1[0x21] + 0x20))((long *)param_1[0x21],local_100);
      if ((param_2 != (long *)0x0) && (lVar21 != 0)) {
        *param_2 = lVar21;
      }
      goto LAB_0333cdc0;
    }
    if ((((pbVar20[1] == 0x6b) && (pbVar20[2] == 0x50)) && (pbVar20[3] == 0x74)) &&
       (pbVar20[4] == 0x72)) {
      lVar21 = (long)(int)(uint)local_f8;
      uVar16 = 5;
      if ((int)(uint)local_f8 < 6) {
        uVar16 = (uint)local_f8 - 1;
      }
      if ((0 < (int)uVar16) && (local_f8._0_4_ = (uint)local_f8 - uVar16, (uint)local_f8 != 0)) {
        uVar24 = (long)(int)(uint)local_f8 & 3;
        if ((ulong)(lVar21 + (int)~uVar16) < 3) {
          uVar25 = 0;
        }
        else {
          uVar25 = 0;
          do {
            pbVar2 = pbVar20 + uVar25 + (ulong)uVar16 + 3;
            pbVar3 = pbVar20 + uVar25 + 1;
            uVar25 = uVar25 + 4;
            pbVar3[-1] = pbVar2[-3];
            *pbVar3 = pbVar2[-2];
            pbVar3[1] = pbVar2[-1];
            pbVar3[2] = *pbVar2;
          } while (((long)(int)(uint)local_f8 & 0xfffffffffffffffcU) != uVar25);
        }
        if (uVar24 != 0) {
          pbVar20 = pbVar20 + uVar25;
          do {
            uVar24 = uVar24 - 1;
            *pbVar20 = pbVar20[uVar16];
            pbVar20 = pbVar20 + 1;
          } while (uVar24 != 0);
        }
      }
      FUN_0333ce10(&local_100);
      puVar19 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,0x70);
      puVar19[7] = 0x80008;
      *puVar19 = 0x30800f;
      puVar19[1] = 0;
      puVar19[2] = 6;
      puVar10 = puVar19 + 3;
      *puVar10 = 0x22222222;
      puVar19[4] = PTR_DAT_047e66c0;
      puVar19[5] = "hkPtr";
      puVar19[0xb] = 1;
      puVar19[0xc] = 0x22222222;
      puVar19[8] = 0;
      puVar19[10] = 0;
      puVar19[6] = puVar19 + 10;
      puVar19[0xd] = &DAT_03c4f61e;
      puVar19[4] = param_1[0x14];
      pbStack_108 = local_100 + (long)(int)(uint)local_f8 + -1;
      local_110 = local_100;
      FUN_0333b7ac(param_1,puVar10,&local_110,param_4);
      uVar15 = *puVar10;
      uVar16 = (uint)*puVar19;
      puVar10 = puVar19;
      if ((uVar16 >> 0xf & 1) == 0) {
        do {
          puVar10 = (undefined8 *)puVar10[1];
          uVar16 = (uint)*puVar10;
        } while ((uVar16 >> 0xf & 1) == 0);
      }
      else {
LAB_0333cd90:
        puVar19 = puVar10;
      }
    }
    else {
      if ((((pbVar20[1] != 0x6b) || (pbVar20[2] != 0x56)) ||
          ((pbVar20[3] != 0x69 ||
           (((pbVar20[4] != 0x65 || (pbVar20[5] != 0x77)) || (pbVar20[6] != 0x50)))))) ||
         ((pbVar20[7] != 0x74 || (pbVar20[8] != 0x72)))) {
        if ((((pbVar20[1] != 0x6b) ||
             (((pbVar20[2] != 0x52 || (pbVar20[3] != 0x65)) ||
              ((pbVar20[4] != 0x66 ||
               (((pbVar20[5] != 0x6c || (pbVar20[6] != 0x65)) || (pbVar20[7] != 99)))))))) ||
            (((pbVar20[8] != 0x74 || (pbVar20[9] != 0x3a)) || (pbVar20[10] != 0x3a)))) ||
           (((pbVar20[0xb] != 0x54 || (pbVar20[0xc] != 0x79)) ||
            ((pbVar20[0xd] != 0x70 || ((pbVar20[0xe] != 0x65 || (pbVar20[0xf] != 0x2a))))))))
        goto LAB_0333beb8;
        if (param_2 == (long *)0x0) goto LAB_0333cdc0;
        puVar13 = PTR_DAT_047e5c40;
LAB_0333c090:
        *param_2 = (long)puVar13;
        goto LAB_0333cdc0;
      }
      lVar21 = (long)(int)(uint)local_f8;
      uVar16 = 9;
      if ((int)(uint)local_f8 < 10) {
        uVar16 = (uint)local_f8 - 1;
      }
      if ((0 < (int)uVar16) && (local_f8._0_4_ = (uint)local_f8 - uVar16, (uint)local_f8 != 0)) {
        uVar24 = (long)(int)(uint)local_f8 & 3;
        if ((ulong)(lVar21 + (int)~uVar16) < 3) {
          uVar25 = 0;
        }
        else {
          uVar25 = 0;
          do {
            pbVar2 = pbVar20 + uVar25 + (ulong)uVar16 + 3;
            pbVar3 = pbVar20 + uVar25 + 1;
            uVar25 = uVar25 + 4;
            pbVar3[-1] = pbVar2[-3];
            *pbVar3 = pbVar2[-2];
            pbVar3[1] = pbVar2[-1];
            pbVar3[2] = *pbVar2;
          } while (((long)(int)(uint)local_f8 & 0xfffffffffffffffcU) != uVar25);
        }
        if (uVar24 != 0) {
          pbVar20 = pbVar20 + uVar25;
          do {
            uVar24 = uVar24 - 1;
            *pbVar20 = pbVar20[uVar16];
            pbVar20 = pbVar20 + 1;
          } while (uVar24 != 0);
        }
      }
      FUN_0333ce10(&local_100);
      puVar19 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,0x70);
      puVar19[7] = 0x80008;
      *puVar19 = 0x30800f;
      puVar19[1] = 0;
      puVar19[2] = 6;
      puVar10 = puVar19 + 3;
      *puVar10 = 0x22222222;
      puVar19[4] = PTR_DAT_047e66c0;
      puVar19[5] = "hkViewPtr";
      puVar19[0xb] = 1;
      puVar19[0xc] = 0x22222222;
      puVar19[8] = 0;
      puVar19[10] = 0;
      puVar19[6] = puVar19 + 10;
      puVar19[0xd] = &DAT_03c4f61e;
      puVar19[4] = param_1[0x14];
      pbStack_108 = local_100 + (long)(int)(uint)local_f8 + -1;
      local_110 = local_100;
      FUN_0333b7ac(param_1,puVar10,&local_110,param_4);
      uVar15 = *puVar10;
      uVar16 = (uint)*puVar19;
      puVar10 = puVar19;
      if ((uVar16 >> 0xf & 1) != 0) goto LAB_0333cd90;
      do {
        puVar10 = (undefined8 *)puVar10[1];
        uVar16 = (uint)*puVar10;
      } while ((uVar16 >> 0xf & 1) == 0);
    }
  }
LAB_0333cd94:
  *(undefined8 *)
   (puVar10[(ulong)(byte)(POPCOUNT((char)(uVar16 & 0x7fff)) +
                         POPCOUNT((char)((uVar16 & 0x7fff) >> 8))) + 2] + 0x10) = uVar15;
  if (param_2 != (long *)0x0) {
    *param_2 = (long)puVar19;
  }
LAB_0333cdc0:
  uVar16 = local_f8._4_4_;
  local_f8 = (ulong)local_f8._4_4_ << 0x20;
  if ((-1 < (int)uVar16) && (local_100 != (byte *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return;
code_r0x0333bc4c:
  bVar4 = "hkDefaultFreeListArrayStorage"[lVar21];
  iVar7 = tolower((uint)pbVar20[lVar21]);
  iVar8 = tolower((uint)bVar4);
  lVar21 = lVar21 + 1;
  if (iVar7 != iVar8) goto LAB_0333bc70;
  goto LAB_0333bc44;
code_r0x0333bca0:
  bVar4 = "hkFreeListRelArrayStorage"[lVar21];
  iVar7 = tolower((uint)pbVar20[lVar21]);
  iVar8 = tolower((uint)bVar4);
  lVar21 = lVar21 + 1;
  if (iVar7 != iVar8) goto LAB_0333bcc4;
  goto LAB_0333bc98;
}


