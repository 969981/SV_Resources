/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ecdb98; name: FUN_00ecdb98
 */


void FUN_00ecdb98(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 local_34 [4];
  
  lVar9 = *param_1;
  if (((*(int *)(lVar9 + 0x15c) == 1) && (uVar6 = FUN_00ea79f4(lVar9), (uVar6 & 1) != 0)) &&
     (lVar7 = *(long *)(lVar9 + 0x108), lVar7 != 0)) {
    for (lVar2 = *(long *)(lVar7 + 0x38); lVar2 != *(long *)(lVar7 + 0x40); lVar2 = lVar2 + 0x40) {
      if ((*(long *)(lVar2 + 8) == 0) || ((*(byte *)(*(long *)(lVar2 + 8) + 0x1e8) & 1) == 0))
      goto LAB_00ecdbd0;
    }
    if ((((*(long *)(lVar9 + 0x110) == 0) ||
         ((lVar7 = *(long *)(*(long *)(lVar9 + 0x110) + 0x38), lVar7 != 0 &&
          ((*(byte *)(lVar7 + 0x1e8) & 1) != 0)))) &&
        ((*(long *)(lVar9 + 0x118) == 0 ||
         ((lVar9 = *(long *)(*(long *)(lVar9 + 0x118) + 0x38), lVar9 != 0 &&
          ((*(byte *)(lVar9 + 0x1e8) & 1) != 0)))))) &&
       (lVar9 = *(long *)(*param_1 + 0x168), lVar9 != 0)) {
      local_34[0] = 1;
      (**(code **)(lVar9 + 0x30))(lVar9 + 0x50,local_34);
    }
  }
LAB_00ecdbd0:
  lVar9 = param_1[1];
  if ((*(byte *)(lVar9 + 0x61) & 1) != 0) {
    return;
  }
  plVar1 = (long *)(lVar9 + 0x68);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00ecdbfc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x70));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x70));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00ecdbfc;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00ecdbfc:
  puVar10 = *(undefined8 **)(lVar9 + 0x80);
  puVar3 = *(undefined8 **)(lVar9 + 0x88);
  if (puVar10 != puVar3) {
    if ((*(byte *)(lVar9 + 0x61) & 1) == 0) {
      (*(code *)*puVar10)(puVar10 + 4);
    }
    if ((*(byte *)(lVar9 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar10[0x10])();
      *(int *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1;
    }
    while (puVar10 = puVar10 + 0x12, puVar10 != puVar3) {
      if ((*(byte *)(lVar9 + 0x61) & 1) == 0) {
        (*(code *)*puVar10)(puVar10 + 4);
      }
      if ((*(byte *)(lVar9 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar10[0x10])();
        *(int *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1;
      }
    }
    puVar10 = *(undefined8 **)(lVar9 + 0x80);
    puVar3 = *(undefined8 **)(lVar9 + 0x88);
    if (puVar3 != puVar10) {
      pcVar8 = (code *)puVar3[-0x11];
      puVar11 = puVar3 + -0x12;
      if (pcVar8 != (code *)0x0) {
        puVar3[-0x10] = 0;
        puVar3[-0xf] = 0;
        *puVar11 = 0;
        puVar3[-0x11] = 0;
        (*pcVar8)(puVar3 + -0xe);
      }
      while (puVar3 = puVar11, puVar3 != puVar10) {
        pcVar8 = (code *)puVar3[-0x11];
        puVar11 = puVar3 + -0x12;
        if (pcVar8 != (code *)0x0) {
          puVar3[-0x10] = 0;
          puVar3[-0xf] = 0;
          puVar3[-0x12] = 0;
          puVar3[-0x11] = 0;
          (*pcVar8)(puVar3 + -0xe);
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


