/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017ae88c; name: FUN_017ae88c
 */


void FUN_017ae88c(long *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *local_58;
  long local_50;
  long local_48;
  long lStack_40;
  undefined1 local_38 [8];
  
  lVar5 = param_1[1];
  lVar8 = *(long *)(*param_1 + 0x30);
  local_58 = PTR_DAT_047e32c8 + 0x10;
  local_50 = 0;
  lVar9 = *(long *)(lVar5 + 0x88);
  lStack_40 = lVar5 + 0x188;
  local_48 = 0;
  FUN_017aeacc(lVar9,&local_50);
  plVar4 = *(long **)(lVar9 + 0x10);
  if (plVar4 == (long *)0x0) {
    puVar6 = (undefined1 *)FUN_013e253c();
    local_38[0] = *puVar6;
  }
  else {
    (**(code **)(*plVar4 + 0x38))(local_38,plVar4,&local_58);
  }
  *(long *)(lVar5 + 0x1c8) = local_48 - local_50;
  *(undefined4 *)(lVar5 + 0xa8) = 5;
  if ((*(byte *)(lVar8 + 0x61) & 1) != 0) {
    return;
  }
  plVar4 = (long *)(lVar8 + 0x68);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_017ae92c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x70));
  do {
    if (*plVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x70));
        while (*plVar4 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_017ae92c;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_017ae92c:
  puVar10 = *(undefined8 **)(lVar8 + 0x80);
  puVar1 = *(undefined8 **)(lVar8 + 0x88);
  if (puVar10 != puVar1) {
    if ((*(byte *)(lVar8 + 0x61) & 1) == 0) {
      (*(code *)*puVar10)(puVar10 + 4);
    }
    if ((*(byte *)(lVar8 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar10[0x10])();
      *(int *)(lVar8 + 100) = *(int *)(lVar8 + 100) + 1;
    }
    while (puVar10 = puVar10 + 0x12, puVar10 != puVar1) {
      if ((*(byte *)(lVar8 + 0x61) & 1) == 0) {
        (*(code *)*puVar10)(puVar10 + 4);
      }
      if ((*(byte *)(lVar8 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar10[0x10])();
        *(int *)(lVar8 + 100) = *(int *)(lVar8 + 100) + 1;
      }
    }
    puVar10 = *(undefined8 **)(lVar8 + 0x80);
    puVar1 = *(undefined8 **)(lVar8 + 0x88);
    if (puVar1 != puVar10) {
      pcVar7 = (code *)puVar1[-0x11];
      puVar11 = puVar1 + -0x12;
      if (pcVar7 != (code *)0x0) {
        puVar1[-0x10] = 0;
        puVar1[-0xf] = 0;
        *puVar11 = 0;
        puVar1[-0x11] = 0;
        (*pcVar7)(puVar1 + -0xe);
      }
      while (puVar1 = puVar11, puVar1 != puVar10) {
        pcVar7 = (code *)puVar1[-0x11];
        puVar11 = puVar1 + -0x12;
        if (pcVar7 != (code *)0x0) {
          puVar1[-0x10] = 0;
          puVar1[-0xf] = 0;
          puVar1[-0x12] = 0;
          puVar1[-0x11] = 0;
          (*pcVar7)(puVar1 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar8 + 0x88) = puVar10;
  *(undefined1 *)(lVar8 + 0x60) = 1;
  if ((*(byte *)(lVar8 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar8 + 0x40),lVar8);
    *(byte *)(lVar8 + 0x50) = 1;
  }
  *(undefined8 *)(lVar8 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x70));
  return;
}


