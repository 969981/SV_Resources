/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02004df4; name: FUN_02004df4
 */


void FUN_02004df4(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined4 local_b8;
  undefined4 uStack_b4;
  long *local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *plStack_90;
  undefined4 local_88;
  long *local_80;
  ulong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *local_60;
  undefined4 local_58;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x60));
  FUN_0105016c(&local_80,param_2);
  plVar7 = local_80;
  plVar10 = (long *)(param_1 + 0x28);
  lVar8 = *plVar10;
  lVar9 = *(long *)(param_1 + 0x30);
  local_b0 = local_80;
  local_b8 = param_3;
  uStack_b4 = param_4;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))(local_80);
  }
  plVar1 = local_60;
  local_a8 = local_78;
  uStack_a0 = uStack_70;
  local_98 = local_68;
  plStack_90 = local_60;
  if (local_60 == (long *)0x0) {
    local_88 = local_58;
    uVar3 = FUN_020050b0(lVar8,lVar9,&local_b8);
    FUN_02005164(plVar10,uVar3,*(undefined8 *)(param_1 + 0x30));
  }
  else {
    (**(code **)(*local_60 + 0x18))(local_60);
    local_88 = local_58;
    uVar3 = FUN_020050b0(lVar8,lVar9,&local_b8);
    FUN_02005164(plVar10,uVar3,*(undefined8 *)(param_1 + 0x30));
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if ((lVar9 - lVar8 == *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28)) &&
     (uVar4 = *(ulong *)(param_1 + 0x88), uVar4 != 0)) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar4 - 1 & local_78;
    }
    else if (local_78 < uVar4) {
      uVar6 = local_78;
    }
    else {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = local_78 / uVar4;
      }
      uVar6 = local_78 - uVar6 * uVar4;
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x80) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      plVar10 = (long *)PTR_DAT_047d8b70;
      if (local_80 != (long *)0x0) {
        plVar10 = local_80 + 6;
      }
      if (uVar5 < 2) {
        do {
          if (plVar7[1] == local_78) {
            plVar1 = (long *)PTR_DAT_047d8b70;
            if (plVar7[2] != 0) {
              plVar1 = (long *)(plVar7[2] + 0x30);
            }
            if (*plVar1 == *plVar10) goto LAB_02004f68;
          }
          else if ((plVar7[1] & uVar4 - 1) != uVar6) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar7[1];
          if (uVar5 == local_78) {
            plVar1 = (long *)PTR_DAT_047d8b70;
            if (plVar7[2] != 0) {
              plVar1 = (long *)(plVar7[2] + 0x30);
            }
            if (*plVar1 == *plVar10) goto LAB_02004f68;
          }
          else {
            if (uVar4 <= uVar5) {
              uVar2 = 0;
              if (uVar4 != 0) {
                uVar2 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar2 * uVar4;
            }
            if (uVar5 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
LAB_02004f74:
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x60));
  return;
LAB_02004f68:
  FUN_02005220(param_1 + 0xe8,&local_80);
  goto LAB_02004f74;
}


