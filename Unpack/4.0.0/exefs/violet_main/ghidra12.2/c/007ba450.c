/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ba450; name: FUN_007ba450
 */


void FUN_007ba450(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d0f18;
  param_1[0x21] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar1 + 0x48);
  FUN_0284e3d4(param_1 + 0x1d);
  FUN_0284e3d4(param_1 + 0x19);
  FUN_0284e3d4(param_1 + 0x15);
  FUN_0284e3d4(param_1 + 0x11);
  FUN_007a53c8(param_1);
  return;
}


