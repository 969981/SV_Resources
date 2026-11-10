/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e5190; name: FUN_007e5190
 */


void FUN_007e5190(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1460;
  *(undefined2 *)(param_1 + 2) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  FUN_00796584(param_1 + 3);
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_007965d8(param_1 + 3);
  return;
}


