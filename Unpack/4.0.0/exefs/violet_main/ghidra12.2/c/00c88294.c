/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c88294; name: FUN_00c88294
 */


void FUN_00c88294(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  uVar7 = param_2;
  if (1 < param_2) {
    uVar7 = 2;
  }
  if ((0 < (int)uVar7) && (param_2 = uVar7, *(char *)(param_1 + (ulong)uVar7 + 0x179) == '\0')) {
    uVar4 = uVar7 - 1;
    if (uVar4 == 0 || (int)uVar7 < 1) {
      param_2 = 0;
    }
    else {
      param_2 = 0;
      if (*(char *)(param_1 + (ulong)uVar4 + 0x179) != '\0') {
        param_2 = uVar4;
      }
    }
  }
  if (*(long *)(param_1 + 0x130) == (long)(int)param_2) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x180);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x188);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x188) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    while ((lVar8 != 0 && (lVar5 != lVar8))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 400));
      do {
        lVar8 = *plVar1;
        lVar9 = *(long *)(param_1 + 0x188);
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar8;
          *(long *)(param_1 + 0x188) = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar8 || *(long *)(param_1 + 0x188) != lVar9) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_00c88374;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x184) = lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
LAB_00c88374:
    lVar8 = lVar2;
    lVar9 = *(long *)(param_1 + 0x188);
  } while (!bVar6);
  *(long *)(param_1 + 0x130) = (long)(int)param_2;
  *(undefined2 *)(param_1 + 0x176) = 0x101;
  do {
    lVar5 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x188);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x188) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar9 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x188);
    if (lVar9 != lVar5 || lVar2 != lVar8) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00c883c0;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x184) = lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_00c883c0:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x188);
      if (lVar5 != lVar9 || lVar8 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c88434;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x184) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
joined_r0x00c88434:
    if (!bVar6) {
      do {
        lVar9 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x188);
        if (lVar9 != lVar5 || lVar2 != lVar8) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar9;
          lVar8 = lVar2;
          goto joined_r0x00c88434;
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5;
          *(long *)(param_1 + 0x184) = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar6 = true;
      lVar5 = lVar9;
      lVar8 = lVar2;
      goto joined_r0x00c88434;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 400));
  return;
}


