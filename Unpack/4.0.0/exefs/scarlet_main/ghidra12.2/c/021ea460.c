/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021ea460; name: FUN_021ea460
 */


void FUN_021ea460(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_045a8b00;
  param_1[4] = &PTR_LAB_045a8b30;
  FUN_00db239c(param_1 + 0x12);
  plVar1 = param_1 + 5;
  FUN_021ea544(plVar1,param_1[0xb]);
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_021ea61c(param_1 + 6);
  return;
}


