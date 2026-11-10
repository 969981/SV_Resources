/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ed76c; name: FUN_029ed76c
 */


void FUN_029ed76c(undefined8 *param_1,long param_2,ulong *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  
  plVar1 = (long *)(param_2 + 0x1e0);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_2 + 0x1e8);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0x1e8) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_029ed7a8:
  while ((lVar7 != 0 && (lVar5 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x1f0));
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_2 + 0x1e8);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_2 + 0x1e8) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || *(long *)(param_2 + 0x1e8) != lVar9) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_029ed7d8;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0x1e4) = lVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_029ed7d8:
  if (!bVar6) {
    lVar7 = lVar2;
    lVar9 = *(long *)(param_2 + 0x1e8);
    goto LAB_029ed7a8;
  }
  plVar8 = *(long **)(param_2 + 0x1a0);
  if (plVar8 != (long *)0x0) {
    uVar10 = *param_3;
    do {
      uVar11 = *(ulong *)(plVar8[10] + 0xb8);
      if (uVar11 != 0) {
        uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar12 < 2) {
          uVar13 = uVar11 - 1 & uVar10;
        }
        else {
          uVar13 = uVar10;
          if (uVar11 <= uVar10) {
            uVar13 = 0;
            if (uVar11 != 0) {
              uVar13 = uVar10 / uVar11;
            }
            uVar13 = uVar10 - uVar13 * uVar11;
          }
        }
        plVar14 = *(long **)(*(long *)(plVar8[10] + 0xb0) + uVar13 * 8);
        if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
          if (uVar12 < 2) {
            do {
              if (plVar14[1] == uVar10) {
                if (plVar14[2] == uVar10) goto LAB_029ed958;
              }
              else if ((plVar14[1] & uVar11 - 1) != uVar13) break;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              uVar12 = plVar14[1];
              if (uVar12 == uVar10) {
                if (plVar14[2] == uVar10) goto LAB_029ed958;
              }
              else {
                if (uVar11 <= uVar12) {
                  uVar4 = 0;
                  if (uVar11 != 0) {
                    uVar4 = uVar12 / uVar11;
                  }
                  uVar12 = uVar12 - uVar4 * uVar11;
                }
                if (uVar12 != uVar13) break;
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_0460ac90;
  param_1[1] = 0;
LAB_029ed8f4:
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_2 + 0x1e8);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_2 + 0x1e8) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar9 = *plVar1;
    lVar2 = *(long *)(param_2 + 0x1e8);
    if (lVar9 != lVar5 || lVar2 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_029ed930;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_2 + 0x1e4) = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_029ed930:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_2 + 0x1e8);
      if (lVar5 != lVar9 || lVar7 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x029ed9c0;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9;
        *(long *)(param_2 + 0x1e4) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
joined_r0x029ed9c0:
    if (!bVar6) {
      do {
        lVar9 = *plVar1;
        lVar2 = *(long *)(param_2 + 0x1e8);
        if (lVar9 != lVar5 || lVar2 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar9;
          lVar7 = lVar2;
          goto joined_r0x029ed9c0;
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5;
          *(long *)(param_2 + 0x1e4) = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar6 = true;
      lVar5 = lVar9;
      lVar7 = lVar2;
      goto joined_r0x029ed9c0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x1f0));
  return;
LAB_029ed958:
  FUN_029ed5dc(param_1,plVar14[6]);
  goto LAB_029ed8f4;
}


