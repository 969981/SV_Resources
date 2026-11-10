/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e43200; name: FUN_00e43200
 */


void FUN_00e43200(long *param_1)

{
  uint uVar1;
  uint uVar2;
  void *__s;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    __s = (void *)*param_1;
    uVar4 = 0x40;
  }
  else {
    uVar2 = 0x40 - uVar1;
    uVar4 = (ulong)uVar2;
    if (0x3f < uVar2) {
      uVar4 = 0x40;
    }
    *(ulong *)*param_1 =
         *(ulong *)*param_1 &
         (0xffffffffffffffffU >> (uVar2 - uVar4 & 0x3f) & -1L << ((ulong)uVar1 & 0x3f) ^
         0xffffffffffffffff);
    uVar4 = 0x40 - uVar4;
    __s = (void *)(*param_1 + 8);
    *param_1 = (long)__s;
  }
  uVar5 = uVar4 >> 6;
  memset(__s,0,uVar5 << 3);
  if ((uVar4 & 0x3f) != 0) {
    lVar3 = *param_1;
    *param_1 = lVar3 + uVar5 * 8;
    *(ulong *)(lVar3 + uVar5 * 8) =
         *(ulong *)(lVar3 + uVar5 * 8) &
         (0xffffffffffffffffU >> (-(uVar4 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
  }
  return;
}


