/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353e1d0; name: at_quick_exit
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int at_quick_exit(__func *__func)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_at_quick_exit_047ca9e0)((int)__func);
  return iVar1;
}


