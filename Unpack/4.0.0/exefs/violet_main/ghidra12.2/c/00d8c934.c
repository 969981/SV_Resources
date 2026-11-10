/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d8c934; name: FUN_00d8c934
 */


void FUN_00d8c934(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char cVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined4 *puVar15;
  
  plVar1 = (long *)(param_1 + 0xf0);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar6 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00d8c974;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
        while (*plVar1 == 0) {
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar14) {
            *plVar1 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00d8c974;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00d8c974:
  if (*(long *)(param_1 + 0x108) != *(long *)(param_1 + 0x110)) {
    uVar13 = *(undefined8 *)(param_1 + 0x140);
    uVar2 = *(undefined8 *)(param_1 + 0x148);
    uVar11 = *(undefined8 *)(param_1 + 0x118);
    *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x108);
    *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x110);
    uVar3 = *(undefined8 *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x108) = uVar13;
    *(undefined8 *)(param_1 + 0x110) = uVar2;
    uVar10 = *(undefined8 *)(param_1 + 0x170);
    uVar13 = *(undefined8 *)(param_1 + 0x160);
    uVar2 = *(undefined8 *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x150) = uVar11;
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x130) = uVar2;
    *(undefined8 *)(param_1 + 0x138) = uVar10;
    *(undefined8 *)(param_1 + 0x120) = uVar3;
    *(undefined8 *)(param_1 + 0x128) = uVar13;
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xf8));
  puVar7 = PTR_DAT_047d38f8;
  if (*(long *)(param_1 + 0x140) != *(long *)(param_1 + 0x148)) {
    lVar12 = *(long *)PTR_DAT_047d38f8;
    lVar9 = nn::os::GetCurrentThread();
    if (lVar9 != lVar12) {
      uVar13 = nn::os::GetCurrentThread();
LAB_00d8cbb0:
      if (*(long *)puVar7 == 0) goto code_r0x00d8cbb8;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
      do {
        if (*(long *)puVar7 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
            while (*(long *)puVar7 == 0) {
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar14) {
                *(undefined8 *)puVar7 = uVar13;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_00d8cbc0;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar14) {
          *(undefined8 *)puVar7 = uVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_00d8cbc0:
      bVar14 = false;
      goto LAB_00d8ca0c;
    }
    bVar14 = true;
LAB_00d8ca0c:
    puVar15 = *(undefined4 **)(param_1 + 0x140);
    puVar4 = *(undefined4 **)(param_1 + 0x148);
    if (puVar15 != puVar4) {
      uVar5 = *puVar15;
      uVar13 = *(undefined8 *)(param_1 + 0x70);
      uVar8 = FUN_00c5d980(uVar13);
      FUN_00d8cc50(uVar13,0xfff0b9d8,uVar5);
      FUN_00c5db00(uVar13,uVar8);
      if (puVar15 + 1 != puVar4) {
        uVar13 = *(undefined8 *)(param_1 + 0x70);
        uVar5 = puVar15[1];
        uVar8 = FUN_00c5d980(uVar13);
        FUN_00d8cc50(uVar13,0xfff0b9d8,uVar5);
        FUN_00c5db00(uVar13,uVar8);
        if (puVar15 + 2 != puVar4) {
          uVar13 = *(undefined8 *)(param_1 + 0x70);
          uVar5 = puVar15[2];
          uVar8 = FUN_00c5d980(uVar13);
          FUN_00d8cc50(uVar13,0xfff0b9d8,uVar5);
          FUN_00c5db00(uVar13,uVar8);
          if (puVar15 + 3 != puVar4) {
            uVar13 = *(undefined8 *)(param_1 + 0x70);
            uVar5 = puVar15[3];
            uVar8 = FUN_00c5d980(uVar13);
            FUN_00d8cc50(uVar13,0xfff0b9d8,uVar5);
            FUN_00c5db00(uVar13,uVar8);
            for (puVar15 = puVar15 + 4; puVar15 != puVar4; puVar15 = puVar15 + 1) {
              uVar5 = *puVar15;
              uVar13 = *(undefined8 *)(param_1 + 0x70);
              uVar8 = FUN_00c5d980(uVar13);
              FUN_00d8cc50(uVar13,0xfff0b9d8,uVar5);
              FUN_00c5db00(uVar13,uVar8);
            }
          }
        }
      }
      puVar15 = *(undefined4 **)(param_1 + 0x140);
    }
    *(undefined4 **)(param_1 + 0x148) = puVar15;
    if (!bVar14) {
      *(undefined8 *)puVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar7 + 8));
      return;
    }
  }
  return;
code_r0x00d8cbb8:
  cVar6 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(puVar7,0x10);
  if (bVar14) {
    *(undefined8 *)puVar7 = uVar13;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00d8cbc0;
  goto LAB_00d8cbb0;
}


