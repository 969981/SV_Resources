/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018d3ba0; name: FUN_018d3ba0
 */


void FUN_018d3ba0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (*(long *)*param_1 != 0) {
    plVar1 = (long *)(*(long *)*param_1 + 0x30);
  }
  if (*(long *)(param_2 + 0xf0) == *plVar1) {
    FUN_018d3c70();
    return;
  }
  FUN_018d3bd8(param_2);
  return;
}


