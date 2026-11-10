/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0189bc2c; name: FUN_0189bc2c
 */


void FUN_0189bc2c(long param_1,undefined4 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  char cVar7;
  long lVar8;
  bool bVar9;
  
  plVar1 = (long *)(param_1 + 0x1b0);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x1b8) == 0) {
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_0189bc6c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x1b8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x1b8) == 0) {
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar8;
            *(undefined8 *)(param_1 + 0x1b8) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_0189bc6c;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_0189bc6c:
  plVar4 = *(long **)(param_1 + 0xf0);
  plVar5 = *(long **)(param_1 + 0xf8);
  if (plVar4 != plVar5) {
    if (plVar4[2] == *param_3) {
      *(undefined4 *)(*(long *)(*plVar4 + 0x88) + (ulong)*(uint *)(plVar4 + 1) * 0x108 + 0x44) =
           param_2;
      *(undefined1 *)(param_1 + 0x1a8) = 1;
    }
    if (plVar4 + 7 != plVar5) {
      if (plVar4[9] == *param_3) {
        *(undefined4 *)(*(long *)(plVar4[7] + 0x88) + (ulong)*(uint *)(plVar4 + 8) * 0x108 + 0x44) =
             param_2;
        *(undefined1 *)(param_1 + 0x1a8) = 1;
      }
      for (plVar4 = plVar4 + 0xe; plVar4 != plVar5; plVar4 = plVar4 + 7) {
        if (plVar4[2] == *param_3) {
          *(undefined4 *)(*(long *)(*plVar4 + 0x88) + (ulong)*(uint *)(plVar4 + 1) * 0x108 + 0x44) =
               param_2;
          *(undefined1 *)(param_1 + 0x1a8) = 1;
        }
      }
    }
  }
  do {
    lVar8 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x1b8);
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x1b8) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x1b8);
    if (lVar2 != lVar8 || lVar3 != lVar6) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_0189bdb8;
    }
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x1b4) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar9 = true;
LAB_0189bdb8:
  if (!bVar9) {
    do {
      lVar8 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x1b8);
      if (lVar8 != lVar2 || lVar6 != lVar3) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x0189be00;
      }
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x1b4) = lVar3;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar9 = true;
joined_r0x0189be00:
    if (!bVar9) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x1b8);
        if (lVar2 != lVar8 || lVar3 != lVar6) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar8 = lVar2;
          lVar6 = lVar3;
          goto joined_r0x0189be00;
        }
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x1b4) = lVar6;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar9 = true;
      lVar8 = lVar2;
      lVar6 = lVar3;
      goto joined_r0x0189be00;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c0));
  return;
}


