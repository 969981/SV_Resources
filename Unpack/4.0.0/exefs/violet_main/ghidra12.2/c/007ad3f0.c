/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ad3f0; name: FUN_007ad3f0
 */


void FUN_007ad3f0(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d0d38;
  param_1[0xb] = param_2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


