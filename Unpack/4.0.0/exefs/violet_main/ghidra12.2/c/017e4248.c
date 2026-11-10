/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e4248; name: FUN_017e4248
 */


void FUN_017e4248(long param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong *__s;
  ulong uVar4;
  undefined1 auStack_70 [16];
  long local_60;
  undefined4 local_58;
  long local_50;
  undefined4 local_48;
  long local_40;
  uint local_38;
  
  local_50 = param_1 + 0x78;
  if (0x3dd < param_2) {
    param_2 = 0x3de;
  }
  local_38 = (uint)param_2 & 0x3f;
  uVar4 = param_2 >> 6;
  local_40 = param_1 + uVar4 * 8;
  local_58 = 0;
  local_48 = 0x1e;
  local_60 = param_1;
  FUN_017e4350(auStack_70,&local_40,&local_50,&local_60);
  if (param_2 != 0) {
    uVar3 = 0x3de - param_2;
    uVar2 = (uint)uVar3 & 0x3f;
    puVar1 = (ulong *)(param_1 + (uVar3 >> 3 & 0x1ffffffffffffff8));
    __s = puVar1;
    if ((uVar3 & 0x3f) != 0) {
      uVar3 = (ulong)(0x40 - uVar2);
      uVar4 = param_2;
      if (uVar3 <= param_2) {
        uVar4 = uVar3;
      }
      param_2 = param_2 - uVar4;
      __s = puVar1 + 1;
      *puVar1 = *puVar1 & (0xffffffffffffffffU >> (uVar3 - uVar4 & 0x3f) & -1L << uVar2 ^
                          0xffffffffffffffff);
      uVar4 = param_2 >> 6;
    }
    memset(__s,0,uVar4 << 3);
    if ((param_2 & 0x3f) != 0) {
      __s[uVar4] = __s[uVar4] &
                   (0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
    }
  }
  return;
}


