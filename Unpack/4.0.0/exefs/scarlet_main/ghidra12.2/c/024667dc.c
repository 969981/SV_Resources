/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024667dc; name: FUN_024667dc
 */


void FUN_024667dc(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,int *param_5)

{
  if ((param_5 == (int *)0x0) || (*param_5 != 1)) {
    *param_1 = 0;
    return;
  }
  FUN_028b3f88(param_2 + *(long *)(*(long *)(param_5 + 8) + *(long *)(param_5 + 2) * 8) * param_3 +
               4,param_5);
  return;
}


