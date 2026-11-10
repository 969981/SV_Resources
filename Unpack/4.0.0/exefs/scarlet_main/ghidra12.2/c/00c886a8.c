/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c886a8; name: FUN_00c886a8
 */


void FUN_00c886a8(long param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar9 [16];
  
  if (*param_2 == '\0') {
    if (*(char *)(param_1 + 0x150) == '\0') {
      return;
    }
  }
  else if ((*(char *)(param_1 + 0x150) != '\0') &&
          (fVar8 = (float)*(undefined8 *)(param_2 + 0x10) - *(float *)(param_1 + 0x160),
          fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) -
                   *(float *)(param_1 + 0x164),
          fVar11 = (float)*(undefined8 *)(param_2 + 0x18) - *(float *)(param_1 + 0x168),
          fVar8 = fVar8 * fVar8, fVar10 = fVar10 * fVar10, fVar11 = fVar11 * fVar11,
          auVar9._0_4_ = fVar8 + fVar10, auVar9._4_4_ = fVar11 + 0.0, auVar9._8_4_ = fVar8 + fVar10,
          auVar9._12_4_ = fVar11 + 0.0, auVar9 = NEON_ext(auVar9,auVar9,4,1),
          auVar9._0_4_ + auVar9._4_4_ <= 0.0001)) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x180);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar6 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x188);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x188) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00c88740:
  while ((lVar6 != 0 && (lVar4 != lVar6))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 400));
    do {
      lVar6 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x188);
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x188) = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar6 || *(long *)(param_1 + 0x188) != lVar7) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_00c88770;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x184) = lVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_00c88770:
  if (!bVar5) {
    lVar6 = lVar2;
    lVar7 = *(long *)(param_1 + 0x188);
    goto LAB_00c88740;
  }
  if (*(char *)(param_1 + 0x150) == '\0') {
    if (*param_2 != '\0') {
      *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x10);
      *(undefined1 *)(param_1 + 0x150) = 1;
    }
  }
  else if (*param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x150) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x10);
  }
  *(undefined2 *)(param_1 + 0x176) = 0x101;
  do {
    lVar4 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x188);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x188) = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar7 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x188);
    if (lVar7 != lVar4 || lVar2 != lVar6) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_00c887e8;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x184) = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_00c887e8:
  if (!bVar5) {
    do {
      lVar4 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x188);
      if (lVar4 != lVar7 || lVar6 != lVar2) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c8884c;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x184) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar5 = true;
joined_r0x00c8884c:
    if (!bVar5) {
      do {
        lVar7 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x188);
        if (lVar7 != lVar4 || lVar2 != lVar6) {
          bVar5 = false;
          ClearExclusiveLocal();
          lVar4 = lVar7;
          lVar6 = lVar2;
          goto joined_r0x00c8884c;
        }
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar4;
          *(long *)(param_1 + 0x184) = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar5 = true;
      lVar4 = lVar7;
      lVar6 = lVar2;
      goto joined_r0x00c8884c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 400));
  return;
}


