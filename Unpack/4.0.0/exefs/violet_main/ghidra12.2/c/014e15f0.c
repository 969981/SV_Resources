/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e15f0; name: FUN_014e15f0
 */


void FUN_014e15f0(long param_1,ulong param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  bool bVar12;
  long *plVar13;
  undefined1 auStack_68 [24];
  
  plVar11 = (long *)(param_1 + 0xb360);
  lVar9 = *plVar11;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar9) {
    lVar4 = nn::os::GetCurrentThread();
LAB_014e1638:
    if (*plVar11 == 0) goto code_r0x014e1640;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb368));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb368));
          while (*plVar11 == 0) {
            cVar2 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar12) {
              *plVar11 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_014e1648;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_014e1648:
    bVar12 = false;
    goto LAB_014e1650;
  }
  plVar11 = (long *)0x0;
  bVar12 = true;
LAB_014e1650:
  uVar8 = *(ulong *)(param_1 + 0xb380);
  plVar1 = (long *)(param_1 + 0xb378);
  if (uVar8 != 0) {
    uVar5 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar7 = uVar8 - 1 & param_2;
    }
    else {
      uVar7 = param_2;
      if (uVar8 <= param_2) {
        uVar7 = 0;
        if (uVar8 != 0) {
          uVar7 = param_2 / uVar8;
        }
        uVar7 = param_2 - uVar7 * uVar8;
      }
    }
    plVar6 = *(long **)(*plVar1 + uVar7 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar6[1] == param_2) {
            plVar10 = plVar6;
            if (plVar6[2] == param_2) goto LAB_014e16d4;
          }
          else if ((plVar6[1] & uVar8 - 1) != uVar7) goto LAB_014e1950;
          plVar6 = (long *)*plVar6;
          plVar10 = (long *)0x0;
          plVar13 = (long *)0x0;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          plVar10 = plVar6;
          uVar5 = plVar10[1];
          if (uVar5 == param_2) {
            if (plVar10[2] == param_2) goto LAB_014e16d4;
          }
          else {
            if (uVar8 <= uVar5) {
              uVar3 = 0;
              if (uVar8 != 0) {
                uVar3 = uVar5 / uVar8;
              }
              uVar5 = uVar5 - uVar3 * uVar8;
            }
            if (uVar5 != uVar7) goto LAB_014e1950;
          }
          plVar6 = (long *)*plVar10;
          plVar10 = (long *)0x0;
          plVar13 = (long *)0x0;
        } while (plVar6 != (long *)0x0);
      }
      goto LAB_014e16f0;
    }
  }
LAB_014e1950:
  plVar10 = (long *)0x0;
  plVar13 = (long *)0x0;
  goto LAB_014e16f0;
code_r0x014e1640:
  cVar2 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar12) {
    *plVar11 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_014e1648;
  goto LAB_014e1638;
LAB_014e16d4:
  plVar13 = plVar10;
  do {
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) break;
  } while (plVar13[2] == param_2);
LAB_014e16f0:
  if (plVar10 != plVar13) {
    if (((plVar10[3] == 0) || (lVar4 = *(long *)(plVar10[3] + 0x10), lVar4 == 0)) ||
       (lVar4 + -0x28 == param_3)) {
      plVar10 = (long *)*plVar10;
      FUN_014e19a4(auStack_68,plVar1);
      FUN_00dfb8a4(auStack_68);
    }
    else {
      plVar10 = (long *)*plVar10;
    }
    if (plVar10 != plVar13) {
      if (((plVar10[3] == 0) || (lVar4 = *(long *)(plVar10[3] + 0x10), lVar4 == 0)) ||
         (lVar4 + -0x28 == param_3)) {
        plVar6 = (long *)*plVar10;
        FUN_014e19a4(auStack_68,plVar1,plVar10);
        FUN_00dfb8a4(auStack_68);
      }
      else {
        plVar6 = (long *)*plVar10;
      }
      if (plVar6 != plVar13) {
        if (((plVar6[3] == 0) || (lVar4 = *(long *)(plVar6[3] + 0x10), lVar4 == 0)) ||
           (lVar4 + -0x28 == param_3)) {
          plVar10 = (long *)*plVar6;
          FUN_014e19a4(auStack_68,plVar1,plVar6);
          FUN_00dfb8a4(auStack_68);
        }
        else {
          plVar10 = (long *)*plVar6;
        }
        if (plVar10 != plVar13) {
          if (((plVar10[3] == 0) || (lVar4 = *(long *)(plVar10[3] + 0x10), lVar4 == 0)) ||
             (lVar4 + -0x28 == param_3)) {
            plVar6 = (long *)*plVar10;
            FUN_014e19a4(auStack_68,plVar1,plVar10);
            FUN_00dfb8a4(auStack_68);
          }
          else {
            plVar6 = (long *)*plVar10;
          }
LAB_014e1878:
          do {
            if (plVar6 == plVar13) break;
            if (plVar6[3] != 0) {
              lVar9 = *(long *)(plVar6[3] + 0x10);
              lVar4 = 0;
              if (lVar9 != 0) {
                lVar4 = lVar9 + -0x28;
              }
              if (!(lVar9 == 0 || lVar4 == param_3)) {
                plVar6 = (long *)*plVar6;
                goto LAB_014e1878;
              }
            }
            plVar10 = (long *)*plVar6;
            FUN_014e19a4(auStack_68,plVar1,plVar6);
            FUN_00dfb8a4(auStack_68);
            plVar6 = plVar10;
          } while( true );
        }
      }
    }
  }
  if (!bVar12) {
    *plVar11 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
    return;
  }
  return;
}


