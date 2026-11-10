/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0245fc14; name: FUN_0245fc14
 */


void FUN_0245fc14(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,int *param_5)

{
  if ((param_5 == (int *)0x0) || (*param_5 != 1)) {
    *param_1 = 0;
    return;
  }
  FUN_028b3f88(param_2 + param_3,param_5);
  return;
}


