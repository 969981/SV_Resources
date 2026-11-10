/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e0c66c; name: FUN_01e0c66c
 */


uint FUN_01e0c66c(long param_1)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x138) == 0) {
    uVar1 = *(uint *)(param_1 + 0x124);
  }
  else {
    uVar1 = FUN_00cf41a8(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70));
    uVar1 = uVar1 & 0xffff;
  }
  return uVar1;
}


