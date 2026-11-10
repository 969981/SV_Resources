/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089da30; name: FUN_0089da30
 */


void FUN_0089da30(long *param_1)

{
  undefined *puVar1;
  
  FUN_0088d0a0();
  puVar1 = PTR_DAT_047d22f0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


