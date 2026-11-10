/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02780924; name: FUN_02780924
 */


void FUN_02780924(long param_1)

{
  long *plVar1;
  void *pvVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  char cVar9;
  
  if ((*(int *)(param_1 + 0x130) != 2) || (*(long *)(param_1 + 0x138) == 0)) {
    return;
  }
  if (*(long *)(param_1 + 0x140) == 0) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\0';
    if (*(char *)(*(long *)(param_1 + 0x140) + 0x69) != '\0') {
      cVar9 = '\n';
    }
  }
  plVar1 = (long *)(param_1 + 0x180);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02780984;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x188));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x188));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02780984;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02780984:
  pvVar8 = *(void **)(param_1 + 0x148);
  pvVar2 = *(void **)(param_1 + 0x150);
  if (pvVar8 != pvVar2) {
    pvVar7 = (void *)FUN_00c4c40c(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70),
                                  *(undefined2 *)((long)pvVar8 + 0x40));
    memcpy(pvVar8,pvVar7,0x40);
    while (pvVar7 = (void *)((long)pvVar8 + 0x50), pvVar7 != pvVar2) {
      pvVar8 = (void *)FUN_00c4c40c(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70),
                                    *(undefined2 *)((long)pvVar8 + 0x90));
      memcpy(pvVar7,pvVar8,0x40);
      pvVar8 = pvVar7;
    }
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x188));
  if ((*(char *)(param_1 + 0x58) == cVar9) && (*(char *)(param_1 + 0x59) == cVar9)) {
    return;
  }
  uVar3 = *(undefined2 *)(param_1 + 0x58);
  plVar1 = (long *)(param_1 + 0x38);
  *(char *)(param_1 + 0x58) = cVar9;
  *(char *)(param_1 + 0x59) = cVar9;
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x027809f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,uVar3);
  return;
}


