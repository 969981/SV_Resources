/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216d0a0; name: FUN_0216d0a0
 */


void FUN_0216d0a0(ulong param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long in_x4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  
  uVar5 = *(ulong *)(in_x4 + 0x550);
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar5 - 1 & param_1;
    }
    else if (param_1 < uVar5) {
      uVar7 = param_1;
    }
    else {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = param_1 / uVar5;
      }
      uVar7 = param_1 - uVar7 * uVar5;
    }
    puVar9 = *(undefined8 **)(*(long *)(in_x4 + 0x548) + uVar7 * 8);
    if ((puVar9 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar9, plVar12 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar12[1] == param_1) {
            if (plVar12[2] == param_1) goto LAB_0216d13c;
          }
          else if ((plVar12[1] & uVar5 - 1) != uVar7) {
            return;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar12[1];
          if (uVar6 == param_1) {
            if (plVar12[2] == param_1) goto LAB_0216d13c;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar11 = 0;
              if (uVar5 != 0) {
                uVar11 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar11 * uVar5;
            }
            if (uVar6 != uVar7) {
              return;
            }
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  return;
LAB_0216d13c:
  plVar8 = (long *)(in_x4 + 0x5b0);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0216d158;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(in_x4 + 0x5b8));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(in_x4 + 0x5b8));
        while (*plVar8 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0216d158;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0216d158:
  uVar7 = *(ulong *)(in_x4 + 0x550);
  uVar5 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = plVar12[1];
  uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar5 < 2) {
    uVar6 = uVar7 - 1 & uVar6;
  }
  else if (uVar7 <= uVar6) {
    uVar11 = 0;
    if (uVar7 != 0) {
      uVar11 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar11 * uVar7;
  }
  plVar8 = *(long **)(*(long *)(in_x4 + 0x548) + uVar6 * 8);
  for (plVar10 = (long *)*plVar8; plVar10 != plVar12; plVar10 = (long *)*plVar10) {
    plVar8 = plVar10;
  }
  if (plVar8 != (long *)(in_x4 + 0x578)) {
    uVar11 = plVar8[1];
    if (uVar5 < 2) {
      uVar11 = uVar11 & uVar7 - 1;
    }
    else if (uVar7 <= uVar11) {
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar3 = uVar11 / uVar7;
      }
      uVar11 = uVar11 - uVar3 * uVar7;
    }
    if (uVar11 == uVar6) goto LAB_0216d21c;
  }
  if (*plVar12 != 0) {
    uVar11 = *(ulong *)(*plVar12 + 8);
    if (uVar5 < 2) {
      uVar11 = uVar11 & uVar7 - 1;
    }
    else if (uVar7 <= uVar11) {
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar3 = uVar11 / uVar7;
      }
      uVar11 = uVar11 - uVar3 * uVar7;
    }
    if (uVar11 == uVar6) goto LAB_0216d21c;
  }
  *(undefined8 *)(*(long *)(in_x4 + 0x548) + uVar6 * 8) = 0;
LAB_0216d21c:
  lVar4 = *plVar12;
  if (lVar4 != 0) {
    uVar11 = *(ulong *)(lVar4 + 8);
    if (uVar5 < 2) {
      uVar11 = uVar11 & uVar7 - 1;
    }
    else if (uVar7 <= uVar11) {
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar11 / uVar7;
      }
      uVar11 = uVar11 - uVar5 * uVar7;
    }
    if (uVar11 != uVar6) {
      *(long **)(*(long *)(in_x4 + 0x548) + uVar11 * 8) = plVar8;
      lVar4 = *plVar12;
    }
  }
  *plVar8 = lVar4;
  *plVar12 = 0;
  *(long *)(in_x4 + 0x5a0) = *(long *)(in_x4 + 0x5a0) + -1;
  lVar4 = plVar12[3];
  plVar12[3] = 0;
  if (lVar4 != 0) {
    FUN_011945a8(plVar12 + 4);
  }
  plVar8 = *(long **)(in_x4 + 0x580);
  uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
    (**(code **)(*plVar8 + 0x18))(plVar8,plVar12,0x38,8);
  }
  else {
    FUN_00c48fe8(plVar8,plVar12,0x38,8);
  }
  *(undefined8 *)(in_x4 + 0x5b0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(in_x4 + 0x5b8));
  return;
}


