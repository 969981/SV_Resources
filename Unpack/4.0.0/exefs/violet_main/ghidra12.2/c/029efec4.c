/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029efec4; name: FUN_029efec4
 */


void FUN_029efec4(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  
  if ((*(byte *)(param_1 + 0x61) & 1) != 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x68);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_029eff00;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x70));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x70));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_029eff00;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_029eff00:
  puVar8 = *(undefined8 **)(param_1 + 0x80);
  puVar2 = *(undefined8 **)(param_1 + 0x88);
  if (puVar8 != puVar2) {
    do {
      if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
        (*(code *)*puVar8)(puVar8 + 4);
      }
      if ((*(byte *)(param_1 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar8[0x10])();
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      }
      puVar8 = puVar8 + 0x12;
    } while (puVar2 != puVar8);
    puVar8 = *(undefined8 **)(param_1 + 0x80);
    puVar2 = *(undefined8 **)(param_1 + 0x88);
    while (puVar5 = puVar2, puVar5 != puVar8) {
      pcVar7 = (code *)puVar5[-0x11];
      puVar2 = puVar5 + -0x12;
      if (pcVar7 != (code *)0x0) {
        puVar5[-0x10] = 0;
        puVar5[-0xf] = 0;
        puVar5[-0x12] = 0;
        puVar5[-0x11] = 0;
        (*pcVar7)(puVar5 + -0xe);
      }
    }
  }
  *(undefined8 **)(param_1 + 0x88) = puVar8;
  *(undefined1 *)(param_1 + 0x60) = 1;
  FUN_00e2f2f0(param_1);
  *(undefined8 *)(param_1 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x70));
  return;
}


