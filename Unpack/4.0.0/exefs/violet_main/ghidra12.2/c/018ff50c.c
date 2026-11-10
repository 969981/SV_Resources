/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ff50c; name: FUN_018ff50c
 */


void FUN_018ff50c(long *param_1)

{
  undefined *puVar1;
  
  FUN_007e87cc();
  puVar1 = PTR_DAT_047d14f8;
  *(undefined2 *)((long)param_1 + 0x5a) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)param_1 + 100) = 0;
  param_1[0xd] = 0;
  return;
}


