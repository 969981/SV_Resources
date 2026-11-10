/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd12c0; name: FUN_01dd12c0
 */


uint FUN_01dd12c0(long param_1)

{
  uint uVar1;
  
  FUN_01195974();
  uVar1 = *(uint *)(param_1 + 0x108);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}


