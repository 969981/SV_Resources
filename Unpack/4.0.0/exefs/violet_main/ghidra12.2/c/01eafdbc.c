/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eafdbc; name: FUN_01eafdbc
 */


uint FUN_01eafdbc(long param_1,undefined1 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_34 [4];
  
  plVar6 = (long *)(param_1 + 0x38);
  local_34[0] = param_2;
  if ((*plVar6 != 0) && (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 != 0)) {
    uVar4 = FUN_00ea2b08(lVar5 + -0x28);
    if ((uVar4 & 1) != 0) {
      local_4c = *param_3;
      local_44 = (undefined4)param_3[1];
      local_50 = param_2;
      local_58 = FUN_00dc05e0(plVar6);
      FUN_01eaff2c(param_1 + 0xb78,&local_58);
      uVar2 = 1;
      *(undefined1 *)(param_1 + 0xa90) = 1;
      goto LAB_01eafeb8;
    }
  }
  if ((*(long *)(param_1 + 0x50) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar5 == 0)) {
    uVar2 = 0;
  }
  else {
    plVar7 = (long *)(lVar5 + -0x28);
    FUN_016947d8(&local_58);
    local_70 = CONCAT44(local_70._4_4_,9);
    if (local_58 != 0) {
      FUN_01eaf354(&local_68,&local_70,local_58 + 8);
      if (local_58 != 0) {
        FUN_01943830(&local_68,local_34,local_58 + 8);
      }
    }
    local_68 = *param_3;
    local_60 = (undefined4)param_3[1];
    if (local_58 != 0) {
      FUN_011dbc60(&local_70,&local_68,local_58 + 8);
    }
    *(undefined1 *)(param_1 + 0xa90) = 0;
    uVar3 = FUN_014c27b0(&local_58);
    uVar1 = FUN_014c27c8(&local_58);
    local_70 = FUN_00dc05e0(plVar6);
    uVar2 = (**(code **)(*plVar7 + 0x68))(plVar7,uVar3,uVar1,&local_70);
    FUN_01694aa8(&local_58);
  }
LAB_01eafeb8:
  return uVar2 & 1;
}


