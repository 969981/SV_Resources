/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b5028; name: FUN_028b5028
 */


void FUN_028b5028(long *param_1)

{
  long lVar1;
  
  FUN_028b5068(param_1,param_1[6]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_01573950(param_1 + 1);
  return;
}


