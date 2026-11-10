/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d6de0; name: FUN_003d6de0
 */


undefined8 FUN_003d6de0(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x695) >> 6 & 1) == 0) {
    uVar1 = FUN_003af490(param_1,10,0,0,0);
    return uVar1;
  }
  return 0;
}


