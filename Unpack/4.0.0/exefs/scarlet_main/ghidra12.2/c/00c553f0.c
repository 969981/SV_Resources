/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c553f0; name: FUN_00c553f0
 */


undefined1  [16] FUN_00c553f0(long *param_1,long *param_2,char *param_3)

{
  ulong *puVar1;
  LightEventType *pLVar2;
  ulong *puVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  bool bVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  ulong *puVar26;
  undefined8 uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  long local_80;
  long *local_78;
  long local_70;
  long local_68;
  
  puVar1 = (ulong *)(param_1 + 8);
  uVar12 = nn::os::GetCurrentThread();
  do {
    uVar21 = *puVar1;
    lVar13 = param_1[9];
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar16) {
      *puVar1 = uVar21;
      param_1[9] = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 10);
LAB_00c55438:
  while ((uVar21 != 0 && (uVar12 != uVar21))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      uVar21 = *puVar1;
      lVar13 = param_1[9];
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar16) {
        *puVar1 = uVar21;
        param_1[9] = lVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    uVar18 = *puVar1;
    if (uVar18 != uVar21 || param_1[9] != lVar13) {
      bVar16 = false;
      ClearExclusiveLocal();
      goto LAB_00c55468;
    }
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar16) {
      *puVar1 = uVar21;
      *(long *)((long)param_1 + 0x44) = lVar13 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar16 = true;
LAB_00c55468:
  puVar8 = PTR_DAT_047e1a48;
  puVar7 = PTR_DAT_047e1a40;
  puVar6 = PTR_DAT_047e1a38;
  puVar5 = PTR_DAT_047e1a30;
  if (!bVar16) {
    uVar21 = uVar18;
    lVar13 = param_1[9];
    goto LAB_00c55438;
  }
  puVar26 = (ulong *)*param_1;
  puVar3 = (ulong *)param_1[1];
  if (puVar26 == puVar3) {
    uVar27 = 0;
    bVar16 = true;
  }
  else {
    uVar28 = 0;
    do {
      if (param_3[0x18] == '\0') {
        uVar12 = *puVar26;
        cVar4 = *param_3;
        cVar9 = (**(code **)puVar5)(uVar12);
        if ((((((bool)cVar4 == (cVar9 != '\0')) &&
              (cVar4 = param_3[1], cVar9 = (**(code **)puVar6)(uVar12),
              (bool)cVar4 == (cVar9 != '\0'))) &&
             (cVar4 = param_3[2], cVar9 = (**(code **)puVar7)(uVar12),
             (bool)cVar4 == (cVar9 != '\0'))) &&
            ((iVar11 = *(int *)(param_3 + 4), iVar10 = (**(code **)puVar8)(uVar12), iVar11 == iVar10
             && (iVar11 = *(int *)(param_3 + 8), iVar10 = (**(code **)PTR_DAT_047e1a50)(uVar12),
                iVar11 == iVar10)))) &&
           ((iVar11 = *(int *)(param_3 + 0xc), iVar10 = (**(code **)PTR_DAT_047e1a58)(uVar12),
            iVar11 == iVar10 &&
            ((cVar4 = param_3[0x10], cVar9 = (**(code **)PTR_DAT_047e1a60)(uVar12),
             (bool)cVar4 == (cVar9 != '\0') &&
             (iVar11 = *(int *)(param_3 + 0x14), iVar10 = (**(code **)PTR_DAT_047e1a68)(uVar12),
             iVar11 == iVar10)))))) {
          bVar16 = false;
          uVar12 = (ulong)uVar28;
          uVar27 = 1;
          goto LAB_00c55624;
        }
      }
      puVar26 = puVar26 + 4;
      uVar28 = uVar28 + 1;
    } while (puVar3 != puVar26);
    uVar27 = 0;
    bVar16 = true;
  }
LAB_00c55624:
  do {
    uVar21 = *puVar1;
    lVar13 = param_1[9];
    cVar4 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar17) {
      *puVar1 = uVar21;
      param_1[9] = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    uVar18 = *puVar1;
    lVar14 = param_1[9];
    if (uVar18 != uVar21 || lVar14 != lVar13) {
      bVar17 = false;
      ClearExclusiveLocal();
      goto LAB_00c55660;
    }
    cVar4 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar17) {
      *puVar1 = uVar21;
      *(long *)((long)param_1 + 0x44) = lVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar17 = true;
LAB_00c55660:
  if (!bVar17) {
    do {
      uVar21 = *puVar1;
      lVar13 = param_1[9];
      if (uVar21 != uVar18 || lVar13 != lVar14) {
        bVar17 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c55bb4;
      }
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar17) {
        *puVar1 = uVar18;
        *(long *)((long)param_1 + 0x44) = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar17 = true;
joined_r0x00c55bb4:
    if (!bVar17) {
      do {
        uVar18 = *puVar1;
        lVar14 = param_1[9];
        if (uVar18 != uVar21 || lVar14 != lVar13) {
          bVar17 = false;
          ClearExclusiveLocal();
          uVar21 = uVar18;
          lVar13 = lVar14;
          goto joined_r0x00c55bb4;
        }
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar17) {
          *puVar1 = uVar21;
          *(long *)((long)param_1 + 0x44) = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar17 = true;
      uVar21 = uVar18;
      lVar13 = lVar14;
      goto joined_r0x00c55bb4;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  if (!bVar16) {
LAB_00c55a90:
    auVar29._8_8_ = uVar12;
    auVar29._0_8_ = uVar27;
    return auVar29;
  }
  param_2 = (long *)*param_2;
  lVar13 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8);
  if (lVar13 == 0) {
    local_70 = 0;
    local_68 = 0;
    local_80 = 0;
    local_78 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar14 + 0x80)) {
LAB_00c55d70:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = param_2;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    (**(code **)PTR_DAT_047e1a70)(lVar13);
    *(undefined1 *)(lVar13 + 0x19) = 1;
    local_70 = 0x20;
    local_68 = 8;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    local_80 = lVar13;
    local_78 = param_2;
  }
  (**(code **)PTR_DAT_047e1a78)(lVar13,*param_3);
  (**(code **)PTR_DAT_047e1a80)(lVar13,param_3[1]);
  (**(code **)PTR_DAT_047e1a88)(lVar13,param_3[2]);
  (**(code **)PTR_DAT_047e1a90)(lVar13,*(undefined4 *)(param_3 + 4));
  (**(code **)PTR_DAT_047e1a98)(lVar13,*(undefined4 *)(param_3 + 8));
  (**(code **)PTR_DAT_047e1aa0)(lVar13,*(undefined4 *)(param_3 + 0xc));
  (**(code **)PTR_DAT_047e1aa8)(lVar13,param_3[0x10]);
  (**(code **)PTR_DAT_047e1ab0)(lVar13,*(undefined4 *)(param_3 + 0x14));
  (**(code **)PTR_DAT_047e1ab8)(lVar13,param_3[0x18]);
  (**(code **)PTR_DAT_047e1ac0)(lVar13,param_3[0x19]);
  uVar12 = nn::os::GetCurrentThread();
  while (*puVar1 == 0 && param_1[9] == 0) {
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar16) {
      *puVar1 = uVar12;
      param_1[9] = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00c55818;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*puVar1 != 0 || param_1[9] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*puVar1 == 0 && param_1[9] == 0) {
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar16) {
            *puVar1 = uVar12;
            param_1[9] = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00c55818;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar16) {
      *puVar1 = uVar12;
      param_1[9] = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c55818:
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_00c577d4(param_1,&local_80);
  }
  else {
    uVar21 = param_1[4];
    lVar13 = param_1[1] - *param_1 >> 5;
    uVar12 = lVar13 + 1;
    if (0x7ffffffffffffffe < uVar21) {
      uVar21 = 0x7fffffffffffffff;
    }
    if (uVar21 < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = param_1[2] - *param_1;
    uVar18 = lVar14 >> 4;
    if (uVar12 <= uVar18) {
      uVar12 = uVar18;
    }
    if (uVar21 >> 1 <= (ulong)(lVar14 >> 5)) {
      uVar12 = uVar21;
    }
    if (uVar12 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar12 << 5,8);
      if (lVar14 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    plVar25 = (long *)(lVar14 + lVar13 * 0x20);
    lVar13 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar15 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar15 == 0) {
      plVar25[2] = local_70;
      plVar25[3] = local_68;
      *plVar25 = local_80;
      plVar25[1] = (long)local_78;
    }
    else {
      if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_00c55d70;
      *(long *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = lVar13;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
      plVar25[2] = local_70;
      plVar25[3] = local_68;
      *plVar25 = local_80;
      plVar25[1] = (long)local_78;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    }
    local_80 = 0;
    plVar24 = (long *)*param_1;
    plVar22 = (long *)param_1[1];
    if (plVar22 == plVar24) {
      plVar20 = plVar25;
      plVar22 = plVar24;
    }
    else {
      plVar23 = plVar25;
      do {
        lVar13 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar15 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar15 != 0) {
          if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_00c55d70;
          *(long *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = lVar13;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
        }
        lVar13 = plVar22[-4];
        plVar22[-4] = 0;
        plVar23[-4] = lVar13;
        lVar13 = plVar22[-3];
        lVar19 = plVar22[-1];
        plVar23[-2] = plVar22[-2];
        plVar23[-1] = lVar19;
        plVar20 = plVar23 + -4;
        plVar22 = plVar22 + -4;
        plVar23[-3] = lVar13;
        if (lVar15 != 0) {
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
        }
        plVar23 = plVar20;
      } while (plVar24 != plVar22);
      plVar24 = (long *)*param_1;
      plVar22 = (long *)param_1[1];
    }
    lVar13 = param_1[2];
    *param_1 = (long)plVar20;
    param_1[1] = (long)(plVar25 + 4);
    param_1[2] = lVar14 + uVar12 * 0x20;
    if (plVar22 != plVar24) {
      plVar25 = plVar22 + -4;
      lVar14 = *plVar25;
      *plVar25 = 0;
      if (lVar14 != 0) {
        FUN_00c57a1c(plVar22 + -3);
      }
      if (plVar25 != plVar24) {
        plVar25 = plVar22 + -8;
        lVar14 = *plVar25;
        *plVar25 = 0;
        if (lVar14 != 0) {
          FUN_00c57a1c(plVar22 + -7);
        }
        if (plVar25 != plVar24) {
          do {
            lVar14 = plVar22[-0xc];
            plVar22[-0xc] = 0;
            if (lVar14 != 0) {
              FUN_00c57a1c(plVar22 + -0xb);
            }
            plVar22 = plVar22 + -4;
          } while (plVar24 + 8 != plVar22);
        }
      }
    }
    if (plVar24 != (long *)0x0) {
      plVar25 = (long *)param_1[3];
      uVar12 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar25 + 0x18))(plVar25,plVar24,lVar13 - (long)plVar24,8);
      }
      else {
        FUN_00c48fe8(plVar25,plVar24,lVar13 - (long)plVar24,8);
      }
    }
  }
  uVar12 = (param_1[1] - *param_1 >> 5) - 1;
  do {
    uVar21 = *puVar1;
    lVar13 = param_1[9];
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar16) {
      *puVar1 = uVar21;
      param_1[9] = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    uVar18 = *puVar1;
    lVar14 = param_1[9];
    if (uVar18 != uVar21 || lVar14 != lVar13) {
      bVar16 = false;
      ClearExclusiveLocal();
      goto LAB_00c55a74;
    }
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar16) {
      *puVar1 = 0;
      *(long *)((long)param_1 + 0x44) = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar16 = true;
LAB_00c55a74:
  if (!bVar16) {
    do {
      uVar21 = *puVar1;
      lVar13 = param_1[9];
      if (uVar21 != uVar18 || lVar13 != lVar14) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c55d2c;
      }
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar16) {
        *puVar1 = 0;
        *(long *)((long)param_1 + 0x44) = lVar14;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar16 = true;
joined_r0x00c55d2c:
    if (!bVar16) {
      do {
        uVar18 = *puVar1;
        lVar14 = param_1[9];
        if (uVar18 != uVar21 || lVar14 != lVar13) {
          bVar16 = false;
          ClearExclusiveLocal();
          uVar21 = uVar18;
          lVar13 = lVar14;
          goto joined_r0x00c55d2c;
        }
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar16) {
          *puVar1 = 0;
          *(long *)((long)param_1 + 0x44) = lVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar16 = true;
      uVar21 = uVar18;
      lVar13 = lVar14;
      goto joined_r0x00c55d2c;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  lVar13 = local_80;
  local_80 = 0;
  if (lVar13 != 0) {
    FUN_00c57a1c(&local_78);
  }
  uVar27 = 1;
  goto LAB_00c55a90;
}


