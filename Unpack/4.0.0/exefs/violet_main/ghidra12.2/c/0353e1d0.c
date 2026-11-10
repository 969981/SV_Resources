/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353e1d0; name: at_quick_exit
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int at_quick_exit(__func *__func)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_at_quick_exit_047ca9e0)((int)__func);
  return iVar1;
}


