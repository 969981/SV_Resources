/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002a16e4; name: FUN_002a16e4
 */


void FUN_002a16e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[5];
  *param_1 = &PTR_FUN_0448e1f0;
  param_1[5] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_0049e790(PTR_LAB_047cba48,puVar1);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[4]);
  }
  operator_delete(param_1);
  return;
}


