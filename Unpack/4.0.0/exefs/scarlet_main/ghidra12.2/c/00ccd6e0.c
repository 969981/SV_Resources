/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ccd6e0; name: FUN_00ccd6e0
 */


undefined1  [16] FUN_00ccd6e0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  long lVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  
  plVar1 = param_1 + 8;
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && param_1[9] == 0) {
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      param_1[9] = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_00ccd71c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 10));
  do {
    if (*plVar1 != 0 || param_1[9] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 10));
        while (*plVar1 == 0 && param_1[9] == 0) {
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar8;
            param_1[9] = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00ccd71c;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      param_1[9] = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00ccd71c:
  FUN_00ccd854(param_1,param_2);
  lVar8 = *param_1;
  lVar4 = param_1[1];
  do {
    lVar5 = *plVar1;
    lVar6 = param_1[9];
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar5;
      param_1[9] = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = param_1[9];
    if (lVar2 != lVar5 || lVar3 != lVar6) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_00ccd7b4;
    }
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x44) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar9 = true;
LAB_00ccd7b4:
  if (!bVar9) {
    do {
      lVar5 = *plVar1;
      lVar6 = param_1[9];
      if (lVar5 != lVar2 || lVar6 != lVar3) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x00ccd814;
      }
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x44) = lVar3;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar9 = true;
joined_r0x00ccd814:
    if (!bVar9) {
      do {
        lVar2 = *plVar1;
        lVar3 = param_1[9];
        if (lVar2 != lVar5 || lVar3 != lVar6) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar5 = lVar2;
          lVar6 = lVar3;
          goto joined_r0x00ccd814;
        }
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = 0;
          *(long *)((long)param_1 + 0x44) = lVar6;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar9 = true;
      lVar5 = lVar2;
      lVar6 = lVar3;
      goto joined_r0x00ccd814;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 10));
  auVar10._8_8_ = (lVar4 - lVar8 >> 5) + -1;
  auVar10._0_8_ = 1;
  return auVar10;
}


