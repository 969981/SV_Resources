/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00da0088; name: FUN_00da0088
 */


void FUN_00da0088(long param_1)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 local_38;
  
  plVar7 = (long *)(param_1 + 8);
  lVar4 = *plVar7;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar4) {
    plVar7 = (long *)0x0;
    bVar3 = true;
LAB_00da00d0:
    lVar2 = *(long *)(param_1 + 0x20);
    puVar5 = (undefined8 *)(lVar2 + *(long *)(param_1 + 0xa0) * 0x90);
    if (puVar5 != *(undefined8 **)(param_1 + 0x28)) {
      lVar2 = lVar2 + *(long *)(param_1 + 0xa0) * 0x90;
      local_38 = *(undefined8 *)(lVar2 + 0x80);
      (*(code *)*puVar5)(lVar2 + 0x20,&local_38);
      puVar6 = puVar5;
      while (puVar5 = puVar6 + 0x12, puVar5 != *(undefined8 **)(param_1 + 0x28)) {
        local_38 = puVar6[0x22];
        (*(code *)*puVar5)(puVar6 + 0x16,&local_38);
        puVar6 = puVar5;
      }
      lVar2 = *(long *)(param_1 + 0x20);
    }
    *(long *)(param_1 + 0xa0) = ((long)puVar5 - lVar2 >> 4) * -0x71c71c71c71c71c7;
    if (!bVar3) {
      *plVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
    }
    return;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00da00cc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        while (*plVar7 == 0) {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00da00cc;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00da00cc:
  bVar3 = false;
  goto LAB_00da00d0;
}


