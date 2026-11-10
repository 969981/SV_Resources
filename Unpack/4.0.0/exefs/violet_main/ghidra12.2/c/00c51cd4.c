/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c51cd4; name: FUN_00c51cd4
 */


void FUN_00c51cd4(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  
  uVar1 = param_2 & 0xffffffff;
  cVar4 = (char)*param_3;
  if (cVar4 == '\0' || (char)param_1[uVar1 * 2 + 0x7d] == '\0') {
    if ((char)param_1[uVar1 * 2 + 0x7d] == '\0' && cVar4 == '\0') {
      return;
    }
    lVar5 = param_3[1];
    param_1[uVar1 * 2 + 0x7d] = *param_3;
    param_1[uVar1 * 2 + 0x7e] = lVar5;
    if (cVar4 == '\0') {
      return;
    }
  }
  else {
    if (param_3[1] == param_1[(param_2 & 0xffffffff) * 2 + 0x7e]) {
      return;
    }
    lVar5 = param_3[1];
    param_1[uVar1 * 2 + 0x7d] = *param_3;
    param_1[uVar1 * 2 + 0x7e] = lVar5;
  }
  plVar10 = *(long **)(*param_1 + 0x6260);
  plVar2 = plVar10 + 8;
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar2;
    lVar8 = plVar10[9];
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar7;
      plVar10[9] = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    while ((lVar7 != 0 && (lVar5 != lVar7))) {
      nn::os::WaitLightEvent((LightEventType *)(plVar10 + 10));
      do {
        lVar7 = *plVar2;
        lVar8 = plVar10[9];
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar7;
          plVar10[9] = lVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    do {
      lVar3 = *plVar2;
      if (lVar3 != lVar7 || plVar10[9] != lVar8) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_00c51d90;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar7;
        *(long *)((long)plVar10 + 0x44) = lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
LAB_00c51d90:
    lVar7 = lVar3;
    lVar8 = plVar10[9];
  } while (!bVar6);
  if ((char)*param_3 != '\0') {
    if ((ulong)param_3[1] < (ulong)(plVar10[1] - *plVar10 >> 5)) {
      uVar9 = *(undefined8 *)(*plVar10 + param_3[1] * 0x20);
      goto LAB_00c51db8;
    }
  }
  uVar9 = 0;
LAB_00c51db8:
  do {
    lVar5 = *plVar2;
    lVar7 = plVar10[9];
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar5;
      plVar10[9] = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar8 = *plVar2;
    lVar3 = plVar10[9];
    if (lVar8 != lVar5 || lVar3 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00c51df4;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar5;
      *(long *)((long)plVar10 + 0x44) = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_00c51df4:
  if (!bVar6) {
    do {
      lVar5 = *plVar2;
      lVar7 = plVar10[9];
      if (lVar5 != lVar8 || lVar7 != lVar3) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c51e9c;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar8;
        *(long *)((long)plVar10 + 0x44) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
joined_r0x00c51e9c:
    if (!bVar6) {
      do {
        lVar8 = *plVar2;
        lVar3 = plVar10[9];
        if (lVar8 != lVar5 || lVar3 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar8;
          lVar7 = lVar3;
          goto joined_r0x00c51e9c;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar5;
          *(long *)((long)plVar10 + 0x44) = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = true;
      lVar5 = lVar8;
      lVar7 = lVar3;
      goto joined_r0x00c51e9c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(plVar10 + 10));
                    /* WARNING: Could not recover jumptable at 0x00c51e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047e1ef0)(param_1[5],uVar9);
  return;
}


