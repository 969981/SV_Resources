/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4826c; name: FUN_00c4826c
 */


void FUN_00c4826c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  plVar7 = (long *)(param_1 + 0x50);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00c482a4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x58));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x58));
        while (*plVar7 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00c482a4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00c482a4:
  plVar7 = *(long **)(param_1 + 0xd0);
  plVar1 = *(long **)(param_1 + 0xd8);
  if (plVar7 != plVar1) {
    do {
      lVar6 = *plVar7;
      lVar5 = lVar6 + 0x40;
      puVar8 = *(undefined8 **)(lVar6 + 0x138);
      puVar2 = *(undefined8 **)(lVar6 + 0x140);
      if (puVar8 != puVar2) {
        FUN_00c4aa50(lVar5,*puVar8);
        while (puVar8 = puVar8 + 1, puVar8 != puVar2) {
          FUN_00c4aa50(lVar5,*puVar8);
        }
      }
      puVar8 = *(undefined8 **)(lVar6 + 0x170);
      puVar2 = *(undefined8 **)(lVar6 + 0x178);
      if (puVar8 != puVar2) {
        FUN_00c4ab80(lVar5,*puVar8);
        while (puVar8 = puVar8 + 1, puVar8 != puVar2) {
          FUN_00c4ab80(lVar5,*puVar8);
        }
        puVar8 = *(undefined8 **)(lVar6 + 0x170);
      }
      plVar7 = plVar7 + 1;
      *(undefined8 **)(lVar6 + 0x178) = puVar8;
      *(undefined8 *)(lVar6 + 0x140) = *(undefined8 *)(lVar6 + 0x138);
    } while (plVar7 != plVar1);
    plVar7 = *(long **)(param_1 + 0xd0);
    plVar1 = *(long **)(param_1 + 0xd8);
    if (plVar7 != plVar1) {
      FUN_00c48430(*plVar7,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
      while (plVar7 = plVar7 + 1, plVar7 != plVar1) {
        FUN_00c48430(*plVar7,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
      }
      plVar7 = *(long **)(param_1 + 0xd0);
    }
  }
  *(long **)(param_1 + 0xd8) = plVar7;
  *(undefined8 *)(param_1 + 0x50) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x58));
  return;
}


