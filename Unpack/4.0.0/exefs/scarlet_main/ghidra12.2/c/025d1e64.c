/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025d1e64; name: FUN_025d1e64
 */


undefined8 FUN_025d1e64(undefined4 param_1,long param_2)

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
  plVar1 = (long *)(param_2 + 0x40);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_2 + 0x48) == 0) {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_2 + 0x48) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_025d1ea8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
  do {
    if (*plVar1 != 0 || *(long *)(param_2 + 0x48) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
        while (*plVar1 == 0 && *(long *)(param_2 + 0x48) == 0) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_2 + 0x48) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_025d1ea8;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_2 + 0x48) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_025d1ea8:
  lVar7 = *(long *)(param_2 + 0x38);
  *(ulong *)(lVar7 + 0x108) = CONCAT44(param_1,(int)*(undefined8 *)(lVar7 + 0x108));
  *(undefined8 *)(lVar7 + 0x100) = *(undefined8 *)(lVar7 + 0x100);
  do {
    lVar7 = *plVar1;
    lVar4 = *(long *)(param_2 + 0x48);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0x48) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x48);
    if (lVar2 != lVar7 || lVar3 != lVar4) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_025d1f4c;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = 0;
      *(long *)(param_2 + 0x44) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_025d1f4c:
  if (!bVar8) {
    do {
      lVar7 = *plVar1;
      lVar4 = *(long *)(param_2 + 0x48);
      if (lVar7 != lVar2 || lVar4 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x025d1f9c;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = 0;
        *(long *)(param_2 + 0x44) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x025d1f9c:
    if (!bVar8) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_2 + 0x48);
        if (lVar2 != lVar7 || lVar3 != lVar4) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x025d1f9c;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = 0;
          *(long *)(param_2 + 0x44) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar7 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x025d1f9c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x50));
  return 1;
}


