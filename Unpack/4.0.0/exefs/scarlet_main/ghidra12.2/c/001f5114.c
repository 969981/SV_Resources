/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f5114; name: FUN_001f5114
 */


void FUN_001f5114(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  plVar1[2] = param_3 + param_2;
  plVar1[3] = (param_3 + param_4) - (param_3 + param_2);
  return;
}


