/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dd1a74; name: FUN_00dd1a74
 */


undefined8 FUN_00dd1a74(long param_1,char *param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  if (*param_2 == '\0') {
    return 0;
  }
  plVar9 = *(long **)(param_1 + 0x60a0);
  plVar1 = plVar9 + 8;
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar8 = plVar9[9];
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      plVar9[9] = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00dd1ac0:
  while ((lVar7 != 0 && (lVar5 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(plVar9 + 10));
    do {
      lVar7 = *plVar1;
      lVar8 = plVar9[9];
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        plVar9[9] = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || plVar9[9] != lVar8) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00dd1af0;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)((long)plVar9 + 0x44) = lVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_00dd1af0:
  if (!bVar6) {
    lVar7 = lVar2;
    lVar8 = plVar9[9];
    goto LAB_00dd1ac0;
  }
  if (*param_2 != '\0') {
    if (*(ulong *)(param_2 + 8) < (ulong)(plVar9[1] - *plVar9 >> 5)) {
      lVar5 = *(long *)(*plVar9 + *(ulong *)(param_2 + 8) * 0x20);
      goto LAB_00dd1b28;
    }
  }
  lVar5 = 0;
LAB_00dd1b28:
  do {
    lVar7 = *plVar1;
    lVar8 = plVar9[9];
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      plVar9[9] = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = plVar9[9];
    if (lVar2 != lVar7 || lVar3 != lVar8) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00dd1b64;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)((long)plVar9 + 0x44) = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_00dd1b64:
  if (!bVar6) {
    do {
      lVar7 = *plVar1;
      lVar8 = plVar9[9];
      if (lVar7 != lVar2 || lVar8 != lVar3) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x00dd1bf4;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar2;
        *(long *)((long)plVar9 + 0x44) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
joined_r0x00dd1bf4:
    if (!bVar6) {
      do {
        lVar2 = *plVar1;
        lVar3 = plVar9[9];
        if (lVar2 != lVar7 || lVar3 != lVar8) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar7 = lVar2;
          lVar8 = lVar3;
          goto joined_r0x00dd1bf4;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar7;
          *(long *)((long)plVar9 + 0x44) = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = true;
      lVar7 = lVar2;
      lVar8 = lVar3;
      goto joined_r0x00dd1bf4;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(plVar9 + 10));
  if (lVar5 == 0) {
    return 0;
  }
  (**(code **)PTR_DAT_047e1980)(lVar5,param_3,param_4);
  return 1;
}


