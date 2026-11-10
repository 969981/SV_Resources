/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005f5d40; name: FUN_005f5d40
 */


int FUN_005f5d40(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_1 == 2) {
    iVar1 = 2;
  }
  if (param_1 != 3) {
    param_1 = iVar1;
  }
  return param_1;
}


