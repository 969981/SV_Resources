/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d8f7c0; name: FUN_00d8f7c0
 */


undefined8 FUN_00d8f7c0(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  undefined8 uVar9;
  
  plVar1 = (long *)(param_1 + 0x280);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x288) == 0) {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x288) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00d8f7fc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x290));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x288) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x290));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x288) == 0) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar6;
            *(undefined8 *)(param_1 + 0x288) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00d8f7fc;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x288) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00d8f7fc:
  uVar7 = FUN_00d8f934(param_1);
  if (param_2 < uVar7) {
    *(uint *)(param_1 + 0x270) = param_2;
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  do {
    lVar6 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x288);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x288) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x288);
    if (lVar2 != lVar6 || lVar3 != lVar4) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00d8f89c;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x284) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_00d8f89c:
  if (!bVar8) {
    do {
      lVar6 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x288);
      if (lVar6 != lVar2 || lVar4 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d8f8f4;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x284) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x00d8f8f4:
    if (!bVar8) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x288);
        if (lVar2 != lVar6 || lVar3 != lVar4) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar6 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x00d8f8f4;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x284) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar6 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x00d8f8f4;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x290));
  return uVar9;
}


