/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01962bc4; name: FUN_01962bc4
 */


void FUN_01962bc4(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&DAT_045df260;
  param_1[4] = (long)&PTR_LAB_045df2f8;
  param_1[5] = (long)&DAT_045df348;
  FUN_01962ccc(param_1 + 0x42);
  puVar1 = PTR_DAT_047dd550;
  *param_1 = (long)(PTR_DAT_047dd550 + 0x10);
  param_1[4] = (long)(puVar1 + 0xa8);
  param_1[5] = (long)(puVar1 + 0xf8);
  FUN_01962c2c(param_1 + 0x3e,0);
  FUN_00db9ce0(param_1);
  return;
}


