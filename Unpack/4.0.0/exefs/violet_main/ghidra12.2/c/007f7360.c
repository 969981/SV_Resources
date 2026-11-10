/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f7360; name: FUN_007f7360
 */


int FUN_007f7360(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xbc);
  uVar3 = -uVar1;
  uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x70) + 0x18) + 0x38);
  if (uVar2 < uVar1) {
    uVar3 = ~uVar1;
  }
  *(uint *)(param_1 + 0xbc) = uVar2;
  return uVar3 + uVar2;
}


