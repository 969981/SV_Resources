/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dd1c54; name: FUN_00dd1c54
 */


void FUN_00dd1c54(long param_1,char *param_2,char *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  
  if ((*param_2 == '\0') || (*param_3 == '\0')) {
    return;
  }
  plVar10 = *(long **)(param_1 + 0x60a0);
  plVar1 = plVar10 + 8;
  lVar8 = *(long *)(param_3 + 8);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar6 = *plVar1;
    lVar7 = plVar10[9];
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      plVar10[9] = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00dd1ca0:
  while ((lVar6 != 0 && (lVar4 != lVar6))) {
    nn::os::WaitLightEvent((LightEventType *)(plVar10 + 10));
    do {
      lVar6 = *plVar1;
      lVar7 = plVar10[9];
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6;
        plVar10[9] = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar6 || plVar10[9] != lVar7) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_00dd1cd0;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)((long)plVar10 + 0x44) = lVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_00dd1cd0:
  if (!bVar5) {
    lVar6 = lVar2;
    lVar7 = plVar10[9];
    goto LAB_00dd1ca0;
  }
  if (*param_2 != '\0') {
    if (*(ulong *)(param_2 + 8) < (ulong)(plVar10[1] - *plVar10 >> 5)) {
      uVar9 = *(undefined8 *)(*plVar10 + *(ulong *)(param_2 + 8) * 0x20);
      goto LAB_00dd1d08;
    }
  }
  uVar9 = 0;
LAB_00dd1d08:
  do {
    lVar4 = *plVar1;
    lVar6 = plVar10[9];
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      plVar10[9] = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar7 = *plVar1;
    lVar2 = plVar10[9];
    if (lVar7 != lVar4 || lVar2 != lVar6) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_00dd1d44;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)((long)plVar10 + 0x44) = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_00dd1d44:
  if (!bVar5) {
    do {
      lVar4 = *plVar1;
      lVar6 = plVar10[9];
      if (lVar4 != lVar7 || lVar6 != lVar2) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto joined_r0x00dd1dcc;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        *(long *)((long)plVar10 + 0x44) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar5 = true;
joined_r0x00dd1dcc:
    if (!bVar5) {
      do {
        lVar7 = *plVar1;
        lVar2 = plVar10[9];
        if (lVar7 != lVar4 || lVar2 != lVar6) {
          bVar5 = false;
          ClearExclusiveLocal();
          lVar4 = lVar7;
          lVar6 = lVar2;
          goto joined_r0x00dd1dcc;
        }
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar4;
          *(long *)((long)plVar10 + 0x44) = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar5 = true;
      lVar4 = lVar7;
      lVar6 = lVar2;
      goto joined_r0x00dd1dcc;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(plVar10 + 10));
                    /* WARNING: Could not recover jumptable at 0x00dd1d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047e1978)
            (uVar9,lVar8,*(byte *)(lVar8 + 0x40) ^ 1,*(undefined1 *)(lVar8 + 0x41));
  return;
}


