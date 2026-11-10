/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03524be0; name: FUN_03524be0
 */


void FUN_03524be0(undefined8 *param_1)

{
  undefined *puVar1;
  
  param_1[-4] = &PTR_FUN_047c81e0;
  param_1[-3] = &PTR_FUN_047c84a0;
  *param_1 = &PTR_FUN_047c84e0;
  param_1[3] = &PTR_LAB_047c8578;
  param_1[0x24] = &PTR_LAB_047c85a0;
  puVar1 = PTR_DAT_047e2fd0;
  if (param_1[0x2b] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2);
    param_1[0x2b] = 0;
  }
  if (param_1[0x2c] != 0) {
    (**(code **)(puVar1 + 0x30))(2);
    param_1[0x2c] = 0;
  }
  if (param_1[0x28] != 0) {
    (**(code **)(puVar1 + 0x30))(1);
  }
  FUN_0352d2a0(param_1 + -4);
  return;
}


