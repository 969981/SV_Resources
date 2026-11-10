/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025d6654; name: FUN_025d6654
 */


undefined8 FUN_025d6654(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  
  uVar7 = FUN_011ef6ec();
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  plVar1 = (long *)(param_1 + 0x40);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x48) == 0) {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x48) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_025d6690;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x48) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x48) == 0) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar8;
            *(undefined8 *)(param_1 + 0x48) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_025d6690;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x48) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_025d6690:
  if (((*PTR_DAT_047d8a48 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8a48), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a48);
  }
  uVar9 = *(undefined8 *)PTR_DAT_047d8a50;
  *(undefined8 *)PTR_DAT_047d8a58 = uVar9;
  FUN_01181bac(uVar9,*(undefined8 *)(param_1 + 0x38));
  FUN_025d6820(*(undefined8 *)(param_1 + 0x30));
  do {
    lVar8 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x48);
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x48) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x48);
    if (lVar2 != lVar8 || lVar3 != lVar4) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_025d6758;
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x44) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar10 = true;
LAB_025d6758:
  if (!bVar10) {
    do {
      lVar8 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar8 != lVar2 || lVar4 != lVar3) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x025d67e0;
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x44) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar10 = true;
joined_r0x025d67e0:
    if (!bVar10) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x48);
        if (lVar2 != lVar8 || lVar3 != lVar4) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar8 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x025d67e0;
        }
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x44) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar10 = true;
      lVar8 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x025d67e0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x50));
  return 1;
}


