/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


