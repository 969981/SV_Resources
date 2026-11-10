/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01598f7c; name: FUN_01598f7c
 */


void FUN_01598f7c(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar6 = param_1[1];
  lVar8 = *(long *)(*param_1 + 0x30);
  uVar5 = FUN_01599798(*(undefined8 *)(lVar6 + 0x70));
  FUN_01599178(lVar6,uVar5);
  FUN_01599300(lVar6);
  *(undefined4 *)(lVar6 + 0xa8) = 3;
  if ((*(byte *)(lVar8 + 0x61) & 1) != 0) {
    return;
  }
  plVar1 = (long *)(lVar8 + 0x68);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01598fe0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x70));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x70));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01598fe0;
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
LAB_01598fe0:
  puVar9 = *(undefined8 **)(lVar8 + 0x80);
  puVar2 = *(undefined8 **)(lVar8 + 0x88);
  if (puVar9 != puVar2) {
    if ((*(byte *)(lVar8 + 0x61) & 1) == 0) {
      (*(code *)*puVar9)(puVar9 + 4);
    }
    if ((*(byte *)(lVar8 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar9[0x10])();
      *(int *)(lVar8 + 100) = *(int *)(lVar8 + 100) + 1;
    }
    while (puVar9 = puVar9 + 0x12, puVar9 != puVar2) {
      if ((*(byte *)(lVar8 + 0x61) & 1) == 0) {
        (*(code *)*puVar9)(puVar9 + 4);
      }
      if ((*(byte *)(lVar8 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar9[0x10])();
        *(int *)(lVar8 + 100) = *(int *)(lVar8 + 100) + 1;
      }
    }
    puVar9 = *(undefined8 **)(lVar8 + 0x80);
    puVar2 = *(undefined8 **)(lVar8 + 0x88);
    if (puVar2 != puVar9) {
      pcVar7 = (code *)puVar2[-0x11];
      puVar10 = puVar2 + -0x12;
      if (pcVar7 != (code *)0x0) {
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        *puVar10 = 0;
        puVar2[-0x11] = 0;
        (*pcVar7)(puVar2 + -0xe);
      }
      while (puVar2 = puVar10, puVar2 != puVar9) {
        pcVar7 = (code *)puVar2[-0x11];
        puVar10 = puVar2 + -0x12;
        if (pcVar7 != (code *)0x0) {
          puVar2[-0x10] = 0;
          puVar2[-0xf] = 0;
          puVar2[-0x12] = 0;
          puVar2[-0x11] = 0;
          (*pcVar7)(puVar2 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar8 + 0x88) = puVar9;
  *(undefined1 *)(lVar8 + 0x60) = 1;
  if ((*(byte *)(lVar8 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar8 + 0x40),lVar8);
    *(byte *)(lVar8 + 0x50) = 1;
  }
  *(undefined8 *)(lVar8 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x70));
  return;
}


