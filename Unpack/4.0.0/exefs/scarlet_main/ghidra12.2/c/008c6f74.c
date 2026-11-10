/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c6f74; name: FUN_008c6f74
 */


void FUN_008c6f74(char *param_1,int param_2,undefined8 param_3,long param_4)

{
  nn::util::SNPrintf(param_1,(long)param_2,"%s_%d",param_3,(ulong)*(uint *)(param_4 + 4));
  return;
}


