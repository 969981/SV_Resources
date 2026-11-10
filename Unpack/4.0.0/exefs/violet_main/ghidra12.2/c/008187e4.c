/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008187e4; name: FUN_008187e4
 */


void FUN_008187e4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1908;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)param_1 = 0;
  param_1[2] = 0;
  param_1[3] = puVar1 + 0x10;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  return;
}


