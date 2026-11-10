/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea12b0; name: FUN_01ea12b0
 */


undefined8 * FUN_01ea12b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,0x28,8);
  uVar2 = *param_2;
  *puVar1 = &PTR_LAB_04553a88;
  puVar1[1] = uVar2;
  uVar2 = *param_3;
  puVar1[4] = 0;
  puVar1[2] = uVar2;
  puVar1[3] = 0;
  FUN_01ea0fec(puVar1 + 3,param_3 + 1);
  return puVar1;
}


