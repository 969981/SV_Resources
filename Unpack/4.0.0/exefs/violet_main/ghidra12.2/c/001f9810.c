/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f9810; name: FUN_001f9810
 */


undefined8 FUN_001f9810(long param_1)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(byte *)(param_1 + 0xe4) = *(byte *)(param_1 + 0xe4) & 0xf3;
  iVar1 = FUN_001f9538(param_1 + 0x18);
  if (iVar1 != 0) {
    FUN_001f9cbc(param_1);
  }
  return 0;
}


