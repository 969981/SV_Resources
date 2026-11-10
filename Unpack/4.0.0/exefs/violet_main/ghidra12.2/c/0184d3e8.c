/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0184d3e8; name: FUN_0184d3e8
 */


void FUN_0184d3e8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if ((*(byte *)(param_1 + 0x61) & 1) != 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x68);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0184d424;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x70));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x70));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0184d424;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0184d424:
  puVar6 = *(undefined8 **)(param_1 + 0x80);
  puVar7 = *(undefined8 **)(param_1 + 0x88);
  if (puVar6 != puVar7) {
    if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
      (*(code *)*puVar6)(puVar6 + 4);
    }
    if ((*(byte *)(param_1 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar6[0x10])();
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    }
    while (puVar6 = puVar6 + 0x12, puVar6 != puVar7) {
      if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
        (*(code *)*puVar6)(puVar6 + 4);
      }
      if ((*(byte *)(param_1 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar6[0x10])();
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      }
    }
    puVar6 = *(undefined8 **)(param_1 + 0x80);
    puVar7 = *(undefined8 **)(param_1 + 0x88);
    if (puVar7 != puVar6) {
      pcVar5 = (code *)puVar7[-0x11];
      if (pcVar5 != (code *)0x0) {
        puVar7[-0x10] = 0;
        puVar7[-0xf] = 0;
        puVar7[-0x12] = 0;
        puVar7[-0x11] = 0;
        (*pcVar5)(puVar7 + -0xe);
      }
      if (puVar7 + -0x12 != puVar6) {
        pcVar5 = (code *)puVar7[-0x23];
        if (pcVar5 != (code *)0x0) {
          puVar7[-0x22] = 0;
          puVar7[-0x21] = 0;
          puVar7[-0x24] = 0;
          puVar7[-0x23] = 0;
          (*pcVar5)(puVar7 + -0x20);
        }
        if (puVar7 + -0x24 != puVar6) {
          do {
            pcVar5 = (code *)puVar7[-0x35];
            if (pcVar5 != (code *)0x0) {
              puVar7[-0x34] = 0;
              puVar7[-0x33] = 0;
              puVar7[-0x36] = 0;
              puVar7[-0x35] = 0;
              (*pcVar5)(puVar7 + -0x32);
            }
            puVar7 = puVar7 + -0x12;
          } while (puVar6 + 0x24 != puVar7);
        }
      }
    }
  }
  *(undefined8 **)(param_1 + 0x88) = puVar6;
  *(undefined1 *)(param_1 + 0x60) = 1;
  FUN_00e2f2f0(param_1);
  *(undefined8 *)(param_1 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x70));
  return;
}


