/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01808bfc; name: FUN_01808bfc
 */


void FUN_01808bfc(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_00d1a22c(param_1,0);
  *param_1 = &PTR_FUN_045aec70;
  param_1[4] = &PTR_LAB_045aedb8;
  param_1[5] = &DAT_045aeee0;
  param_1[6] = &PTR_LAB_045aef38;
  param_1[7] = &PTR_LAB_045aef60;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  puVar1 = PTR_DAT_047d94a8 + 0x10;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x24] = puVar1;
  param_1[0x25] = 0;
  param_1[0x2c] = &DAT_cbf29ce484222645;
  param_1[0x2d] = &DAT_03c886bc;
  param_1[0x30] = &DAT_cbf29ce484222645;
  param_1[0x31] = &DAT_03c886bc;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((long)param_1 + 0x1cd) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  return;
}


