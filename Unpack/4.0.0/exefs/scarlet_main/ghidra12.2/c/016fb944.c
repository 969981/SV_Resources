/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016fb944; name: FUN_016fb944
 */


void FUN_016fb944(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((*param_2 == 0) || (uVar1 = FUN_016fb98c(), (uVar1 & 1) == 0)) {
    return;
  }
  FUN_016fba78(param_1,param_2);
  return;
}


