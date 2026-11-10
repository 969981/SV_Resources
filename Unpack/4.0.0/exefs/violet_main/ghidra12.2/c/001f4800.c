/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f4800; name: FUN_001f4800
 */


void FUN_001f4800(long *param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5)

{
  *param_1 = param_5 + 8;
  param_1[3] = param_4;
  param_1[4] = param_5;
  *(undefined2 *)((long)param_1 + 0xc) = 7;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_3;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}


