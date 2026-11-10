/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028afbac; name: FUN_028afbac
 */


void FUN_028afbac(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d3920;
  *param_1 = &PTR_LAB_045e6d80;
  *(undefined8 *)puVar1 = 0;
  if (param_1[3] != 0) {
    (**(code **)(*(long *)param_1[1] + 0xe8))();
  }
  FUN_01dadbd8(param_1);
  return;
}


