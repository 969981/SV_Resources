/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01db94ec; name: FUN_01db94ec
 */


void FUN_01db94ec(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar8;
  undefined8 *puVar7;
  undefined1 auStack_b0 [104];
  undefined8 local_48;
  
  *(undefined1 *)(param_1 + 0x452) = 0;
  plVar6 = (long *)(param_1 + 0x1d8);
  lVar4 = *plVar6;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar4) {
    plVar6 = (long *)0x0;
    bVar5 = true;
LAB_01db9564:
    puVar1 = *(undefined8 **)(param_1 + 0x1f8);
    if (*(undefined8 **)(param_1 + 0x1f0) != puVar1) {
      puVar7 = *(undefined8 **)(param_1 + 0x1f0);
      do {
        puVar8 = puVar7 + 1;
        local_48 = *puVar7;
        FUN_02b5358c(auStack_b0,&local_48);
        puVar7 = puVar8;
      } while (puVar1 != puVar8);
    }
    if (!bVar5) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    FUN_02b53594(auStack_b0);
    lVar3 = *(long *)(param_1 + 0x1c8);
    *(undefined1 *)(param_1 + 0x448) = 1;
    for (; (lVar3 != 0 && (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0));
        lVar3 = *(long *)(lVar3 + 0x1a0)) {
      *(undefined1 *)(lVar3 + 0x420) = 1;
    }
    return;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01db9560;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
        while (*plVar6 == 0) {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *plVar6 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01db9560;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01db9560:
  bVar5 = false;
  goto LAB_01db9564;
}


