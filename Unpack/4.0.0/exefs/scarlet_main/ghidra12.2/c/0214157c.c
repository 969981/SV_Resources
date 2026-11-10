/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0214157c; name: FUN_0214157c
 */


void FUN_0214157c(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  short sVar13;
  long *plVar14;
  long lVar15;
  bool bVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar12 = *param_1;
  if (lVar12 != 0) {
    uVar19 = *param_2;
    if (*(short *)(lVar12 + 0x1a) != 0) {
      psVar1 = (short *)(lVar12 + 0x1a);
      sVar13 = *(short *)(lVar12 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar13) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_021415fc;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_021415fc:
          bVar4 = false;
        }
        puVar5 = PTR_DAT_047d94e8;
        if (bVar4) {
          lVar12 = *(long *)(lVar12 + 0x10);
          if (lVar12 == 0) {
            return;
          }
          if (((*PTR_DAT_047d94e8 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047dcfc0,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d94e8);
          }
          puVar7 = PTR_DAT_047d94f8;
          puVar6 = PTR_DAT_047d94f0;
          lVar20 = *(long *)PTR_DAT_047d94f0;
          *(long *)PTR_DAT_047d94f8 = lVar20;
          plVar18 = (long *)(lVar20 + 0x78);
          lVar15 = *plVar18;
          plVar14 = (long *)(lVar12 + -0x28);
          lVar9 = nn::os::GetCurrentThread();
          if (lVar9 != lVar15) {
            lVar9 = nn::os::GetCurrentThread();
            goto LAB_02141660;
          }
          plVar18 = (long *)0x0;
          bVar4 = true;
          goto LAB_02141674;
        }
        sVar13 = sVar2;
      } while (sVar2 != 0);
    }
  }
  return;
LAB_02141660:
  if (*plVar18 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *plVar18 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_02141670;
    goto LAB_02141660;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x80));
  do {
    if (*plVar18 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x80));
        while (*plVar18 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *plVar18 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02141670;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *plVar18 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02141670:
  bVar4 = false;
LAB_02141674:
  local_80 = (long *)PTR_DAT_047dcfe8;
  uVar10 = FUN_0108fedc(lVar20 + 0x90,&local_80);
  if (*(char *)(lVar12 + 0x4d8) == '\0') {
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d94e8), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047dcfc0,PTR_DAT_047d94f0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d94e8);
    }
    uVar11 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar11;
    FUN_01181758(uVar11,plVar14);
    *(undefined1 *)(lVar12 + 0x4d8) = 1;
  }
  plVar21 = (long *)(lVar12 + 0x3d0);
  lVar15 = *plVar21;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 == lVar15) {
    plVar21 = (long *)0x0;
    bVar16 = true;
LAB_021416c8:
    puVar17 = *(undefined8 **)(lVar12 + 0x3f0);
    local_80 = plVar14;
    uStack_78 = uVar19;
    local_68 = uVar10;
    if (puVar17 < *(undefined8 **)(lVar12 + 0x3f8)) {
      uVar19 = *(undefined8 *)(lVar12 + 0x400);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar9 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar9 == 0) {
        puVar17[6] = local_70;
        puVar17[7] = local_68;
        puVar17[4] = local_80;
        puVar17[5] = uStack_78;
        *puVar17 = &LAB_02141ebc;
        puVar17[1] = &LAB_02b2cee8;
        puVar17[2] = &LAB_02b2ceec;
        puVar17[3] = &LAB_02b2cf00;
      }
      else {
        if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar19;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        puVar17[6] = local_70;
        puVar17[7] = local_68;
        puVar17[4] = local_80;
        puVar17[5] = uStack_78;
        *puVar17 = &LAB_02141ebc;
        puVar17[1] = &LAB_02b2cee8;
        puVar17[2] = &LAB_02b2ceec;
        puVar17[3] = &LAB_02b2cf00;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      }
      *(undefined8 **)(lVar12 + 0x3f0) = puVar17 + 8;
    }
    else {
      FUN_02141984(lVar12 + 1000,&local_80);
    }
    if (!bVar16) {
      *plVar21 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar21 + 1));
    }
    if (!bVar4) {
      *plVar18 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
    }
    (**(code **)(*plVar14 + 0x60))(plVar14);
    return;
  }
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar21 == 0) {
    cVar3 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar16) {
      *plVar21 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_021416c4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x3d8));
  do {
    if (*plVar21 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x3d8));
        while (*plVar21 == 0) {
          cVar3 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar16) {
            *plVar21 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_021416c4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar16) {
      *plVar21 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_021416c4:
  bVar16 = false;
  goto LAB_021416c8;
}


