/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d4e220; name: FUN_00d4e220
 */


ulong FUN_00d4e220(long param_1,ulong *param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  
  plVar1 = (long *)(param_1 + 0xd70);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_1 + 0xd78);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0xd78) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00d4e25c:
  while ((lVar6 != 0 && (lVar4 != lVar6))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd80));
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0xd78);
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0xd78) = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar6 || *(long *)(param_1 + 0xd78) != lVar8) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_00d4e28c;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0xd74) = lVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_00d4e28c:
  if (!bVar5) {
    lVar6 = lVar2;
    lVar8 = *(long *)(param_1 + 0xd78);
    goto LAB_00d4e25c;
  }
  if ((param_3 < 0x20) && (uVar9 = *(ulong *)(param_1 + param_3 * 0x68 + 0x78), uVar9 != 0)) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar7 = *param_2;
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & uVar7;
    }
    else if (uVar7 < uVar9) {
      uVar11 = uVar7;
    }
    else {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar7 / uVar9;
      }
      uVar11 = uVar7 - uVar11 * uVar9;
    }
    plVar12 = *(long **)(*(long *)(param_1 + param_3 * 0x68 + 0x70) + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar7) {
            if (plVar12[2] == uVar7) goto LAB_00d4e3bc;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) goto LAB_00d4e428;
          plVar12 = (long *)*plVar12;
          uVar10 = 0;
          uVar13 = 0;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == uVar7) {
            if (plVar12[2] == uVar7) goto LAB_00d4e3bc;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar13 = 0;
              if (uVar9 != 0) {
                uVar13 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar13 * uVar9;
            }
            if (uVar10 != uVar11) goto LAB_00d4e428;
          }
          plVar12 = (long *)*plVar12;
          uVar10 = 0;
          uVar13 = 0;
        } while (plVar12 != (long *)0x0);
      }
      goto LAB_00d4e3c8;
    }
  }
LAB_00d4e428:
  uVar10 = 0;
  uVar13 = 0;
LAB_00d4e3c8:
  do {
    lVar4 = *plVar1;
    lVar6 = *(long *)(param_1 + 0xd78);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0xd78) = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar8 = *plVar1;
    lVar2 = *(long *)(param_1 + 0xd78);
    if (lVar8 != lVar4 || lVar2 != lVar6) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_00d4e404;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0xd74) = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_00d4e404:
  if (!bVar5) {
    do {
      lVar4 = *plVar1;
      lVar6 = *(long *)(param_1 + 0xd78);
      if (lVar4 != lVar8 || lVar6 != lVar2) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d4e47c;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0xd74) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar5 = true;
joined_r0x00d4e47c:
    if (!bVar5) {
      do {
        lVar8 = *plVar1;
        lVar2 = *(long *)(param_1 + 0xd78);
        if (lVar8 != lVar4 || lVar2 != lVar6) {
          bVar5 = false;
          ClearExclusiveLocal();
          lVar4 = lVar8;
          lVar6 = lVar2;
          goto joined_r0x00d4e47c;
        }
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar4;
          *(long *)(param_1 + 0xd74) = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar5 = true;
      lVar4 = lVar8;
      lVar6 = lVar2;
      goto joined_r0x00d4e47c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xd80));
  return uVar13 | uVar10;
LAB_00d4e3bc:
  uVar13 = (ulong)*(uint *)(plVar12 + 6) << 0x20;
  uVar10 = 1;
  goto LAB_00d4e3c8;
}


