/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a337c; name: FUN_028a337c
 */


void FUN_028a337c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_48;
  
  plVar1 = param_1 + 2;
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && param_1[3] == 0) {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar5;
      param_1[3] = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_028a33bc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 4));
  do {
    if (*plVar1 != 0 || param_1[3] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 4));
        while (*plVar1 == 0 && param_1[3] == 0) {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar5;
            param_1[3] = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_028a33bc;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar5;
      param_1[3] = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_028a33bc:
  param_1[0x22] = param_1[0x21];
  param_1[0x30] = param_1[0x2f];
  param_1[0x3e] = param_1[0x3d];
  param_1[0x29] = param_1[0x28];
  param_1[0x37] = param_1[0x36];
  param_1[0x45] = param_1[0x44];
  param_1[0x4c] = param_1[0x4b];
  param_1[0x53] = param_1[0x52];
  lVar5 = param_1[7];
  if (param_1[8] != lVar5) {
    uVar6 = param_1[0xe];
    plVar11 = (long *)(lVar5 + (uVar6 >> 6 & 0x3fffffffffffff8));
    plVar12 = (long *)(*plVar11 + (uVar6 & 0x1ff) * 8);
    plVar2 = (long *)(*(long *)(lVar5 + (param_1[0xf] + uVar6 >> 6 & 0x3fffffffffffff8)) +
                     (param_1[0xf] + uVar6 & 0x1ff) * 8);
    if (plVar2 != plVar12) {
      do {
        lVar9 = *plVar12;
        lVar5 = 0;
        if (*(ulong *)(lVar9 + 8) <= (ulong)param_1[0x7d]) {
          lVar5 = param_1[0x7d] - *(ulong *)(lVar9 + 8);
        }
        param_1[0x7d] = lVar5;
        local_48 = *(undefined8 *)(lVar9 + 0x20);
        FUN_00d044f4(param_1 + 0x14,&local_48);
        lVar5 = *(long *)(lVar9 + 0x10) * 8 + 0x50;
        FUN_00d0441c(lVar9);
        plVar10 = (long *)*param_1;
        uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar9,lVar5,8);
        }
        else {
          FUN_00c48fe8(plVar10,lVar9,lVar5,8);
        }
        plVar12 = plVar12 + 1;
        if ((long)plVar12 - *plVar11 == 0x1000) {
          plVar11 = plVar11 + 1;
          plVar12 = (long *)*plVar11;
        }
      } while (plVar2 != plVar12);
    }
  }
  FUN_028a47dc(param_1 + 6);
  param_1[0x7d] = 0;
  do {
    lVar5 = *plVar1;
    lVar9 = param_1[3];
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar5;
      param_1[3] = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar7 = *plVar1;
    lVar3 = param_1[3];
    if (lVar7 != lVar5 || lVar3 != lVar9) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_028a3598;
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x14) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar8 = true;
LAB_028a3598:
  if (!bVar8) {
    do {
      lVar5 = *plVar1;
      lVar9 = param_1[3];
      if (lVar5 != lVar7 || lVar9 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x028a35f0;
      }
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x14) = lVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar8 = true;
joined_r0x028a35f0:
    if (!bVar8) {
      do {
        lVar7 = *plVar1;
        lVar3 = param_1[3];
        if (lVar7 != lVar5 || lVar3 != lVar9) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar5 = lVar7;
          lVar9 = lVar3;
          goto joined_r0x028a35f0;
        }
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = 0;
          *(long *)((long)param_1 + 0x14) = lVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar8 = true;
      lVar5 = lVar7;
      lVar9 = lVar3;
      goto joined_r0x028a35f0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 4));
  return;
}


