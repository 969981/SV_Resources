/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0192eda0; name: FUN_0192eda0
 */


void FUN_0192eda0(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if (cVar1 == -0x47) {
    FUN_0192ee54(0xb9,param_2,param_3);
    return;
  }
  *param_1 = 1;
  return;
}


