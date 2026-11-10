/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017d3afc; name: thunk_FUN_017d3b00
 */


void thunk_FUN_017d3b00(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar6 = *(long *)(*param_1 + 0x30);
  FUN_011e2488(param_1[1],param_1[1] + 0xb0);
  if ((*(byte *)(lVar6 + 0x61) & 1) != 0) {
    return;
  }
  plVar1 = (long *)(lVar6 + 0x68);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_017d3b68;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x70));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x70));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_017d3b68;
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
LAB_017d3b68:
  puVar7 = *(undefined8 **)(lVar6 + 0x80);
  puVar8 = *(undefined8 **)(lVar6 + 0x88);
  if (puVar7 != puVar8) {
    if ((*(byte *)(lVar6 + 0x61) & 1) == 0) {
      (*(code *)*puVar7)(puVar7 + 4);
    }
    if ((*(byte *)(lVar6 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar7[0x10])();
      *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
    }
    if (puVar7 + 0x12 != puVar8) {
      if ((*(byte *)(lVar6 + 0x61) & 1) == 0) {
        (*(code *)puVar7[0x12])(puVar7 + 0x16);
      }
      if ((*(byte *)(lVar6 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar7[0x22])();
        *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
      }
      for (puVar7 = puVar7 + 0x24; puVar7 != puVar8; puVar7 = puVar7 + 0x12) {
        if ((*(byte *)(lVar6 + 0x61) & 1) == 0) {
          (*(code *)*puVar7)(puVar7 + 4);
        }
        if ((*(byte *)(lVar6 + 0x61) & 1) != 0) {
          (*(code *)**(undefined8 **)puVar7[0x10])();
          *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
        }
      }
    }
    puVar7 = *(undefined8 **)(lVar6 + 0x80);
    puVar8 = *(undefined8 **)(lVar6 + 0x88);
    if (puVar8 != puVar7) {
      pcVar5 = (code *)puVar8[-0x11];
      if (pcVar5 != (code *)0x0) {
        puVar8[-0x10] = 0;
        puVar8[-0xf] = 0;
        puVar8[-0x12] = 0;
        puVar8[-0x11] = 0;
        (*pcVar5)(puVar8 + -0xe);
      }
      if (puVar8 + -0x12 != puVar7) {
        pcVar5 = (code *)puVar8[-0x23];
        if (pcVar5 != (code *)0x0) {
          puVar8[-0x22] = 0;
          puVar8[-0x21] = 0;
          puVar8[-0x24] = 0;
          puVar8[-0x23] = 0;
          (*pcVar5)(puVar8 + -0x20);
        }
        if (puVar8 + -0x24 != puVar7) {
          do {
            pcVar5 = (code *)puVar8[-0x35];
            if (pcVar5 != (code *)0x0) {
              puVar8[-0x34] = 0;
              puVar8[-0x33] = 0;
              puVar8[-0x36] = 0;
              puVar8[-0x35] = 0;
              (*pcVar5)(puVar8 + -0x32);
            }
            puVar8 = puVar8 + -0x12;
          } while (puVar7 + 0x24 != puVar8);
        }
      }
    }
  }
  *(undefined8 **)(lVar6 + 0x88) = puVar7;
  *(undefined1 *)(lVar6 + 0x60) = 1;
  FUN_00e2f2f0(lVar6);
  *(undefined8 *)(lVar6 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x70));
  return;
}


