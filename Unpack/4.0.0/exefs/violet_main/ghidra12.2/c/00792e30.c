/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00792e30; name: FUN_00792e30
 */


void FUN_00792e30(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_0078cc98();
  puVar2 = PTR_DAT_047d0988;
  puVar1 = PTR_DAT_047d0980;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = (long)(puVar2 + 0x10);
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  return;
}


