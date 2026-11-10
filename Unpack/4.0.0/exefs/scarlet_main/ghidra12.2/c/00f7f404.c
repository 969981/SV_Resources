/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f7f404; name: FUN_00f7f404
 */


void FUN_00f7f404(undefined8 *param_1,undefined8 param_2,void *param_3)

{
  FUN_0149896c(param_1,0x287fc18d19661403,&DAT_045f0dc0,param_2);
  *param_1 = &DAT_045f0ca8;
  param_1[4] = &PTR_LAB_045f0d28;
  param_1[5] = &PTR_LAB_045f0d78;
  memcpy(param_1 + 0xf,param_3,0x2588);
  param_1[0x4c0] = 0;
  param_1[0x4c1] = 0;
  param_1[0x4c2] = 0;
  return;
}


