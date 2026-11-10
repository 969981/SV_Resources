/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0219ea28; name: FUN_0219ea28
 */


bool FUN_0219ea28(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (((*(byte *)(param_1 + 0x62) & 1) != 0) || ((*(byte *)(param_1 + 0x61) & 1) != 0)) {
    return false;
  }
  *(undefined1 *)(param_1 + 0x62) = 1;
  plVar1 = (long *)(param_1 + 0x68);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0219ea7c;
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
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0219ea7c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0219ea7c:
  puVar7 = *(undefined8 **)(param_1 + 0xb8);
  puVar2 = *(undefined8 **)(param_1 + 0xc0);
  if (puVar7 != puVar2) {
    do {
      (*(code *)**(undefined8 **)puVar7[0x10])();
      puVar7 = puVar7 + 0x12;
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    } while (puVar2 != puVar7);
    puVar7 = *(undefined8 **)(param_1 + 0xb8);
    puVar2 = *(undefined8 **)(param_1 + 0xc0);
    if (puVar2 != puVar7) {
      pcVar6 = (code *)puVar2[-0x11];
      puVar8 = puVar2 + -0x12;
      if (pcVar6 != (code *)0x0) {
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        *puVar8 = 0;
        puVar2[-0x11] = 0;
        (*pcVar6)(puVar2 + -0xe);
      }
      while (puVar2 = puVar8, puVar2 != puVar7) {
        pcVar6 = (code *)puVar2[-0x11];
        puVar8 = puVar2 + -0x12;
        if (pcVar6 != (code *)0x0) {
          puVar2[-0x10] = 0;
          puVar2[-0xf] = 0;
          puVar2[-0x12] = 0;
          puVar2[-0x11] = 0;
          (*pcVar6)(puVar2 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(param_1 + 0xc0) = puVar7;
  *(undefined8 *)(param_1 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x70));
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(param_1 + 0x40),param_1);
    *(byte *)(param_1 + 0x50) = 1;
  }
  return 0 < *(int *)(param_1 + 100);
}


