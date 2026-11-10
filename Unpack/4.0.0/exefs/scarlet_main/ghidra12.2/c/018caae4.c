/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018caae4; name: FUN_018caae4
 */


void FUN_018caae4(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  lVar7 = *(long *)(*param_1 + 0x30);
  FUN_018cacc4(*(undefined8 *)param_1[1]);
  if ((*(byte *)(lVar7 + 0x61) & 1) != 0) {
    return;
  }
  plVar1 = (long *)(lVar7 + 0x68);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_018cab2c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x70));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x70));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_018cab2c;
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
LAB_018cab2c:
  puVar8 = *(undefined8 **)(lVar7 + 0x80);
  puVar2 = *(undefined8 **)(lVar7 + 0x88);
  if (puVar8 != puVar2) {
    if ((*(byte *)(lVar7 + 0x61) & 1) == 0) {
      (*(code *)*puVar8)(puVar8 + 4);
    }
    if ((*(byte *)(lVar7 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar8[0x10])();
      *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    }
    while (puVar8 = puVar8 + 0x12, puVar8 != puVar2) {
      if ((*(byte *)(lVar7 + 0x61) & 1) == 0) {
        (*(code *)*puVar8)(puVar8 + 4);
      }
      if ((*(byte *)(lVar7 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar8[0x10])();
        *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
      }
    }
    puVar8 = *(undefined8 **)(lVar7 + 0x80);
    puVar2 = *(undefined8 **)(lVar7 + 0x88);
    if (puVar2 != puVar8) {
      pcVar6 = (code *)puVar2[-0x11];
      puVar9 = puVar2 + -0x12;
      if (pcVar6 != (code *)0x0) {
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        *puVar9 = 0;
        puVar2[-0x11] = 0;
        (*pcVar6)(puVar2 + -0xe);
      }
      while (puVar2 = puVar9, puVar2 != puVar8) {
        pcVar6 = (code *)puVar2[-0x11];
        puVar9 = puVar2 + -0x12;
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
  *(undefined8 **)(lVar7 + 0x88) = puVar8;
  *(undefined1 *)(lVar7 + 0x60) = 1;
  if ((*(byte *)(lVar7 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar7 + 0x40),lVar7);
    *(byte *)(lVar7 + 0x50) = 1;
  }
  *(undefined8 *)(lVar7 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x70));
  return;
}


