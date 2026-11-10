/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0087b760; name: FUN_0087b760
 */


void FUN_0087b760(long *param_1)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x7001020000;
  puVar1 = PTR_DAT_047d1db0;
  param_1[0x10] = 0x9001020001;
  *(undefined4 *)(param_1 + 0x22) = 0x1020002;
  *(undefined4 *)((long)param_1 + 0x194) = 0;
  param_1[0x2e] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)param_1 + 0x114) = 0x40;
  *(undefined4 *)(param_1 + 0x2a) = 0x1020003;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0x20;
  return;
}


