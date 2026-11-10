/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017d3f58; name: FUN_017d3f58
 */


void FUN_017d3f58(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if ((*(byte *)(param_1 + 0x61) & 1) != 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x68);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_017d3f94;
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
          if (cVar3 == '\0') goto LAB_017d3f94;
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
LAB_017d3f94:
  puVar7 = *(undefined8 **)(param_1 + 0x80);
  puVar2 = *(undefined8 **)(param_1 + 0x88);
  if (puVar7 != puVar2) {
    if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
      (*(code *)*puVar7)(puVar7 + 4);
    }
    if ((*(byte *)(param_1 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar7[0x10])();
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    }
    while (puVar7 = puVar7 + 0x12, puVar7 != puVar2) {
      if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
        (*(code *)*puVar7)(puVar7 + 4);
      }
      if ((*(byte *)(param_1 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar7[0x10])();
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      }
    }
    puVar7 = *(undefined8 **)(param_1 + 0x80);
    puVar2 = *(undefined8 **)(param_1 + 0x88);
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
  *(undefined8 **)(param_1 + 0x88) = puVar7;
  *(undefined1 *)(param_1 + 0x60) = 1;
  FUN_00e2f2f0(param_1);
  *(undefined8 *)(param_1 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x70));
  return;
}


