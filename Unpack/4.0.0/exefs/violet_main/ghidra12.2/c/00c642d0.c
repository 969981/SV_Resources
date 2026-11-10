/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c642d0; name: FUN_00c642d0
 */


void FUN_00c642d0(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  bool bVar11;
  
  plVar9 = (long *)(param_1 + 0x3f8);
  lVar6 = *plVar9;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar6) {
    lVar2 = nn::os::GetCurrentThread();
LAB_00c64308:
    if (*plVar9 == 0) goto code_r0x00c64310;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x400));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x400));
          while (*plVar9 == 0) {
            cVar1 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar11) {
              *plVar9 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00c64318;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar11) {
        *plVar9 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00c64318:
    bVar11 = false;
    plVar10 = plVar9;
    goto LAB_00c64320;
  }
  plVar10 = (long *)0x0;
  bVar11 = true;
LAB_00c64320:
  puVar3 = *(undefined8 **)(param_1 + 0x410);
  puVar7 = *(undefined8 **)(param_1 + 0x418);
  if (puVar3 != puVar7) {
    (*(code *)*puVar3)(puVar3 + 4);
    while (puVar8 = puVar3 + 8, puVar8 != puVar7) {
      (*(code *)*puVar8)(puVar3 + 0xc);
      puVar3 = puVar8;
    }
  }
  lVar6 = *plVar9;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar6) {
    plVar9 = (long *)0x0;
    bVar5 = true;
LAB_00c6435c:
    puVar7 = *(undefined8 **)(param_1 + 0x410);
    puVar3 = *(undefined8 **)(param_1 + 0x418);
    if (puVar3 != puVar7) {
      pcVar4 = (code *)puVar3[-7];
      puVar8 = puVar3 + -8;
      if (pcVar4 != (code *)0x0) {
        puVar3[-6] = 0;
        puVar3[-5] = 0;
        *puVar8 = 0;
        puVar3[-7] = 0;
        (*pcVar4)(puVar3 + -4);
      }
      while (puVar3 = puVar8, puVar3 != puVar7) {
        pcVar4 = (code *)puVar3[-7];
        puVar8 = puVar3 + -8;
        if (pcVar4 != (code *)0x0) {
          puVar3[-6] = 0;
          puVar3[-5] = 0;
          puVar3[-8] = 0;
          puVar3[-7] = 0;
          (*pcVar4)(puVar3 + -4);
        }
      }
    }
    *(undefined8 **)(param_1 + 0x418) = puVar7;
    if (!bVar5) {
      *plVar9 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
    }
    if (bVar11) {
      return;
    }
    *plVar10 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
    return;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00c64358;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x400));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x400));
        while (*plVar9 == 0) {
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00c64358;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00c64358:
  bVar5 = false;
  goto LAB_00c6435c;
code_r0x00c64310:
  cVar1 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar11) {
    *plVar9 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00c64318;
  goto LAB_00c64308;
}


