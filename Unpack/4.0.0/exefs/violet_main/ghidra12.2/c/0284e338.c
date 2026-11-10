/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0284e338; name: FUN_0284e338
 */


void FUN_0284e338(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d08c0 + 0x10;
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = (long)puVar1;
  memset(param_1 + 1,0,0x10);
  return;
}


