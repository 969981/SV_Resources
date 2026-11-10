/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c88490; name: FUN_00c88490
 */


void FUN_00c88490(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  uVar5 = param_2;
  if (1 < param_2) {
    uVar5 = 2;
  }
  if ((*(char *)(param_1 + 0x179) == '\0') || (*(char *)(param_1 + 0x17a) != '\0')) {
    if (1 < param_2) {
      uVar5 = 2;
      goto LAB_00c884d4;
    }
  }
  else if ((*(char *)(param_1 + 0x17b) != '\0') || (1 < param_2)) goto LAB_00c884d4;
  uVar8 = (ulong)uVar5;
  do {
    if (*(char *)(param_1 + uVar8 + 0x179) != '\0') {
      uVar5 = (uint)uVar8;
      break;
    }
    uVar5 = uVar5 + 1;
    bVar6 = uVar8 == 0;
    uVar8 = 1;
  } while (bVar6);
LAB_00c884d4:
  if (*(long *)(param_1 + 0x138) == (long)(int)uVar5) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x180);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x188);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x188) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    while ((lVar7 != 0 && (lVar4 != lVar7))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 400));
      do {
        lVar7 = *plVar1;
        lVar9 = *(long *)(param_1 + 0x188);
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar7;
          *(long *)(param_1 + 0x188) = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar7 || *(long *)(param_1 + 0x188) != lVar9) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_00c8857c;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x184) = lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
LAB_00c8857c:
    lVar7 = lVar2;
    lVar9 = *(long *)(param_1 + 0x188);
  } while (!bVar6);
  *(long *)(param_1 + 0x138) = (long)(int)uVar5;
  *(undefined2 *)(param_1 + 0x176) = 0x101;
  do {
    lVar4 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x188);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x188) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar9 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x188);
    if (lVar9 != lVar4 || lVar2 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00c885d8;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x184) = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_00c885d8:
  if (!bVar6) {
    do {
      lVar4 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x188);
      if (lVar4 != lVar9 || lVar7 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c8864c;
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
joined_r0x00c8864c:
    if (!bVar6) {
      do {
        lVar9 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x188);
        if (lVar9 != lVar4 || lVar2 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar4 = lVar9;
          lVar7 = lVar2;
          goto joined_r0x00c8864c;
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar4;
          *(long *)(param_1 + 0x184) = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar6 = true;
      lVar4 = lVar9;
      lVar7 = lVar2;
      goto joined_r0x00c8864c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 400));
  return;
}


