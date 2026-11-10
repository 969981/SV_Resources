/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dad824; name: FUN_01dad824
 */


void FUN_01dad824(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d3a88;
  *param_1 = &PTR_LAB_045400f8;
  *(undefined8 *)puVar1 = 0;
  if (param_1[3] != 0) {
    (**(code **)(*(long *)param_1[1] + 0xe8))();
  }
  FUN_01dadbd8(param_1);
  return;
}


