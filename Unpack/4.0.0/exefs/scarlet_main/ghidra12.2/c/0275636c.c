/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0275636c; name: FUN_0275636c
 */


void FUN_0275636c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  char acStack_30 [16];
  
  snprintf(acStack_30,0x10,"%d",param_3 & 0xffffffff);
  FUN_00db53a4(param_1,param_2,acStack_30);
  return;
}


