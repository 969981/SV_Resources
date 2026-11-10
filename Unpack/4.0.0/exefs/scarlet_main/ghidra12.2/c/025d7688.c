/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025d7688; name: FUN_025d7688
 */


ulong FUN_025d7688(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  
  uVar7 = FUN_011ef6ec();
  if ((uVar7 & 1) == 0) {
    uVar10 = 0;
    uVar7 = 0;
LAB_025d7778:
    return uVar7 | uVar10;
  }
  plVar1 = (long *)(param_1 + 0x40);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x48) == 0) {
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x48) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_025d76c4;
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
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar8;
            *(undefined8 *)(param_1 + 0x48) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_025d76c4;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x48) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_025d76c4:
  cVar5 = *(char *)(*(long *)(param_1 + 0x38) + 10);
  do {
    lVar8 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x48);
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x48) = lVar4;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x48);
    if (lVar2 != lVar8 || lVar3 != lVar4) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_025d7760;
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x44) = lVar4;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar9 = true;
LAB_025d7760:
  if (!bVar9) {
    do {
      lVar8 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar8 != lVar2 || lVar4 != lVar3) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x025d77b8;
      }
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x44) = lVar3;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar9 = true;
joined_r0x025d77b8:
    if (!bVar9) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x48);
        if (lVar2 != lVar8 || lVar3 != lVar4) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar8 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x025d77b8;
        }
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x44) = lVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar9 = true;
      lVar8 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x025d77b8;
    }
  }
  uVar10 = (ulong)(cVar5 == '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x50));
  uVar7 = 0x100;
  goto LAB_025d7778;
}


