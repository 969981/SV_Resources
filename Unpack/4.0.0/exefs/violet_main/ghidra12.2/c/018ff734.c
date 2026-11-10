/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ff734; name: FUN_018ff734
 */


void FUN_018ff734(long *param_1)

{
  undefined *puVar1;
  
  FUN_018ff5fc();
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  puVar1 = PTR_DAT_047d1550;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)((long)param_1 + 0xba) = 0;
  *(undefined2 *)((long)param_1 + 0xa4) = 0xffff;
  *(undefined2 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return;
}


