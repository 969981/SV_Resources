/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0194a110; name: FUN_0194a110
 */


uint FUN_0194a110(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)*(ulong *)(param_1 + 8);
  uVar1 = uVar2 & 7;
  uVar3 = (uint)(*(ulong *)(param_1 + 8) >> 0x1a);
  if (uVar1 != 4) {
    uVar3 = 0;
  }
  uVar2 = uVar2 >> 3 & 0x3f;
  if (uVar1 != 3) {
    uVar2 = uVar3;
  }
  return uVar2;
}


