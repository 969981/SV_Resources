/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fdf148; name: FUN_00fdf148
 */


bool FUN_00fdf148(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x50) == 0)) {
    return false;
  }
  return *(int *)(lVar1 + 0x40) == 0;
}


