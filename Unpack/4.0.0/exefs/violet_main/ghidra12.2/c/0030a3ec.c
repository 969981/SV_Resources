/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030a3ec; name: FUN_0030a3ec
 */


void FUN_0030a3ec(long *param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 1) = param_4;
  *(undefined4 *)((long)param_1 + 0xc) = param_5;
  puVar1 = PTR_DAT_047ccac8;
  param_1[2] = param_2;
  param_1[3] = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = 2;
  *(undefined4 *)(param_1 + 5) = param_4;
  if (4 < *(ulong *)(param_3 + 0x8e0)) {
    FUN_00350fd0();
  }
  *(undefined8 *)(param_3 + 0x8e0) = 0;
  return;
}


