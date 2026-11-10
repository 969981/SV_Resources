/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0236fb08; name: FUN_0236fb08
 */


undefined1  [16] FUN_0236fb08(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  float fVar16;
  undefined8 uVar18;
  undefined1 auVar17 [16];
  float fVar19;
  
  plVar2 = (long *)(param_1 + 0x60);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0236fb4c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0236fb4c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0236fb4c:
  plVar2 = (long *)(param_1 + 0x290);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar12 = *plVar2;
    lVar10 = *(long *)(param_1 + 0x298);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar12;
      *(long *)(param_1 + 0x298) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0236fb68:
  while ((lVar12 != 0 && (lVar5 != lVar12))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a0));
    do {
      lVar12 = *plVar2;
      lVar10 = *(long *)(param_1 + 0x298);
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar12;
        *(long *)(param_1 + 0x298) = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar13 = *plVar2;
    if (lVar13 != lVar12 || *(long *)(param_1 + 0x298) != lVar10) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_0236fb98;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar12;
      *(long *)(param_1 + 0x294) = lVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_0236fb98:
  if (!bVar7) {
    lVar12 = lVar13;
    lVar10 = *(long *)(param_1 + 0x298);
    goto LAB_0236fb68;
  }
  plVar8 = *(long **)(param_1 + 0x2b0);
  lVar5 = *(long *)(param_1 + 0x2e8);
  if ((lVar5 == 0) || (*plVar8 == param_2)) {
    plVar11 = plVar8;
LAB_0236fbf0:
    if (plVar11 == plVar8 + lVar5 * 4) goto LAB_0236fcfc;
    lVar12 = *(long *)(param_1 + 0x348) + plVar11[3] * 0x130;
    plVar8 = (long *)(lVar12 + 0x68);
    lVar5 = *plVar8;
    if (*(char *)(lVar5 + param_3 * 0x60 + 0x51) == '\0') {
      lVar10 = *(long *)(param_1 + 0x348) + plVar11[3] * 0x130;
      plVar11 = (long *)(lVar10 + 0x70);
      lVar13 = *plVar11 - lVar5 >> 5;
      uVar14 = lVar13 * -0x5555555555555555;
      if (param_3 < uVar14) {
        uVar6 = 1;
      }
      else {
        uVar3 = param_3 + 1;
        lVar13 = uVar3 + lVar13 * 0x5555555555555555;
        if (uVar3 < uVar14 || lVar13 == 0) {
          uVar6 = 0;
          if (uVar3 < uVar14) {
            *plVar11 = lVar5 + uVar3 * 0x60;
          }
        }
        else {
          plVar11 = (long *)(lVar10 + 0x68);
          FUN_01aa8008(plVar11,lVar13);
          lVar5 = *plVar11;
          uVar6 = 0;
        }
      }
      lVar10 = lVar5 + param_3 * 0x60;
      *(undefined1 *)(lVar10 + 0x51) = 1;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      *(undefined8 *)(lVar10 + 0x28) = 0;
      *(undefined8 *)(lVar10 + 0x48) = 0;
      *(undefined8 *)(lVar10 + 0x38) = 0;
      *(undefined8 *)(lVar10 + 0x40) = 0;
      *(undefined8 *)(lVar10 + 0x30) = 0;
      if (*(char *)(lVar10 + 0x50) == '\0') {
        auVar17 = NEON_ext(ZEXT816(0),ZEXT816(0),4,1);
        puVar9 = (undefined8 *)(lVar5 + param_3 * 0x60);
        fVar16 = SQRT(auVar17._0_4_ + auVar17._4_4_) * 0.5;
        fVar19 = 1.0;
        if (fVar16 < 0.0) {
          fVar19 = 0.0;
        }
        puVar9[1] = puVar9[9];
        *puVar9 = puVar9[8];
        *(float *)(puVar9 + 2) = fVar16 * fVar19 - fVar16 * 0.0;
      }
      FUN_00f1e4c0(lVar12 + 0x60,uVar6,param_3);
      lVar5 = *plVar8;
    }
    lVar5 = lVar5 + param_3 * 0x60;
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    uVar18 = *(undefined8 *)(lVar5 + 0x28);
  }
  else {
    lVar12 = lVar5 * 0x20;
    plVar15 = plVar8;
    while (lVar12 = lVar12 + -0x20, lVar12 != 0) {
      plVar1 = plVar15 + 4;
      plVar11 = plVar15 + 4;
      plVar15 = plVar15 + 4;
      if (*plVar1 == param_2) goto LAB_0236fbf0;
    }
LAB_0236fcfc:
    uVar6 = 0;
    uVar18 = 0;
  }
  do {
    lVar5 = *plVar2;
    lVar12 = *(long *)(param_1 + 0x298);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar5;
      *(long *)(param_1 + 0x298) = lVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar10 = *plVar2;
    lVar13 = *(long *)(param_1 + 0x298);
    if (lVar10 != lVar5 || lVar13 != lVar12) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_0236fcb4;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar5;
      *(long *)(param_1 + 0x294) = lVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_0236fcb4:
  if (!bVar7) {
    do {
      lVar5 = *plVar2;
      lVar12 = *(long *)(param_1 + 0x298);
      if (lVar5 != lVar10 || lVar12 != lVar13) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x0236fe5c;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar10;
        *(long *)(param_1 + 0x294) = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
joined_r0x0236fe5c:
    if (!bVar7) {
      do {
        lVar10 = *plVar2;
        lVar13 = *(long *)(param_1 + 0x298);
        if (lVar10 != lVar5 || lVar13 != lVar12) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar5 = lVar10;
          lVar12 = lVar13;
          goto joined_r0x0236fe5c;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar5;
          *(long *)(param_1 + 0x294) = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
      lVar5 = lVar10;
      lVar12 = lVar13;
      goto joined_r0x0236fe5c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2a0));
  *(undefined8 *)(param_1 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x68));
  auVar17._8_8_ = uVar18;
  auVar17._0_8_ = uVar6;
  return auVar17;
}


