/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0143e9a0; name: FUN_0143e9a0
 */


void FUN_0143e9a0(long param_1,ulong param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  bool bVar14;
  
  plVar13 = (long *)(param_1 + 46000);
  lVar11 = *plVar13;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar11) {
    lVar3 = nn::os::GetCurrentThread();
LAB_0143e9e4:
    if (*plVar13 == 0) goto code_r0x0143e9ec;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb3b8));
    do {
      if (*plVar13 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb3b8));
          while (*plVar13 == 0) {
            cVar1 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar14) {
              *plVar13 = lVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_0143e9f4;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar14) {
        *plVar13 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_0143e9f4:
    bVar14 = false;
    goto LAB_0143e9fc;
  }
  plVar13 = (long *)0x0;
  bVar14 = true;
LAB_0143e9fc:
  uVar4 = *(ulong *)(param_1 + 0xb3d0);
  if (uVar4 != 0) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar4 - 1 & param_2;
    }
    else {
      uVar6 = param_2;
      if (uVar4 <= param_2) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = param_2 / uVar4;
        }
        uVar6 = param_2 - uVar6 * uVar4;
      }
    }
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0xb3c8) + uVar6 * 8);
    if ((puVar7 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar7, plVar8 != (long *)0x0)) {
      if (1 < uVar5) {
        do {
          uVar5 = plVar8[1];
          if (uVar5 == param_2) {
            if (plVar8[2] == param_2) goto LAB_0143eb30;
          }
          else {
            if (uVar4 <= uVar5) {
              uVar10 = 0;
              if (uVar4 != 0) {
                uVar10 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar10 * uVar4;
            }
            if (uVar5 != uVar6) goto LAB_0143ea94;
          }
          plVar8 = (long *)*plVar8;
          plVar12 = (long *)0x0;
          plVar9 = (long *)0x0;
        } while (plVar8 != (long *)0x0);
        goto LAB_0143eb54;
      }
      do {
        if (plVar8[1] == param_2) {
          if (plVar8[2] == param_2) goto LAB_0143eb30;
        }
        else if ((plVar8[1] & uVar4 - 1) != uVar6) break;
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
LAB_0143ea94:
  plVar9 = (long *)0x0;
  plVar12 = (long *)0x0;
  goto LAB_0143eb54;
code_r0x0143e9ec:
  cVar1 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar14) {
    *plVar13 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_0143e9f4;
  goto LAB_0143e9e4;
LAB_0143eb30:
  plVar9 = plVar8;
  do {
    plVar9 = (long *)*plVar9;
    plVar12 = plVar8;
    if (plVar9 == (long *)0x0) break;
  } while (plVar9[2] == param_2);
LAB_0143eb54:
  do {
    if (plVar12 == plVar9) goto LAB_0143ec40;
    if (plVar12[3] == param_3) {
      uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
      uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
      uVar6 = plVar12[1];
      uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar5 < 2) {
        uVar6 = uVar4 - 1 & uVar6;
      }
      else if (uVar4 <= uVar6) {
        uVar10 = 0;
        if (uVar4 != 0) {
          uVar10 = uVar6 / uVar4;
        }
        uVar6 = uVar6 - uVar10 * uVar4;
      }
      plVar8 = *(long **)(*(long *)(param_1 + 0xb3c8) + uVar6 * 8);
      plVar9 = (long *)*plVar8;
      if (plVar9 != plVar12) {
        plVar8 = plVar9;
        for (plVar9 = (long *)*plVar9; plVar9 != plVar12; plVar9 = (long *)*plVar9) {
          plVar8 = plVar9;
        }
      }
      if (plVar8 == (long *)(param_1 + 0xb3e0)) {
LAB_0143ec5c:
        if (*plVar12 != 0) {
          uVar10 = *(ulong *)(*plVar12 + 8);
          if (uVar5 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar2 * uVar4;
          }
          if (uVar10 == uVar6) goto LAB_0143ebf8;
        }
        *(undefined8 *)(*(long *)(param_1 + 0xb3c8) + uVar6 * 8) = 0;
      }
      else {
        uVar10 = plVar8[1];
        if (uVar5 < 2) {
          uVar10 = uVar10 & uVar4 - 1;
        }
        else if (uVar4 <= uVar10) {
          uVar2 = 0;
          if (uVar4 != 0) {
            uVar2 = uVar10 / uVar4;
          }
          uVar10 = uVar10 - uVar2 * uVar4;
        }
        if (uVar10 != uVar6) goto LAB_0143ec5c;
      }
LAB_0143ebf8:
      if (*plVar12 != 0) {
        uVar10 = *(ulong *)(*plVar12 + 8);
        if (uVar5 < 2) {
          uVar10 = uVar10 & uVar4 - 1;
        }
        else if (uVar4 <= uVar10) {
          uVar5 = 0;
          if (uVar4 != 0) {
            uVar5 = uVar10 / uVar4;
          }
          uVar10 = uVar10 - uVar5 * uVar4;
        }
        if (uVar10 != uVar6) {
          *(long **)(*(long *)(param_1 + 0xb3c8) + uVar10 * 8) = plVar8;
        }
      }
      *plVar8 = *plVar12;
      *plVar12 = 0;
      *(long *)(param_1 + 0xb3f0) = *(long *)(param_1 + 0xb3f0) + -1;
      if (plVar12 != (long *)0x0) {
        plVar8 = *(long **)(param_1 + 0xb3e8);
        uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,plVar12,0x20,8);
        }
        else {
          FUN_00c48fe8(plVar8,plVar12,0x20,8);
        }
      }
LAB_0143ec40:
      if (bVar14) {
        return;
      }
      *plVar13 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
      return;
    }
    plVar12 = (long *)*plVar12;
  } while( true );
}


