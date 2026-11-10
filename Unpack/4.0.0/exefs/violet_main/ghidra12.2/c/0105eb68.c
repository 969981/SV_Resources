/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0105eb68; name: FUN_0105eb68
 */


void FUN_0105eb68(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  lVar6 = param_1[1];
  lVar9 = *(long *)(*param_1 + 0x30);
  uVar5 = FUN_0105ed5c(lVar6);
  uVar7 = 8;
  if ((uVar5 & 1) == 0) {
    uVar7 = 6;
  }
  *(undefined4 *)(lVar6 + 0x130) = uVar7;
  if ((*(byte *)(lVar9 + 0x61) & 1) != 0) {
    return;
  }
  plVar1 = (long *)(lVar9 + 0x68);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0105ebc4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x70));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x70));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0105ebc4;
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
LAB_0105ebc4:
  puVar10 = *(undefined8 **)(lVar9 + 0x80);
  puVar2 = *(undefined8 **)(lVar9 + 0x88);
  if (puVar10 != puVar2) {
    if ((*(byte *)(lVar9 + 0x61) & 1) == 0) {
      (*(code *)*puVar10)(puVar10 + 4);
    }
    if ((*(byte *)(lVar9 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar10[0x10])();
      *(int *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1;
    }
    while (puVar10 = puVar10 + 0x12, puVar10 != puVar2) {
      if ((*(byte *)(lVar9 + 0x61) & 1) == 0) {
        (*(code *)*puVar10)(puVar10 + 4);
      }
      if ((*(byte *)(lVar9 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar10[0x10])();
        *(int *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1;
      }
    }
    puVar10 = *(undefined8 **)(lVar9 + 0x80);
    puVar2 = *(undefined8 **)(lVar9 + 0x88);
    if (puVar2 != puVar10) {
      pcVar8 = (code *)puVar2[-0x11];
      puVar11 = puVar2 + -0x12;
      if (pcVar8 != (code *)0x0) {
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        *puVar11 = 0;
        puVar2[-0x11] = 0;
        (*pcVar8)(puVar2 + -0xe);
      }
      while (puVar2 = puVar11, puVar2 != puVar10) {
        pcVar8 = (code *)puVar2[-0x11];
        puVar11 = puVar2 + -0x12;
        if (pcVar8 != (code *)0x0) {
          puVar2[-0x10] = 0;
          puVar2[-0xf] = 0;
          puVar2[-0x12] = 0;
          puVar2[-0x11] = 0;
          (*pcVar8)(puVar2 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar9 + 0x88) = puVar10;
  *(undefined1 *)(lVar9 + 0x60) = 1;
  if ((*(byte *)(lVar9 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar9 + 0x40),lVar9);
    *(byte *)(lVar9 + 0x50) = 1;
  }
  *(undefined8 *)(lVar9 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x70));
  return;
}


