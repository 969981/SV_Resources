/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00883698; name: FUN_00883698
 */


void FUN_00883698(long *param_1)

{
  undefined *puVar1;
  
  FUN_008840c8();
  puVar1 = PTR_DAT_047d1ea8;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


