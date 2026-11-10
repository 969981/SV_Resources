/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0193c5d8; name: FUN_0193c5d8
 */


void FUN_0193c5d8(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  undefined1 auStack_80 [32];
  
  plVar2 = (long *)(param_2 + 0x60);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0193c624;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0193c624;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0193c624:
  plVar2 = (long *)(param_2 + 0x290);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar13 = *plVar2;
    lVar11 = *(long *)(param_2 + 0x298);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar13;
      *(long *)(param_2 + 0x298) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0193c640:
  while ((lVar13 != 0 && (lVar5 != lVar13))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2a0));
    do {
      lVar13 = *plVar2;
      lVar11 = *(long *)(param_2 + 0x298);
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar13;
        *(long *)(param_2 + 0x298) = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar15 = *plVar2;
    if (lVar15 != lVar13 || *(long *)(param_2 + 0x298) != lVar11) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_0193c670;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar13;
      *(long *)(param_2 + 0x294) = lVar11 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_0193c670:
  if (!bVar6) {
    lVar13 = lVar15;
    lVar11 = *(long *)(param_2 + 0x298);
    goto LAB_0193c640;
  }
  plVar7 = *(long **)(param_2 + 0x2b0);
  lVar5 = *(long *)(param_2 + 0x2e8);
  if ((lVar5 == 0) || (*plVar7 == param_3)) {
    plVar12 = plVar7;
LAB_0193c6c4:
    if (plVar12 == plVar7 + lVar5 * 4) goto LAB_0193c7d0;
    lVar13 = *(long *)(param_2 + 0x348) + plVar12[3] * 0x130;
    plVar7 = (long *)(lVar13 + 0x68);
    lVar5 = *plVar7;
    if (*(char *)(lVar5 + param_4 * 0x60 + 0x50) == '\0') {
      lVar11 = *(long *)(param_2 + 0x348) + plVar12[3] * 0x130;
      plVar12 = (long *)(lVar11 + 0x70);
      lVar15 = *plVar12 - lVar5 >> 5;
      uVar16 = lVar15 * -0x5555555555555555;
      if (param_4 < uVar16) {
        uVar9 = 1;
      }
      else {
        uVar3 = param_4 + 1;
        lVar15 = uVar3 + lVar15 * 0x5555555555555555;
        if (uVar3 < uVar16 || lVar15 == 0) {
          uVar9 = 0;
          if (uVar3 < uVar16) {
            *plVar12 = lVar5 + uVar3 * 0x60;
          }
        }
        else {
          plVar12 = (long *)(lVar11 + 0x68);
          FUN_01aa8008(plVar12,lVar15);
          lVar5 = *plVar12;
          uVar9 = 0;
        }
      }
      puVar8 = (undefined8 *)(lVar5 + param_4 * 0x60);
      *(undefined1 *)(puVar8 + 10) = 1;
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined4 *)(puVar8 + 2) = 0;
      FUN_0193cb94(auStack_80,lVar13 + 0x60,uVar9,param_4);
      lVar5 = *plVar7;
    }
    puVar8 = (undefined8 *)(lVar5 + param_4 * 0x60);
    uVar14 = puVar8[1];
    param_1[3] = puVar8[3];
    uVar10 = *puVar8;
    uVar9 = puVar8[2];
    param_1[1] = uVar14;
    param_1[2] = uVar9;
    *param_1 = uVar10;
  }
  else {
    lVar13 = lVar5 * 0x20;
    plVar17 = plVar7;
    while (lVar13 = lVar13 + -0x20, lVar13 != 0) {
      plVar1 = plVar17 + 4;
      plVar12 = plVar17 + 4;
      plVar17 = plVar17 + 4;
      if (*plVar1 == param_3) goto LAB_0193c6c4;
    }
LAB_0193c7d0:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  do {
    lVar5 = *plVar2;
    lVar13 = *(long *)(param_2 + 0x298);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar5;
      *(long *)(param_2 + 0x298) = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar11 = *plVar2;
    lVar15 = *(long *)(param_2 + 0x298);
    if (lVar11 != lVar5 || lVar15 != lVar13) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_0193c798;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar5;
      *(long *)(param_2 + 0x294) = lVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_0193c798:
  if (!bVar6) {
    do {
      lVar5 = *plVar2;
      lVar13 = *(long *)(param_2 + 0x298);
      if (lVar5 != lVar11 || lVar13 != lVar15) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x0193c8a8;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar11;
        *(long *)(param_2 + 0x294) = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
joined_r0x0193c8a8:
    if (!bVar6) {
      do {
        lVar11 = *plVar2;
        lVar15 = *(long *)(param_2 + 0x298);
        if (lVar11 != lVar5 || lVar15 != lVar13) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar11;
          lVar13 = lVar15;
          goto joined_r0x0193c8a8;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar5;
          *(long *)(param_2 + 0x294) = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = true;
      lVar5 = lVar11;
      lVar13 = lVar15;
      goto joined_r0x0193c8a8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x2a0));
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  return;
}


