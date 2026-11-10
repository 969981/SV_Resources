/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e69f0; name: FUN_007e69f0
 */


void FUN_007e69f0(long *param_1)

{
  undefined *puVar1;
  
  FUN_007eeea8();
  puVar1 = PTR_DAT_047d1488;
  *(undefined2 *)((long)param_1 + 0xa6) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x15] = *(long *)PTR_DAT_047d0970;
  param_1[0x16] = 0;
  return;
}


