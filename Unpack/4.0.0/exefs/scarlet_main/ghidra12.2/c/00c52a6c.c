/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c52a6c; name: FUN_00c52a6c
 */


void FUN_00c52a6c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  cVar3 = (char)*param_2;
  if (cVar3 == '\0' || (char)param_1[0x72] == '\0') {
    if ((char)param_1[0x72] == '\0' && cVar3 == '\0') {
      return;
    }
    lVar4 = param_2[1];
    param_1[0x72] = *param_2;
    param_1[0x73] = lVar4;
    if (cVar3 == '\0') {
      return;
    }
  }
  else {
    if (param_2[1] == param_1[0x73]) {
      return;
    }
    lVar4 = param_2[1];
    param_1[0x72] = *param_2;
    param_1[0x73] = lVar4;
  }
  plVar9 = *(long **)(*param_1 + 0x61e0);
  plVar1 = plVar9 + 8;
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar6 = *plVar1;
    lVar7 = plVar9[9];
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      plVar9[9] = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00c52aec:
  while ((lVar6 != 0 && (lVar4 != lVar6))) {
    nn::os::WaitLightEvent((LightEventType *)(plVar9 + 10));
    do {
      lVar6 = *plVar1;
      lVar7 = plVar9[9];
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6;
        plVar9[9] = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar6 || plVar9[9] != lVar7) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_00c52b1c;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)((long)plVar9 + 0x44) = lVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_00c52b1c:
  if (!bVar5) {
    lVar6 = lVar2;
    lVar7 = plVar9[9];
    goto LAB_00c52aec;
  }
  if ((char)*param_2 != '\0') {
    if ((ulong)param_2[1] < (ulong)(plVar9[1] - *plVar9 >> 5)) {
      uVar8 = *(undefined8 *)(*plVar9 + param_2[1] * 0x20);
      goto LAB_00c52b54;
    }
  }
  uVar8 = 0;
LAB_00c52b54:
  do {
    lVar4 = *plVar1;
    lVar6 = plVar9[9];
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      plVar9[9] = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar7 = *plVar1;
    lVar2 = plVar9[9];
    if (lVar7 != lVar4 || lVar2 != lVar6) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_00c52b90;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)((long)plVar9 + 0x44) = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_00c52b90:
  if (!bVar5) {
    do {
      lVar4 = *plVar1;
      lVar6 = plVar9[9];
      if (lVar4 != lVar7 || lVar6 != lVar2) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c52c0c;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        *(long *)((long)plVar9 + 0x44) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar5 = true;
joined_r0x00c52c0c:
    if (!bVar5) {
      do {
        lVar7 = *plVar1;
        lVar2 = plVar9[9];
        if (lVar7 != lVar4 || lVar2 != lVar6) {
          bVar5 = false;
          ClearExclusiveLocal();
          lVar4 = lVar7;
          lVar6 = lVar2;
          goto joined_r0x00c52c0c;
        }
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar4;
          *(long *)((long)plVar9 + 0x44) = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar5 = true;
      lVar4 = lVar7;
      lVar6 = lVar2;
      goto joined_r0x00c52c0c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(plVar9 + 10));
                    /* WARNING: Could not recover jumptable at 0x00c52bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047e1ed8)(param_1[5],uVar8);
  return;
}


