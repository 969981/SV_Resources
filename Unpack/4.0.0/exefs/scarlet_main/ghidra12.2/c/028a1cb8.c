/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a1cb8; name: FUN_028a1cb8
 */


void FUN_028a1cb8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_50;
  undefined4 local_48;
  
  if ((*(byte *)(param_1 + 0x6d) & 1) != 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x78);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_028a1d00;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_028a1d00;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_028a1d00:
  puVar8 = *(undefined8 **)(param_1 + 200);
  puVar2 = *(undefined8 **)(param_1 + 0xd0);
  if (puVar8 != puVar2) {
    if ((*(byte *)(param_1 + 0x6d) & 1) == 0) {
      local_50 = *param_2;
      local_48 = *(undefined4 *)(param_2 + 1);
      (*(code *)*puVar8)(puVar8 + 4,&local_50);
    }
    if ((*(byte *)(param_1 + 0x6d) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar8[0x10])();
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    }
    while (puVar8 = puVar8 + 0x12, puVar8 != puVar2) {
      if ((*(byte *)(param_1 + 0x6d) & 1) == 0) {
        local_50 = *param_2;
        local_48 = *(undefined4 *)(param_2 + 1);
        (*(code *)*puVar8)(puVar8 + 4,&local_50);
      }
      if ((*(byte *)(param_1 + 0x6d) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar8[0x10])();
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      }
    }
    puVar8 = *(undefined8 **)(param_1 + 200);
    puVar2 = *(undefined8 **)(param_1 + 0xd0);
    if (puVar2 != puVar8) {
      pcVar7 = (code *)puVar2[-0x11];
      puVar9 = puVar2 + -0x12;
      if (pcVar7 != (code *)0x0) {
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        *puVar9 = 0;
        puVar2[-0x11] = 0;
        (*pcVar7)(puVar2 + -0xe);
      }
      while (puVar2 = puVar9, puVar2 != puVar8) {
        pcVar7 = (code *)puVar2[-0x11];
        puVar9 = puVar2 + -0x12;
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
  *(undefined8 **)(param_1 + 0xd0) = puVar8;
  uVar3 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x60) = *param_2;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(param_1 + 0x40),param_1);
    *(byte *)(param_1 + 0x50) = 1;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
  return;
}


