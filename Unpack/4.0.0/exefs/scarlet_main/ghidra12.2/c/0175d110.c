/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0175d110; name: FUN_0175d110
 */


void FUN_0175d110(void *param_1,void *param_2,long param_3)

{
  memcpy(param_1,param_2,0x28);
  *(long *)((long)param_1 + 0x18) = *(long *)((long)param_1 + 0x18) + param_3;
  return;
}


