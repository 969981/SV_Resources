/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011810b0; name: FUN_011810b0
 */


void FUN_011810b0(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&DAT_045d3390;
  param_1[4] = (long)&PTR_LAB_045d3428;
  param_1[5] = (long)&DAT_045d3478;
  FUN_011811b8(param_1 + 0x42);
  puVar1 = PTR_DAT_047dd550;
  *param_1 = (long)(PTR_DAT_047dd550 + 0x10);
  param_1[4] = (long)(puVar1 + 0xa8);
  param_1[5] = (long)(puVar1 + 0xf8);
  FUN_01181118(param_1 + 0x3e,0);
  FUN_00db9ce0(param_1);
  return;
}


