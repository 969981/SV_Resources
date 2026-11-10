/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f77b58; name: FUN_00f77b58
 */


void FUN_00f77b58(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *local_78;
  long local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  undefined4 local_50;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  
  local_78 = (long *)*param_2;
  if (local_78 == (long *)0x0) {
    return;
  }
  if (*(char *)local_78[7] == '\0') {
    return;
  }
  uVar4 = param_2[1];
  uVar5 = *(ulong *)(param_1 + 0xa8);
  if (uVar5 != 0) {
    uVar7 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar5 - 1 & uVar4;
    }
    else {
      uVar8 = uVar4;
      if (uVar5 <= uVar4) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar4 / uVar5;
        }
        uVar8 = uVar4 - uVar8 * uVar5;
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0xa0) + uVar8 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar10[1] == uVar4) {
            if (plVar10[2] == uVar4) goto LAB_00f77c80;
          }
          else if ((plVar10[1] & uVar5 - 1) != uVar8) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar10[1];
          if (uVar7 == uVar4) {
            if (plVar10[2] == uVar4) goto LAB_00f77c80;
          }
          else {
            if (uVar5 <= uVar7) {
              uVar3 = 0;
              if (uVar5 != 0) {
                uVar3 = uVar7 / uVar5;
              }
              uVar7 = uVar7 - uVar3 * uVar5;
            }
            if (uVar7 != uVar8) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  goto LAB_00f77c88;
LAB_00f77e9c:
  lVar6 = plVar10[3];
  lVar9 = plVar10[4];
  (**(code **)(*local_78 + 0x18))();
  local_70 = param_2[1];
  lStack_68 = param_2[2];
  local_60 = param_2[3];
  local_58 = (long *)param_2[4];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  local_50 = (undefined4)param_2[5];
  local_48 = lVar6;
  lStack_40 = lVar9;
  goto LAB_00f77ee0;
LAB_00f77c80:
  lVar6 = plVar10[3];
  if (lVar6 != 0) {
    plVar10 = (long *)(lVar6 + 0x28);
    lVar9 = nn::os::GetCurrentThread();
    while (*plVar10 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar9;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') goto LAB_00f77da8;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x30));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x30));
          while (*plVar10 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar2) {
              *plVar10 = lVar9;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00f77da8;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00f77da8:
    *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x30));
    return;
  }
LAB_00f77c88:
  lVar6 = *(long *)(param_1 + 0x3b0);
  lVar9 = *(long *)(param_1 + 0x3b8);
  if (lVar6 == lVar9) {
LAB_00f77d64:
    if (lVar6 != lVar9) {
      *(long *)(lVar6 + 0x40) = *(long *)(lVar6 + 0x40) + 1;
      return;
    }
  }
  else {
    do {
      if (*(ulong *)(lVar6 + 8) == uVar4) goto LAB_00f77d64;
      lVar6 = lVar6 + 0x48;
    } while (lVar9 != lVar6);
  }
  uVar5 = *(ulong *)(param_1 + 0x2d0);
  if (uVar5 != 0) {
    uVar7 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar5 - 1 & uVar4;
    }
    else {
      uVar8 = uVar4;
      if (uVar5 <= uVar4) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar4 / uVar5;
        }
        uVar8 = uVar4 - uVar8 * uVar5;
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x2c8) + uVar8 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar10[1] == uVar4) {
            if (plVar10[2] == uVar4) goto LAB_00f77e9c;
          }
          else if ((plVar10[1] & uVar5 - 1) != uVar8) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar10[1];
          if (uVar7 == uVar4) {
            if (plVar10[2] == uVar4) goto LAB_00f77e9c;
          }
          else {
            if (uVar5 <= uVar7) {
              uVar3 = 0;
              if (uVar5 != 0) {
                uVar3 = uVar7 / uVar5;
              }
              uVar7 = uVar7 - uVar3 * uVar5;
            }
            if (uVar7 != uVar8) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  (**(code **)(*local_78 + 0x18))();
  local_70 = param_2[1];
  lStack_68 = param_2[2];
  local_60 = param_2[3];
  local_58 = (long *)param_2[4];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  local_50 = (undefined4)param_2[5];
  local_48 = 0;
  lStack_40 = 0;
LAB_00f77ee0:
  local_38 = 1;
  FUN_00f77f24(param_1 + 0x3b0,&local_78);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  return;
}


