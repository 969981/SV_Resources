/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01464df0; name: FUN_01464df0
 */


int FUN_01464df0(int param_1,long param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = (int)param_2 * 0x135;
  }
  return iVar1 + param_1;
}


