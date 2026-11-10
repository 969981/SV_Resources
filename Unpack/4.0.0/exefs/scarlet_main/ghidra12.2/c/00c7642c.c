/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c7642c; name: FUN_00c7642c
 */


undefined1  [16] FUN_00c7642c(long *param_1,undefined8 *param_2,long *param_3,uint param_4)

{
  long *plVar1;
  LightEventType *pLVar2;
  long lVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  bool bVar11;
  bool bVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  undefined4 *puVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 uVar20;
  long *unaff_x24;
  undefined8 *puVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  long *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_6c;
  int local_68 [2];
  
  plVar1 = param_1 + 8;
  local_6c = param_4;
  lVar10 = nn::os::GetCurrentThread();
  do {
    lVar16 = *plVar1;
    lVar22 = param_1[9];
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar16;
      param_1[9] = lVar22;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 10);
LAB_00c76478:
  while ((lVar16 != 0 && (lVar10 != lVar16))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar16 = *plVar1;
      lVar22 = param_1[9];
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar16;
        param_1[9] = lVar22;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar16 || param_1[9] != lVar22) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00c764a8;
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar16;
      *(long *)((long)param_1 + 0x44) = lVar22 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar11 = true;
LAB_00c764a8:
  if (!bVar11) {
    lVar16 = lVar3;
    lVar22 = param_1[9];
    goto LAB_00c76478;
  }
  puVar21 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  if (puVar21 == puVar4) {
    uVar20 = 0;
    bVar11 = true;
  }
  else {
    uVar13 = (ulong)local_6c;
    if (local_6c == 0) {
      uVar14 = 0;
      bVar11 = true;
      do {
        if (((long *)*puVar21)[1] - *(long *)*puVar21 >> 2 == 0) goto LAB_00c765dc;
        puVar21 = puVar21 + 4;
        uVar20 = 0;
        uVar14 = uVar14 + 1;
      } while (puVar4 != puVar21);
    }
    else {
      uVar14 = 0;
      do {
        plVar15 = (long *)*puVar21;
        lVar10 = *plVar15;
        if (uVar13 == plVar15[1] - lVar10 >> 2) {
          iVar9 = *(int *)((long)param_3 + 0xc);
          iVar8 = (**(code **)PTR_DAT_047e1998)(lVar10);
          if (iVar9 == iVar8) {
            lVar16 = 0;
            lVar22 = 4;
            uVar18 = uVar13;
            plVar19 = param_3;
            do {
              (**(code **)PTR_DAT_047e19a0)(lVar10,local_68,&local_90);
              unaff_x24 = plVar19;
              if (((int)plVar19[1] != local_68[0]) || ((long *)*plVar19 != local_90)) break;
              uVar18 = uVar18 - 1;
              if (uVar18 == 0) goto LAB_00c765dc;
              lVar16 = lVar16 + 1;
              lVar10 = *plVar15 + lVar16 * 4;
              lVar3 = *plVar15 + lVar22;
              unaff_x24 = plVar19 + 2;
              iVar9 = *(int *)((long)plVar19 + 0x1c);
              lVar22 = lVar22 + 4;
              iVar8 = (**(code **)PTR_DAT_047e1998)(lVar3);
              plVar19 = unaff_x24;
            } while (iVar9 == iVar8);
          }
        }
        puVar21 = puVar21 + 4;
        uVar14 = uVar14 + 1;
      } while (puVar21 != puVar4);
      uVar20 = 0;
      bVar11 = true;
    }
  }
LAB_00c765e8:
  do {
    auVar23._8_8_ = unaff_x24;
    auVar23._0_8_ = uVar20;
    lVar10 = *plVar1;
    lVar16 = param_1[9];
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar10;
      param_1[9] = lVar16;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar22 = *plVar1;
    lVar3 = param_1[9];
    if (lVar22 != lVar10 || lVar3 != lVar16) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_00c76624;
    }
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar10;
      *(long *)((long)param_1 + 0x44) = lVar16 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar12 = true;
LAB_00c76624:
  if (!bVar12) {
    do {
      lVar10 = *plVar1;
      lVar16 = param_1[9];
      if (lVar10 != lVar22 || lVar16 != lVar3) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c768b4;
      }
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar22;
        *(long *)((long)param_1 + 0x44) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar12 = true;
joined_r0x00c768b4:
    if (!bVar12) {
      do {
        lVar22 = *plVar1;
        lVar3 = param_1[9];
        if (lVar22 != lVar10 || lVar3 != lVar16) {
          bVar12 = false;
          ClearExclusiveLocal();
          lVar10 = lVar22;
          lVar16 = lVar3;
          goto joined_r0x00c768b4;
        }
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar10;
          *(long *)((long)param_1 + 0x44) = lVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar12 = true;
      lVar10 = lVar22;
      lVar16 = lVar3;
      goto joined_r0x00c768b4;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  if (!bVar11) {
    uVar13 = 0;
LAB_00c76804:
    auVar24._0_8_ = uVar13 | auVar23._0_8_ & 0xff;
    auVar24._8_8_ = auVar23._8_8_;
    return auVar24;
  }
  plVar19 = (long *)*param_2;
  plVar15 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x40,8);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar19;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  FUN_00c769fc(plVar15,param_2,&local_6c);
  local_80 = 0x40;
  uStack_78 = 8;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  puVar7 = PTR_DAT_047e19b0;
  puVar6 = PTR_DAT_047e19a8;
  lVar10 = *plVar15;
  local_90 = plVar15;
  plStack_88 = plVar19;
  if (plVar15[1] - lVar10 != 0) {
    lVar16 = plVar15[1] - lVar10 >> 2;
    puVar17 = (undefined4 *)((long)param_3 + 0xc);
    do {
      if (puVar17[-1] != 0) {
        (**(code **)puVar6)(lVar10,puVar17[-1],*(undefined8 *)(puVar17 + -3));
        (**(code **)puVar7)(lVar10,*puVar17);
      }
      puVar17 = puVar17 + 4;
      lVar16 = lVar16 + -1;
      lVar10 = lVar10 + 4;
    } while (lVar16 != 0);
  }
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && param_1[9] == 0) {
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar10;
      param_1[9] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00c76750;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0 || param_1[9] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0 && param_1[9] == 0) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar10;
            param_1[9] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00c76750;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar10;
      param_1[9] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00c76750:
  auVar23 = FUN_00c77408(param_1,&local_90);
  do {
    lVar10 = *plVar1;
    lVar16 = param_1[9];
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar10;
      param_1[9] = lVar16;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar22 = *plVar1;
    lVar3 = param_1[9];
    if (lVar22 != lVar10 || lVar3 != lVar16) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00c767e8;
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x44) = lVar16;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar11 = true;
LAB_00c767e8:
  if (!bVar11) {
    do {
      lVar10 = *plVar1;
      lVar16 = param_1[9];
      if (lVar10 != lVar22 || lVar16 != lVar3) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c769a8;
      }
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x44) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar11 = true;
joined_r0x00c769a8:
    if (!bVar11) {
      do {
        lVar22 = *plVar1;
        lVar3 = param_1[9];
        if (lVar22 != lVar10 || lVar3 != lVar16) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar10 = lVar22;
          lVar16 = lVar3;
          goto joined_r0x00c769a8;
        }
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = 0;
          *(long *)((long)param_1 + 0x44) = lVar16;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar11 = true;
      lVar10 = lVar22;
      lVar16 = lVar3;
      goto joined_r0x00c769a8;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  plVar1 = local_90;
  uVar13 = auVar23._0_8_ & 0xffffffffffffff00;
  local_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_00c78cb0(&plStack_88);
  }
  goto LAB_00c76804;
LAB_00c765dc:
  bVar11 = false;
  unaff_x24 = (long *)(ulong)uVar14;
  uVar20 = 1;
  goto LAB_00c765e8;
}


