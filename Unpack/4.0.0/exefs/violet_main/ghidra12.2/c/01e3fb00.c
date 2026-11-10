/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e3fb00; name: FUN_01e3fb00
 */


void FUN_01e3fb00(long *param_1,ulong param_2)

{
  uint uVar1;
  void *__s;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    __s = (void *)*param_1;
  }
  else {
    uVar2 = (ulong)(0x40 - uVar1);
    uVar4 = param_2;
    if (uVar2 <= param_2) {
      uVar4 = uVar2;
    }
    *(ulong *)*param_1 =
         *(ulong *)*param_1 &
         (0xffffffffffffffffU >> (uVar2 - uVar4 & 0x3f) & -1L << ((ulong)uVar1 & 0x3f) ^
         0xffffffffffffffff);
    param_2 = param_2 - uVar4;
    __s = (void *)(*param_1 + 8);
    *param_1 = (long)__s;
  }
  uVar4 = param_2 >> 6;
  memset(__s,0,uVar4 << 3);
  if ((param_2 & 0x3f) != 0) {
    lVar3 = *param_1;
    *param_1 = lVar3 + uVar4 * 8;
    *(ulong *)(lVar3 + uVar4 * 8) =
         *(ulong *)(lVar3 + uVar4 * 8) &
         (0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
  }
  return;
}


