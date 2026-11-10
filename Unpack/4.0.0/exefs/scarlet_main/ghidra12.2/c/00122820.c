/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00122820; name: FUN_00122820
 */


bool FUN_00122820(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  *plVar1 = param_1;
  *(undefined1 *)(plVar1 + 1) = 0x48;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return *(long *)(*(long *)(param_1 + 0x18) + 0x108) == param_1;
}


