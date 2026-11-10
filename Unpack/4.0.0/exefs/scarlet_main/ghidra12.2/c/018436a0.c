/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018436a0; name: FUN_018436a0
 */


void FUN_018436a0(undefined8 *param_1,undefined8 param_2,void *param_3)

{
  FUN_0149896c(param_1,0x1700c0e54f23c7bf,&DAT_045f0b40,param_2);
  *param_1 = &DAT_045f0a28;
  param_1[4] = &PTR_LAB_045f0aa8;
  param_1[5] = &PTR_LAB_045f0af8;
  memcpy(param_1 + 0xf,param_3,0x238);
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  return;
}


