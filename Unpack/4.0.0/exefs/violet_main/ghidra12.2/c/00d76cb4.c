/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d76cb4; name: FUN_00d76cb4
 */


void FUN_00d76cb4(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *local_78;
  undefined1 local_70 [16];
  ulong *local_60;
  uint local_58;
  long local_50;
  uint local_48;
  ulong *local_40;
  uint local_38;
  
  uVar3 = param_1[1];
  uVar4 = (uVar3 - *(uint *)(param_2 + 1)) + (ulong)*(uint *)(param_3 + 1) +
          (*param_3 - *param_2) * 8;
  param_1[1] = uVar4;
  if ((uVar3 == 0) || (0x3f < (uVar4 - 1 ^ uVar3 - 1))) {
    uVar1 = 0;
    if (0x40 < uVar4) {
      uVar1 = uVar4 - 1 >> 6;
    }
    *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
  }
  local_38 = *(uint *)(param_2 + 1);
  uVar4 = (ulong)local_38;
  local_58 = (uint)uVar3 & 0x3f;
  local_60 = (ulong *)(*param_1 + (uVar3 >> 3 & 0x1ffffffffffffff8));
  local_78 = (ulong *)*param_2;
  local_50 = *param_3;
  local_48 = *(uint *)(param_3 + 1);
  if (local_38 == local_58) {
    uVar3 = (local_48 - uVar4) + (local_50 - (long)local_78) * 8;
    if (0 < (long)uVar3) {
      if (local_38 != 0) {
        uVar5 = (ulong)(0x40 - local_38);
        uVar1 = uVar3;
        if ((long)uVar5 <= (long)uVar3) {
          uVar1 = uVar5;
        }
        uVar3 = uVar3 - uVar1;
        lVar6 = uVar1 + uVar4;
        uVar4 = 0xffffffffffffffffU >> (uVar5 - uVar1 & 0x3f) & -1L << (uVar4 & 0x3f);
        *local_60 = *local_60 & (uVar4 ^ 0xffffffffffffffff) | *local_78 & uVar4;
        lVar2 = lVar6 + 0x3f;
        if (-1 < lVar6) {
          lVar2 = lVar6;
        }
        local_60 = local_60 + (lVar2 >> 6);
        local_78 = local_78 + 1;
      }
      uVar4 = uVar3 + 0x3f;
      if (-1 < (long)uVar3) {
        uVar4 = uVar3;
      }
      lVar6 = (long)uVar4 >> 6;
      memmove(local_60,local_78,lVar6 << 3);
      if (0 < (long)uVar3 % 0x40) {
        uVar4 = 0xffffffffffffffff >> (-((long)uVar3 % 0x40) & 0x3fU);
        local_60[lVar6] = local_60[lVar6] & (uVar4 ^ 0xffffffffffffffff) | local_78[lVar6] & uVar4;
      }
    }
  }
  else {
    local_40 = local_78;
    FUN_00d77490(local_70,&local_40,&local_50,&local_60);
  }
  return;
}


