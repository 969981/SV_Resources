/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01104ec4; name: FUN_01104ec4
 */


int FUN_01104ec4(int *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  
  plVar1 = (long *)(param_1 + 0x110);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x112) == 0) {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      param_1[0x112] = 0;
      param_1[0x113] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01104ef8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x114));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x112) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x114));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x112) == 0) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar6;
            param_1[0x112] = 0;
            param_1[0x113] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01104ef8;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      param_1[0x112] = 0;
      param_1[0x113] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01104ef8:
  lVar6 = *(long *)(param_1 + 0x104);
  if (lVar6 == 0) {
    iVar9 = param_1[2];
    param_1[2] = iVar9 + 1;
  }
  else {
    iVar9 = param_1[lVar6 + 3];
    *(long *)(param_1 + 0x104) = lVar6 + -1;
  }
  uVar8 = (ulong)((uint)(iVar9 - *param_1) >> 3) & 0x1ffffff8;
  *(ulong *)((long)param_1 + uVar8 + 0x418) =
       1L << ((ulong)(uint)(iVar9 - *param_1) & 0x3f) | *(ulong *)((long)param_1 + uVar8 + 0x418);
  param_1[3] = param_1[3] + 1;
  do {
    lVar6 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x112);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x112) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x112);
    if (lVar2 != lVar6 || lVar3 != lVar4) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_01104fcc;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x111) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_01104fcc:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x112);
      if (lVar6 != lVar2 || lVar4 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x01105028;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x111) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
joined_r0x01105028:
    if (!bVar7) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x112);
        if (lVar2 != lVar6 || lVar3 != lVar4) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x01105028;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x111) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
      lVar6 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x01105028;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x114));
  return iVar9;
}


