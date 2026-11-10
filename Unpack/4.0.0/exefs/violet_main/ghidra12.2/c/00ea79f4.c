/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ea79f4; name: FUN_00ea79f4
 */


uint FUN_00ea79f4(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  plVar1 = (long *)(param_1 + 0x170);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x178);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x178) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00ea7a24:
  while ((lVar6 != 0 && (lVar4 != lVar6))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x178);
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x178) = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar6 || *(long *)(param_1 + 0x178) != lVar8) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_00ea7a54;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x174) = lVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_00ea7a54:
  if (!bVar5) {
    lVar6 = lVar2;
    lVar8 = *(long *)(param_1 + 0x178);
    goto LAB_00ea7a24;
  }
  uVar10 = 1;
  for (piVar7 = *(int **)(param_1 + 0x120); piVar7 != *(int **)(param_1 + 0x128);
      piVar7 = piVar7 + 3) {
    lVar4 = *(long *)(*(long *)(param_1 + 0xd0) + (long)*piVar7 * 8);
    if (lVar4 == 0) {
LAB_00ea7b20:
      uVar9 = 0;
    }
    else {
      for (lVar6 = *(long *)(lVar4 + 0x30); lVar6 != *(long *)(lVar4 + 0x38); lVar6 = lVar6 + 0x40)
      {
        if ((*(long *)(lVar6 + 8) == 0) || ((*(byte *)(*(long *)(lVar6 + 8) + 0x1e8) & 1) == 0))
        goto LAB_00ea7b20;
      }
      uVar9 = 1;
    }
    uVar10 = uVar10 & uVar9;
  }
  do {
    lVar4 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x178);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x178) = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar8 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x178);
    if (lVar8 != lVar4 || lVar2 != lVar6) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_00ea7b00;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x174) = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_00ea7b00:
  if (!bVar5) {
    do {
      lVar4 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x178);
      if (lVar4 != lVar8 || lVar6 != lVar2) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto joined_r0x00ea7b70;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x174) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar5 = true;
joined_r0x00ea7b70:
    if (!bVar5) {
      do {
        lVar8 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x178);
        if (lVar8 != lVar4 || lVar2 != lVar6) {
          bVar5 = false;
          ClearExclusiveLocal();
          lVar4 = lVar8;
          lVar6 = lVar2;
          goto joined_r0x00ea7b70;
        }
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar4;
          *(long *)(param_1 + 0x174) = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar5 = true;
      lVar4 = lVar8;
      lVar6 = lVar2;
      goto joined_r0x00ea7b70;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x180));
  return uVar10;
}


