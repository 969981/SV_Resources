/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0190c240; name: FUN_0190c240
 */


uint FUN_0190c240(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 * param_1) >> 0xc;
  if (0x800 < (param_2 * param_1 & 0xfffU)) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}


