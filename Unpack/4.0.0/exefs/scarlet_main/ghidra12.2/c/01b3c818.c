/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b3c818; name: FUN_01b3c818
 */


void FUN_01b3c818(undefined4 param_1,long param_2)

{
  long lVar1;
  
  FUN_01fb1e70();
  lVar1 = FUN_01fb1f0c();
  if ((param_2 == 0) || (lVar1 == 0)) {
    return;
  }
  FUN_01fb2834((int)lVar1,param_1,param_2);
  return;
}


