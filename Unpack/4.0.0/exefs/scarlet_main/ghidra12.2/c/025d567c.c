/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025d567c; name: FUN_025d567c
 */


undefined8 FUN_025d567c(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  
  uVar6 = FUN_011ef6ec();
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  plVar1 = (long *)(param_1 + 0x40);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x48) == 0) {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x48) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_025d56c0;
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
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_1 + 0x48) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_025d56c0;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x48) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_025d56c0:
  FUN_025d57ec(*(undefined8 *)(param_1 + 0x38),param_2);
  do {
    lVar7 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x48);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x48) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x48);
    if (lVar2 != lVar7 || lVar3 != lVar4) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_025d575c;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x44) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_025d575c:
  if (!bVar8) {
    do {
      lVar7 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar7 != lVar2 || lVar4 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x025d57ac;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x44) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x025d57ac:
    if (!bVar8) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x48);
        if (lVar2 != lVar7 || lVar3 != lVar4) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x025d57ac;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x44) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar7 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x025d57ac;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x50));
  return 1;
}


