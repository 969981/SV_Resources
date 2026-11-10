/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ff5bc4; name: FUN_00ff5bc4
 */


undefined1  [16] FUN_00ff5bc4(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_3 == 0xffffffff) {
    auVar13 = FUN_00ff699c(param_1,param_2);
    uVar9 = auVar13._0_8_ >> 0x20;
    uVar10 = auVar13._0_8_ & 0xffffff00;
    goto LAB_00ff5d04;
  }
  uVar9 = (ulong)param_3;
  plVar1 = (long *)(param_1 + 0x30);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x38);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x38) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00ff5c08:
  while ((lVar7 != 0 && (lVar4 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x40));
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x38);
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x38) = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || *(long *)(param_1 + 0x38) != lVar8) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_00ff5c38;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x34) = lVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_00ff5c38:
  if (!bVar5) {
    lVar7 = lVar2;
    lVar8 = *(long *)(param_1 + 0x38);
    goto LAB_00ff5c08;
  }
  if ((ulong)(long)(int)param_3 <
      (ulong)((*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 3) * 0x6db6db6db6db6db7)) {
    lVar8 = *(long *)(param_1 + 0x50) + (long)(int)param_3 * 0x38;
    lVar7 = *(long *)(lVar8 + 8);
    lVar4 = lVar7;
    if ((lVar8 != lVar7) && (*(long *)(lVar7 + 0x10) != *param_2)) {
      do {
        lVar4 = *(long *)(lVar4 + 8);
        if (lVar8 == lVar4) goto LAB_00ff5cac;
      } while (*(long *)(lVar4 + 0x10) != *param_2);
    }
    if (lVar8 == lVar4) goto LAB_00ff5cac;
    if (lVar7 == lVar4) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
      for (lVar7 = *(long *)(lVar7 + 8); lVar7 != lVar4; lVar7 = *(long *)(lVar7 + 8)) {
        uVar6 = uVar6 + 1;
      }
      if ((int)uVar6 < 0) goto LAB_00ff5cac;
    }
    uVar10 = (ulong)uVar6 << 0x20 | 1;
    uVar11 = 1;
  }
  else {
LAB_00ff5cac:
    uVar10 = 0;
    uVar9 = 0;
    uVar11 = 0;
  }
  do {
    auVar13._8_8_ = uVar10;
    auVar13._0_8_ = uVar11;
    lVar4 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x38);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x38) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar8 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x38);
    if (lVar8 != lVar4 || lVar2 != lVar7) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_00ff5cf4;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x34) = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_00ff5cf4:
  if (!bVar5) {
    do {
      lVar4 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x38);
      if (lVar4 != lVar8 || lVar7 != lVar2) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto joined_r0x00ff5dd0;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x34) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar5 = true;
joined_r0x00ff5dd0:
    if (!bVar5) {
      do {
        lVar8 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x38);
        if (lVar8 != lVar4 || lVar2 != lVar7) {
          bVar5 = false;
          ClearExclusiveLocal();
          lVar4 = lVar8;
          lVar7 = lVar2;
          goto joined_r0x00ff5dd0;
        }
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar4;
          *(long *)(param_1 + 0x34) = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar5 = true;
      lVar4 = lVar8;
      lVar7 = lVar2;
      goto joined_r0x00ff5dd0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x40));
  uVar10 = 0;
LAB_00ff5d04:
  auVar12._0_8_ = uVar10 | uVar9 << 0x20 | auVar13._0_8_ & 0xff;
  auVar12._8_8_ = auVar13._8_8_;
  return auVar12;
}


