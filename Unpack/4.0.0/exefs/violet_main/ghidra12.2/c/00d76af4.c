/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d76af4; name: FUN_00d76af4
 */


void FUN_00d76af4(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long local_b8;
  uint local_b0;
  long local_a8;
  undefined4 local_a0;
  long local_98;
  long local_90;
  long local_88;
  long *local_80;
  ulong local_78;
  long local_70;
  ulong local_68;
  long *local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  
  if ((ulong)(param_1[2] * 0x40) < param_2) {
    plVar7 = param_1 + 3;
    plVar5 = (long *)*plVar7;
    local_78 = param_1[4];
    local_68 = local_68 & 0xffffffff00000000;
    local_70 = 0;
    uVar2 = 0x7fffffffffffffff;
    if (local_78 < 0x1ffffffffffffff) {
      uVar2 = local_78 << 6;
    }
    local_88 = 0;
    local_98 = 0;
    local_90 = 0;
    local_80 = plVar5;
    if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = (param_2 - 1 >> 6) + 1;
    lVar1 = (**(code **)(*plVar5 + 0x10))(plVar5,lVar3 * 8,1);
    if (lVar1 == 0) {
      (**(code **)(*plVar5 + 0xe8))(plVar5);
    }
    local_90 = 0;
    local_a8 = *param_1;
    local_b0 = (uint)param_1[1] & 0x3f;
    local_b8 = local_a8 + ((ulong)param_1[1] >> 3 & 0x1ffffffffffffff8);
    local_a0 = 0;
    local_98 = lVar1;
    local_88 = lVar3;
    FUN_00d76cb4(&local_98,&local_a8,&local_b8);
    lVar6 = *param_1;
    lVar1 = param_1[1];
    lVar3 = param_1[2];
    *param_1 = local_98;
    param_1[1] = local_90;
    param_1[2] = local_88;
    plVar5 = (long *)*plVar7;
    lStack_58 = param_1[4];
    local_50 = param_1[5];
    lStack_48 = param_1[6];
    param_1[5] = local_70;
    param_1[6] = local_68;
    *plVar7 = (long)local_80;
    param_1[4] = local_78;
    if (lVar6 != 0) {
      lVar4 = lVar3 << 3;
      local_98 = lVar6;
      local_90 = lVar1;
      local_88 = lVar3;
      local_80 = plVar5;
      local_78 = lStack_58;
      local_70 = local_50;
      local_68 = lStack_48;
      local_60 = plVar5;
      uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar2 & 1) != 0) && (lVar3 = FUN_00c4e600(), 0 < *(int *)(lVar3 + 0x12c8))) {
        FUN_00c48fe8(plVar5,lVar6,lVar4,1);
        return;
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar6,lVar4,1);
    }
  }
  return;
}


