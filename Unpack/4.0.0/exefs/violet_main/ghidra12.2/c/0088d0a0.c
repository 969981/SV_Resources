/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088d0a0; name: FUN_0088d0a0
 */


void FUN_0088d0a0(long *param_1)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  puVar1 = PTR_DAT_047d2080;
  param_1[2] = (long)(param_1 + 1);
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(param_1 + 1);
  return;
}


