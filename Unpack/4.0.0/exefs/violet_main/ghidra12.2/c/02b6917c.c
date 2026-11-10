/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b6917c; name: FUN_02b6917c
 */


void FUN_02b6917c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long *plStack_38;
  
  lVar3 = param_1[1] - *param_1;
  if ((ulong)((lVar3 >> 4) * -0x5555555555555555) <
      (ulong)((param_1[2] - *param_1 >> 4) * -0x5555555555555555)) {
    plVar5 = param_1 + 3;
    local_40 = 0;
    plStack_38 = plVar5;
    if (lVar3 == 0) {
      local_58 = 0;
    }
    else {
      local_58 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,lVar3,8);
      if (local_58 == 0) {
        (**(code **)(*(long *)*plVar5 + 0xe8))();
      }
    }
    local_50 = local_58 + (lVar3 >> 4) * 0x10;
    local_48 = local_50;
    local_40 = local_50;
    FUN_015f2470(param_1,&local_58);
    lVar3 = local_58;
    lVar4 = local_48;
    while (local_48 = lVar4, local_48 != local_50) {
      lVar4 = local_48 + -0x30;
      if (*(char *)(local_48 + -0x10) != '\0') {
        *(undefined1 *)(local_48 + -0x10) = 0;
      }
    }
    if (local_58 != 0) {
      lVar4 = local_40 - local_58;
      plVar5 = (long *)*plStack_38;
      uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar3,lVar4,8);
      }
      else {
        FUN_00c48fe8(plVar5,lVar3,lVar4,8);
      }
    }
  }
  return;
}


