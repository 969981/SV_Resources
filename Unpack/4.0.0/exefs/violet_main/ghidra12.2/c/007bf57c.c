/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007bf57c; name: FUN_007bf57c
 */


void FUN_007bf57c(long *param_1)

{
  undefined *puVar1;
  
  FUN_007acc70();
  puVar1 = PTR_DAT_047d0fb0;
  *(undefined1 *)((long)param_1 + 10) = 10;
  *param_1 = (long)(puVar1 + 0x10);
  memset(param_1 + 0x15,0,0x20);
  return;
}


