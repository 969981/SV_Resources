/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010aca6c; name: FUN_010aca6c
 */


void FUN_010aca6c(long *param_1)

{
  undefined *puVar1;
  
  FUN_010ace64();
  param_1[0x13] = 0;
  puVar1 = PTR_DAT_047e2590;
  param_1[0x16] = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0x1212;
  *(undefined2 *)((long)param_1 + 0xac) = 0x1212;
  *(undefined2 *)((long)param_1 + 0xc4) = 0x1212;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = (long)(puVar1 + 0x50);
  *(undefined2 *)(param_1 + 0x17) = 0x1212;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  return;
}


