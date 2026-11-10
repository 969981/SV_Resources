/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012aa7bc; name: FUN_012aa7bc
 */


void FUN_012aa7bc(long *param_1)

{
  undefined *puVar1;
  
  FUN_008af6c4();
  param_1[2] = (long)(param_1 + 1);
  param_1[3] = (long)(param_1 + 3);
  puVar1 = PTR_DAT_047d20d0;
  param_1[8] = (long)(param_1 + 7);
  param_1[4] = (long)(param_1 + 3);
  param_1[5] = (long)(param_1 + 5);
  param_1[6] = (long)(param_1 + 5);
  param_1[7] = (long)(param_1 + 7);
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(param_1 + 1);
  return;
}


