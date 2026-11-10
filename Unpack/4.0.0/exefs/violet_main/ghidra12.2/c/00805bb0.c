/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00805bb0; name: FUN_00805bb0
 */


void FUN_00805bb0(long *param_1)

{
  undefined *puVar1;
  
  FUN_007a5da0();
  puVar1 = PTR_DAT_047d16f8;
  param_1[0x1a] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_02899764(param_1 + 0x1b);
  param_1[0x1b] = (long)(PTR_DAT_047d1700 + 0x10);
  FUN_008015b4(param_1 + 0x1f);
  param_1[0x9c] = 0;
  param_1[0x1c] = (long)(param_1 + 0x1f);
  FUN_00805f80(param_1 + 0x9d);
  return;
}


