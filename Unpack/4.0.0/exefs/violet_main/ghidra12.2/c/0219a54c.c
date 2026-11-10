/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0219a54c; name: FUN_0219a54c
 */


void FUN_0219a54c(long param_1,ulong *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long local_48;
  
  plVar1 = (long *)(param_1 + 0xb200);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0xb208);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0xb208) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0219a59c:
  while ((lVar7 != 0 && (lVar5 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb210));
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0xb208);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0xb208) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || *(long *)(param_1 + 0xb208) != lVar9) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_0219a5cc;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0xb204) = lVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_0219a5cc:
  if (!bVar6) {
    lVar7 = lVar2;
    lVar9 = *(long *)(param_1 + 0xb208);
    goto LAB_0219a59c;
  }
  uVar12 = *(ulong *)(param_1 + 0xb260);
  if (uVar12 != 0) {
    uVar10 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar8 = *param_2;
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar13 = uVar12 - 1 & uVar8;
    }
    else if (uVar8 < uVar12) {
      uVar13 = uVar8;
    }
    else {
      uVar13 = 0;
      if (uVar12 != 0) {
        uVar13 = uVar8 / uVar12;
      }
      uVar13 = uVar8 - uVar13 * uVar12;
    }
    plVar11 = *(long **)(*(long *)(param_1 + 0xb258) + uVar13 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (1 < uVar10) {
        do {
          uVar10 = plVar11[1];
          if (uVar10 == uVar8) {
            if (plVar11[2] == uVar8) goto LAB_0219a6f4;
          }
          else {
            if (uVar12 <= uVar10) {
              uVar4 = 0;
              if (uVar12 != 0) {
                uVar4 = uVar10 / uVar12;
              }
              uVar10 = uVar10 - uVar4 * uVar12;
            }
            if (uVar10 != uVar13) goto LAB_0219a67c;
          }
          plVar11 = (long *)*plVar11;
          plVar15 = (long *)0x0;
          plVar14 = (long *)0x0;
        } while (plVar11 != (long *)0x0);
        goto LAB_0219a710;
      }
      do {
        if (plVar11[1] == uVar8) {
          if (plVar11[2] == uVar8) goto LAB_0219a6f4;
        }
        else if ((plVar11[1] & uVar12 - 1) != uVar13) break;
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
LAB_0219a67c:
  plVar14 = (long *)0x0;
  plVar15 = (long *)0x0;
  goto LAB_0219a710;
LAB_0219a6f4:
  plVar14 = plVar11;
  do {
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) break;
  } while (plVar14[2] == uVar8);
  plVar15 = plVar11;
LAB_0219a710:
  if (plVar15 != plVar14) {
    do {
      local_48 = plVar15[3];
      (*(code *)*param_3)(param_3 + 4,&local_48);
      plVar15 = (long *)*plVar15;
    } while (plVar15 != plVar14);
  }
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_1 + 0xb208);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0xb208) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar9 = *plVar1;
    lVar2 = *(long *)(param_1 + 0xb208);
    if (lVar9 != lVar5 || lVar2 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_0219a77c;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0xb204) = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_0219a77c:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_1 + 0xb208);
      if (lVar5 != lVar9 || lVar7 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x0219a7d0;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0xb204) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
joined_r0x0219a7d0:
    if (!bVar6) {
      do {
        lVar9 = *plVar1;
        lVar2 = *(long *)(param_1 + 0xb208);
        if (lVar9 != lVar5 || lVar2 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar9;
          lVar7 = lVar2;
          goto joined_r0x0219a7d0;
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5;
          *(long *)(param_1 + 0xb204) = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar6 = true;
      lVar5 = lVar9;
      lVar7 = lVar2;
      goto joined_r0x0219a7d0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xb210));
  return;
}


