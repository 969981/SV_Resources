/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026fcfa8; name: FUN_026fcfa8
 */


void FUN_026fcfa8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  bVar1 = FUN_026fbd34(param_3,param_2,param_1);
  *(byte *)((long)param_1 + 0x14) = bVar1 & 1;
  return;
}


