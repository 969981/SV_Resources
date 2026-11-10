/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f9854; name: FUN_001f9854
 */


undefined8 FUN_001f9854(long param_1,byte param_2)

{
  int iVar1;
  
  *(byte *)(param_1 + 0xe4) = *(byte *)(param_1 + 0xe4) | param_2;
  iVar1 = FUN_001f9538(param_1 + 0x18);
  if (iVar1 != 0) {
    FUN_001f9cbc(param_1);
  }
  return 0;
}


