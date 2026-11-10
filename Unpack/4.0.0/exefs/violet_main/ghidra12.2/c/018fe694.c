/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018fe694; name: FUN_018fe694
 */


void FUN_018fe694(long *param_1)

{
  undefined *puVar1;
  
  FUN_0278ab84();
  puVar1 = PTR_DAT_047d0e20;
  *(undefined2 *)((long)param_1 + 10) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


