/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01139c64; name: FUN_01139c64
 */


void FUN_01139c64(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3 >> 4) * 0x34f72c234f72c235) < param_2) {
    lVar4 = param_1[1];
    local_50 = 0;
    plStack_48 = param_1 + 3;
    local_68 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x1d0,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    local_60 = local_68 + (lVar4 - lVar3 >> 4) * 0x10;
    local_50 = local_68 + param_2 * 0x1d0;
    local_58 = local_60;
    FUN_01139dec(param_1,&local_68);
    lVar4 = local_58;
    lVar3 = local_60;
    if (local_58 != local_60) {
      lVar2 = local_58 + -0x1d0;
      FUN_01139754(lVar2);
      if (lVar2 != lVar3) {
        do {
          FUN_01139754(lVar4 + -0x3a0);
          lVar4 = lVar4 + -0x1d0;
        } while (lVar3 + 0x1d0 != lVar4);
      }
      local_58 = lVar3;
    }
    lVar3 = local_68;
    if (local_68 != 0) {
      lVar4 = local_50 - local_68;
      plVar5 = (long *)*plStack_48;
      uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar3,lVar4,0x10);
      }
      else {
        FUN_00c48fe8(plVar5,lVar3,lVar4,0x10);
      }
    }
  }
  return;
}


