/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00361650; name: FUN_00361650
 */


void FUN_00361650(double param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3ff0000000000000,8);
  *(double *)(param_2 + 0x20) = *(double *)(param_2 + 0x20) + auVar1._8_8_;
  *(double *)(param_2 + 0x18) = *(double *)(param_2 + 0x18) + param_1;
  return;
}


