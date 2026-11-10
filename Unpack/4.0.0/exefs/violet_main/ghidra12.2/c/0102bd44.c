/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0102bd44; name: FUN_0102bd44
 */


void FUN_0102bd44(long *param_1,ulong param_2,int param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 local_34 [4];
  
  if ((param_2 & 0xff00000000) == 0) {
    puVar7 = (undefined4 *)(*param_1 + 0x15c);
LAB_0102bd7c:
    *puVar7 = 2;
    *(undefined4 *)(*param_1 + 0x158) = 0;
    if (*(long *)(*param_1 + 0x160) == 0) goto LAB_0102bdd4;
    puVar5 = (undefined8 *)(*(long *)(*param_1 + 0x160) + 0x30);
    local_34[0] = (char)(param_2 >> 0x20);
    if ((param_2 & 0xff00000000) != 0) goto LAB_0102bdbc;
  }
  else {
    puVar7 = (undefined4 *)(*param_1 + 0x15c);
    if (param_3 != 0) goto LAB_0102bd7c;
    *puVar7 = 1;
    if (*(long *)(*param_1 + 0x160) == 0) goto LAB_0102bdd4;
    puVar5 = (undefined8 *)(*(long *)(*param_1 + 0x160) + 0x30);
LAB_0102bdbc:
    local_34[0] = param_3 == 0;
  }
  (*(code *)*puVar5)(puVar5 + 4,local_34);
LAB_0102bdd4:
  lVar9 = param_1[1];
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
    if (cVar3 == '\0') goto LAB_0102be00;
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
          if (cVar3 == '\0') goto LAB_0102be00;
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
LAB_0102be00:
  puVar5 = *(undefined8 **)(lVar9 + 0x80);
  puVar2 = *(undefined8 **)(lVar9 + 0x88);
  if (puVar5 != puVar2) {
    if ((*(byte *)(lVar9 + 0x61) & 1) == 0) {
      (*(code *)*puVar5)(puVar5 + 4);
    }
    if ((*(byte *)(lVar9 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar5[0x10])();
      *(int *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1;
    }
    while (puVar5 = puVar5 + 0x12, puVar5 != puVar2) {
      if ((*(byte *)(lVar9 + 0x61) & 1) == 0) {
        (*(code *)*puVar5)(puVar5 + 4);
      }
      if ((*(byte *)(lVar9 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar5[0x10])();
        *(int *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1;
      }
    }
    puVar5 = *(undefined8 **)(lVar9 + 0x80);
    puVar2 = *(undefined8 **)(lVar9 + 0x88);
    if (puVar2 != puVar5) {
      pcVar8 = (code *)puVar2[-0x11];
      puVar10 = puVar2 + -0x12;
      if (pcVar8 != (code *)0x0) {
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        *puVar10 = 0;
        puVar2[-0x11] = 0;
        (*pcVar8)(puVar2 + -0xe);
      }
      while (puVar2 = puVar10, puVar2 != puVar5) {
        pcVar8 = (code *)puVar2[-0x11];
        puVar10 = puVar2 + -0x12;
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
  *(undefined8 **)(lVar9 + 0x88) = puVar5;
  *(undefined1 *)(lVar9 + 0x60) = 1;
  if ((*(byte *)(lVar9 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar9 + 0x40),lVar9);
    *(byte *)(lVar9 + 0x50) = 1;
  }
  *(undefined8 *)(lVar9 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x70));
  return;
}


