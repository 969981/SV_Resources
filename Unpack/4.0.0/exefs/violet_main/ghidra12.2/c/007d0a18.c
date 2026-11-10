/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d0a18; name: FUN_007d0a18
 */


void FUN_007d0a18(long *param_1)

{
  undefined *puVar1;
  
  FUN_007ce5c8();
  puVar1 = PTR_DAT_047d12d0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}


