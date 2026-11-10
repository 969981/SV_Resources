/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d0278c; name: FUN_00d0278c
 */


undefined8 FUN_00d0278c(long *param_1,long *param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  void *local_98;
  long local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  
  plVar1 = param_1 + 2;
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && param_1[3] == 0) {
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      param_1[3] = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00d027d8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 4));
  do {
    if (*plVar1 != 0 || param_1[3] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 4));
        while (*plVar1 == 0 && param_1[3] == 0) {
          cVar2 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar6;
            param_1[3] = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00d027d8;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      param_1[3] = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00d027d8:
  uVar15 = *(ulong *)(*param_2 + 0x48);
  uVar11 = param_1[0x5a];
  if (uVar11 != 0) {
    uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar11 - 1 & uVar15;
    }
    else {
      uVar10 = uVar15;
      if (uVar11 <= uVar15) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = uVar15 / uVar11;
        }
        uVar10 = uVar15 - uVar10 * uVar11;
      }
    }
    plVar12 = *(long **)(param_1[0x59] + uVar10 * 8);
    if ((plVar12 == (long *)0x0) || (plVar12 = (long *)*plVar12, plVar12 == (long *)0x0))
    goto LAB_00d0288c;
    if (uVar9 < 2) {
      do {
        if (plVar12[1] == uVar15) {
          if (plVar12[2] == uVar15) goto LAB_00d02928;
        }
        else if ((plVar12[1] & uVar11 - 1) != uVar10) goto LAB_00d0288c;
        plVar12 = (long *)*plVar12;
        lVar6 = 0;
      } while (plVar12 != (long *)0x0);
      goto LAB_00d02938;
    }
    while (uVar9 = plVar12[1], uVar9 != uVar15) {
      if (uVar11 <= uVar9) {
        uVar3 = 0;
        if (uVar11 != 0) {
          uVar3 = uVar9 / uVar11;
        }
        uVar9 = uVar9 - uVar3 * uVar11;
      }
      if (uVar9 != uVar10) goto LAB_00d0288c;
LAB_00d02884:
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) goto LAB_00d0288c;
    }
    if (plVar12[2] != uVar15) goto LAB_00d02884;
LAB_00d02928:
    lVar6 = plVar12[4];
    if ((param_3 != 0) || (lVar6 != 1)) goto LAB_00d02938;
LAB_00d02e78:
    uVar17 = 0;
    goto LAB_00d03278;
  }
LAB_00d0288c:
  lVar6 = 0;
LAB_00d02938:
  FUN_00d04214(param_1,0);
  plVar18 = (long *)param_1[0x21];
  plVar20 = (long *)param_1[0x22];
  plVar12 = param_1 + 6;
  if (plVar18 != plVar20) {
    do {
      local_80 = *plVar18;
      uVar11 = param_1[0xe];
      lVar16 = param_1[7];
      plVar23 = (long *)(lVar16 + (uVar11 >> 6 & 0x3fffffffffffff8));
      if (param_1[8] == lVar16) {
        uVar11 = param_1[0xf] + uVar11;
        plVar7 = (long *)0x0;
        plVar14 = (long *)0x0;
        plVar13 = (long *)(lVar16 + (uVar11 >> 6 & 0x3fffffffffffff8));
      }
      else {
        plVar7 = (long *)(*plVar23 + (uVar11 & 0x1ff) * 8);
        uVar11 = param_1[0xf] + uVar11;
        plVar13 = (long *)(lVar16 + (uVar11 >> 6 & 0x3fffffffffffff8));
        plVar14 = (long *)(*plVar13 + (uVar11 & 0x1ff) * 8);
      }
      while ((plVar7 != plVar14 && (*plVar7 != local_80))) {
        plVar7 = plVar7 + 1;
        if ((long)plVar7 - *plVar23 == 0x1000) {
          plVar23 = plVar23 + 1;
          plVar7 = (long *)*plVar23;
        }
      }
      if (param_1[8] == lVar16) {
        plVar23 = (long *)0x0;
      }
      else {
        plVar23 = (long *)(*plVar13 + (uVar11 & 0x1ff) * 8);
      }
      if (plVar7 != plVar23) {
        FUN_00d03778(plVar12);
        FUN_00d03628(plVar12,&local_80);
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar20);
    plVar18 = (long *)param_1[0x21];
  }
  param_1[0x22] = (long)plVar18;
  plVar18 = (long *)param_1[0x28];
  plVar20 = (long *)param_1[0x29];
  if (plVar18 != plVar20) {
    do {
      local_80 = *plVar18;
      uVar11 = param_1[0xe];
      lVar16 = param_1[7];
      plVar23 = (long *)(lVar16 + (uVar11 >> 6 & 0x3fffffffffffff8));
      if (param_1[8] == lVar16) {
        uVar11 = param_1[0xf] + uVar11;
        plVar7 = (long *)0x0;
        plVar14 = (long *)0x0;
        plVar13 = (long *)(lVar16 + (uVar11 >> 6 & 0x3fffffffffffff8));
      }
      else {
        plVar7 = (long *)(*plVar23 + (uVar11 & 0x1ff) * 8);
        uVar11 = param_1[0xf] + uVar11;
        plVar13 = (long *)(lVar16 + (uVar11 >> 6 & 0x3fffffffffffff8));
        plVar14 = (long *)(*plVar13 + (uVar11 & 0x1ff) * 8);
      }
      while ((plVar7 != plVar14 && (*plVar7 != local_80))) {
        plVar7 = plVar7 + 1;
        if ((long)plVar7 - *plVar23 == 0x1000) {
          plVar23 = plVar23 + 1;
          plVar7 = (long *)*plVar23;
        }
      }
      if (param_1[8] == lVar16) {
        plVar23 = (long *)0x0;
      }
      else {
        plVar23 = (long *)(*plVar13 + (uVar11 & 0x1ff) * 8);
      }
      if (plVar7 != plVar23) {
        FUN_00d03778(plVar12);
        FUN_00d03628(plVar12,&local_80);
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar20);
    plVar18 = (long *)param_1[0x28];
  }
  param_1[0x29] = (long)plVar18;
  plVar18 = (long *)param_1[0x2f];
  plVar20 = (long *)param_1[0x30];
  if (plVar18 != plVar20) {
    do {
      local_80 = *plVar18;
      uVar11 = param_1[0xe];
      lVar16 = param_1[7];
      plVar23 = (long *)(lVar16 + (uVar11 >> 6 & 0x3fffffffffffff8));
      if (param_1[8] == lVar16) {
        uVar11 = param_1[0xf] + uVar11;
        plVar7 = (long *)0x0;
        plVar14 = (long *)0x0;
        plVar13 = (long *)(lVar16 + (uVar11 >> 6 & 0x3fffffffffffff8));
      }
      else {
        plVar7 = (long *)(*plVar23 + (uVar11 & 0x1ff) * 8);
        uVar11 = param_1[0xf] + uVar11;
        plVar13 = (long *)(lVar16 + (uVar11 >> 6 & 0x3fffffffffffff8));
        plVar14 = (long *)(*plVar13 + (uVar11 & 0x1ff) * 8);
      }
      while ((plVar7 != plVar14 && (*plVar7 != local_80))) {
        plVar7 = plVar7 + 1;
        if ((long)plVar7 - *plVar23 == 0x1000) {
          plVar23 = plVar23 + 1;
          plVar7 = (long *)*plVar23;
        }
      }
      if (param_1[8] == lVar16) {
        plVar23 = (long *)0x0;
      }
      else {
        plVar23 = (long *)(*plVar13 + (uVar11 & 0x1ff) * 8);
      }
      if (plVar7 != plVar23) {
        FUN_00d03778(plVar12);
        FUN_00d03628(plVar12,&local_80);
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar20);
    plVar18 = (long *)param_1[0x2f];
  }
  param_1[0x30] = (long)plVar18;
  plVar18 = (long *)param_1[0x36];
  plVar20 = (long *)param_1[0x37];
  if (plVar18 != plVar20) {
    do {
      local_80 = *plVar18;
      uVar11 = param_1[0xe];
      lVar16 = param_1[7];
      plVar23 = (long *)(lVar16 + (uVar11 >> 6 & 0x3fffffffffffff8));
      if (param_1[8] == lVar16) {
        uVar11 = param_1[0xf] + uVar11;
        plVar7 = (long *)0x0;
        plVar14 = (long *)0x0;
        plVar13 = (long *)(lVar16 + (uVar11 >> 6 & 0x3fffffffffffff8));
      }
      else {
        plVar7 = (long *)(*plVar23 + (uVar11 & 0x1ff) * 8);
        uVar11 = param_1[0xf] + uVar11;
        plVar13 = (long *)(lVar16 + (uVar11 >> 6 & 0x3fffffffffffff8));
        plVar14 = (long *)(*plVar13 + (uVar11 & 0x1ff) * 8);
      }
      while ((plVar7 != plVar14 && (*plVar7 != local_80))) {
        plVar7 = plVar7 + 1;
        if ((long)plVar7 - *plVar23 == 0x1000) {
          plVar23 = plVar23 + 1;
          plVar7 = (long *)*plVar23;
        }
      }
      if (param_1[8] == lVar16) {
        plVar23 = (long *)0x0;
      }
      else {
        plVar23 = (long *)(*plVar13 + (uVar11 & 0x1ff) * 8);
      }
      if (plVar7 != plVar23) {
        FUN_00d03778(plVar12);
        FUN_00d03628(plVar12,&local_80);
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar20);
    plVar18 = (long *)param_1[0x36];
  }
  uVar11 = param_1[0x15];
  param_1[0x37] = (long)plVar18;
  if (uVar11 != 0) {
    uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar11 - 1 & uVar15;
    }
    else {
      uVar10 = uVar15;
      if (uVar11 <= uVar15) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = uVar15 / uVar11;
        }
        uVar10 = uVar15 - uVar10 * uVar11;
      }
    }
    plVar18 = *(long **)(param_1[0x14] + uVar10 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar18[1] == uVar15) {
            if (plVar18[2] == uVar15) goto LAB_00d02d7c;
          }
          else if ((plVar18[1] & uVar11 - 1) != uVar10) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar18[1];
          if (uVar9 != uVar15) {
            if (uVar11 <= uVar9) {
              uVar3 = 0;
              if (uVar11 != 0) {
                uVar3 = uVar9 / uVar11;
              }
              uVar9 = uVar9 - uVar3 * uVar11;
            }
            if (uVar9 == uVar10) goto LAB_00d02d2c;
            break;
          }
          if (plVar18[2] == uVar15) goto LAB_00d02d7c;
LAB_00d02d2c:
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
LAB_00d02d84:
  lVar16 = *(long *)(*param_2 + 0x1d8);
  if (param_1[0xf] != 0) {
    lVar24 = param_1[0x7e];
    lVar22 = param_1[0x7f];
    lVar19 = *param_1;
    lVar21 = tpidr_el0;
    if (*(long *)(lVar21 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(long **)(lVar21 + 0x30) = DAT_04859430;
    }
    local_80 = *(long *)(lVar21 + 0x30);
    local_78 = *(undefined8 *)(lVar21 + 0x38);
    *(long *)(lVar21 + 0x30) = lVar19;
    *(undefined2 *)(lVar21 + 0x38) = 1;
    puVar4 = PTR_nothrow_047cdb88;
    uVar11 = param_1[0xe];
    lVar19 = param_1[7];
    plVar18 = (long *)(lVar19 + (uVar11 >> 6 & 0x3fffffffffffff8));
    if (param_1[8] == lVar19) {
      plVar20 = (long *)0x0;
      plVar23 = (long *)0x0;
      plVar7 = (long *)(lVar19 + (param_1[0xf] + uVar11 >> 6 & 0x3fffffffffffff8));
    }
    else {
      plVar20 = (long *)(*plVar18 + (uVar11 & 0x1ff) * 8);
      plVar7 = (long *)(lVar19 + (param_1[0xf] + uVar11 >> 6 & 0x3fffffffffffff8));
      plVar23 = (long *)(*plVar7 + (param_1[0xf] + uVar11 & 0x1ff) * 8);
    }
    uVar11 = lVar24 - lVar16;
    while (plVar20 != plVar23) {
      lVar19 = *plVar20;
      if (((*(long *)(lVar19 + 0x10) == 0) || (*(long *)(lVar19 + 0x40) != *(long *)(lVar19 + 0x10))
          ) && (*(long *)(lVar19 + 0x18) != 0)) goto LAB_00d02fb0;
      plVar20 = plVar20 + 1;
      if ((long)plVar20 - *plVar18 == 0x1000) {
        plVar18 = plVar18 + 1;
        plVar20 = (long *)*plVar18;
      }
    }
LAB_00d030e4:
    *(long *)(lVar21 + 0x30) = local_80;
    *(undefined2 *)(lVar21 + 0x38) = (undefined2)local_78;
    uVar15 = param_1[0x7d];
    if (uVar11 < uVar15) {
      if ((char)lVar22 == '\0') {
        do {
          if (param_1[0xf] == 0) break;
          lVar22 = *(long *)(*(long *)(param_1[7] + ((ulong)param_1[0xe] >> 6 & 0x3fffffffffffff8))
                            + (param_1[0xe] & 0x1ffU) * 8);
          lVar21 = 0;
          if (*(ulong *)(lVar22 + 8) <= uVar15) {
            lVar21 = uVar15 - *(ulong *)(lVar22 + 8);
          }
          param_1[0x7d] = lVar21;
          local_80 = *(long *)(lVar22 + 0x20);
          FUN_00d044f4(param_1 + 0x14,&local_80);
          lVar21 = *(long *)(lVar22 + 0x10) * 8 + 0x50;
          FUN_00d0441c(lVar22);
          plVar18 = (long *)*param_1;
          uVar15 = (**(code **)(*plVar18 + 0xf8))(plVar18);
          if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
            (**(code **)(*plVar18 + 0x18))(plVar18,lVar22,lVar21,8);
          }
          else {
            FUN_00c48fe8(plVar18,lVar22,lVar21,8);
          }
          lVar21 = param_1[0xe];
          param_1[0xe] = lVar21 + 1U;
          param_1[0xf] = param_1[0xf] + -1;
          if (0x3ff < lVar21 + 1U) {
            plVar18 = (long *)param_1[0x10];
            uVar17 = *(undefined8 *)param_1[7];
            uVar15 = (**(code **)(*plVar18 + 0xf8))(plVar18);
            if (((uVar15 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
              (**(code **)(*plVar18 + 0x18))(plVar18,uVar17,0x1000,8);
            }
            else {
              FUN_00c48fe8(plVar18,uVar17,0x1000,8);
            }
            param_1[7] = param_1[7] + 8;
            param_1[0xe] = param_1[0xe] + -0x200;
          }
          uVar15 = param_1[0x7d];
        } while (uVar11 < uVar15);
      }
      else {
        do {
          if (param_1[0xf] == 0) break;
          lVar21 = *(long *)(*(long *)(param_1[7] + ((ulong)param_1[0xe] >> 6 & 0x3fffffffffffff8))
                            + (param_1[0xe] & 0x1ffU) * 8);
          if (((*(long *)(lVar21 + 0x10) == 0) ||
              (*(long *)(lVar21 + 0x40) != *(long *)(lVar21 + 0x10))) &&
             (*(long *)(lVar21 + 0x18) != 0)) break;
          lVar22 = 0;
          if (*(ulong *)(lVar21 + 8) <= uVar15) {
            lVar22 = uVar15 - *(ulong *)(lVar21 + 8);
          }
          param_1[0x7d] = lVar22;
          local_80 = *(long *)(lVar21 + 0x20);
          FUN_00d044f4(param_1 + 0x14,&local_80);
          lVar22 = *(long *)(lVar21 + 0x10) * 8 + 0x50;
          FUN_00d0441c(lVar21);
          plVar18 = (long *)*param_1;
          uVar15 = (**(code **)(*plVar18 + 0xf8))(plVar18);
          if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
            (**(code **)(*plVar18 + 0x18))(plVar18,lVar21,lVar22,8);
          }
          else {
            FUN_00c48fe8(plVar18,lVar21,lVar22,8);
          }
          lVar21 = param_1[0xe];
          param_1[0xe] = lVar21 + 1U;
          param_1[0xf] = param_1[0xf] + -1;
          if (0x3ff < lVar21 + 1U) {
            plVar18 = (long *)param_1[0x10];
            uVar17 = *(undefined8 *)param_1[7];
            uVar15 = (**(code **)(*plVar18 + 0xf8))(plVar18);
            if (((uVar15 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
              (**(code **)(*plVar18 + 0x18))(plVar18,uVar17,0x1000,8);
            }
            else {
              FUN_00c48fe8(plVar18,uVar17,0x1000,8);
            }
            param_1[7] = param_1[7] + 8;
            param_1[0xe] = param_1[0xe] + -0x200;
          }
          uVar15 = param_1[0x7d];
        } while (uVar11 < uVar15);
      }
    }
  }
  local_70 = 0;
  local_80 = lVar16;
  local_78 = lVar6;
  lVar6 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,lVar6 * 8 + 0x50,8);
  FUN_00d03f90(lVar6,param_2,&local_80);
  local_68 = *(long *)(lVar6 + 0x20);
  plVar18 = (long *)FUN_00d0475c(param_1 + 0x14,&local_68);
  *plVar18 = lVar6;
  param_1[0x7d] = param_1[0x7d] + lVar16;
  local_68 = lVar6;
  FUN_00d040c4(plVar12,&local_68);
  uVar17 = 1;
LAB_00d03278:
  do {
    lVar6 = *plVar1;
    lVar16 = param_1[3];
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      param_1[3] = lVar16;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    lVar21 = *plVar1;
    lVar22 = param_1[3];
    if (lVar21 != lVar6 || lVar22 != lVar16) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00d032b4;
    }
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x14) = lVar16;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar8 = true;
LAB_00d032b4:
  if (!bVar8) {
    do {
      lVar6 = *plVar1;
      lVar16 = param_1[3];
      if (lVar6 != lVar21 || lVar16 != lVar22) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d03448;
      }
      cVar2 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x14) = lVar22;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar8 = true;
joined_r0x00d03448:
    if (!bVar8) {
      do {
        lVar21 = *plVar1;
        lVar22 = param_1[3];
        if (lVar21 != lVar6 || lVar22 != lVar16) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar6 = lVar21;
          lVar16 = lVar22;
          goto joined_r0x00d03448;
        }
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = 0;
          *(long *)((long)param_1 + 0x14) = lVar16;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar8 = true;
      lVar6 = lVar21;
      lVar16 = lVar22;
      goto joined_r0x00d03448;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 4));
  return uVar17;
LAB_00d02d7c:
  if (plVar18[3] != 0) goto LAB_00d02e78;
  goto LAB_00d02d84;
  while( true ) {
    lVar19 = *plVar23;
    if (((*(long *)(lVar19 + 0x10) != 0) && (*(long *)(lVar19 + 0x40) == *(long *)(lVar19 + 0x10)))
       || (*(long *)(lVar19 + 0x18) == 0)) break;
LAB_00d02fb0:
    if ((long *)*plVar7 == plVar23) {
      plVar7 = plVar7 + -1;
      plVar23 = (long *)(*plVar7 + 0x1000);
    }
    plVar23 = plVar23 + -1;
    if (plVar23 == plVar20) goto LAB_00d030e4;
  }
  lVar19 = (((long)plVar23 - *plVar7 >> 3) + ((long)plVar7 - (long)plVar18) * 0x40) -
           ((long)plVar20 - *plVar18 >> 3);
  uVar15 = lVar19 + 1;
  if (lVar19 < 3) {
    uVar9 = 0;
    local_98 = (void *)0x0;
  }
  else {
    uVar10 = uVar15;
    if (0xffffffffffffffe < (long)uVar15) {
      uVar10 = 0xfffffffffffffff;
    }
    do {
      local_98 = operator_new(uVar10 << 3,(nothrow_t *)puVar4);
      if (local_98 != (void *)0x0) {
        uVar9 = uVar10;
        break;
      }
      uVar9 = 0;
      uVar10 = uVar10 >> 1;
      local_98 = (void *)0x0;
    } while (uVar10 != 0);
  }
  FUN_00d04b10(plVar18,plVar20,plVar7,plVar23,uVar15,local_98,uVar9);
  if (local_98 != (void *)0x0) {
    plVar18 = *(long **)(lVar21 + 0x30);
    if (plVar18 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar18 = DAT_04859430;
      *(long **)(lVar21 + 0x30) = DAT_04859430;
    }
    uVar15 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,local_98,0,8);
    }
    else {
      FUN_00c48fe8(plVar18,local_98,0,8);
    }
  }
  goto LAB_00d030e4;
}


