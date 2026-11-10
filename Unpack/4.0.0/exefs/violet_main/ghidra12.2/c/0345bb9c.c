/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0345bb9c; name: FUN_0345bb9c
 */


void FUN_0345bb9c(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)(PTR_DAT_047e70b8 + 0x10);
  puVar1 = PTR_DAT_047e2fd0;
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    param_1[7] = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
  }
  *param_1 = (long)(PTR_DAT_047e70b0 + 0x10);
  if (param_1[5] != 0) {
    (**(code **)(puVar1 + 0x30))(1);
  }
  param_1[5] = 0;
  if (param_1[4] != 0) {
    (**(code **)(puVar1 + 0x30))(1);
  }
  puVar1 = PTR_DAT_047e70a0;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


