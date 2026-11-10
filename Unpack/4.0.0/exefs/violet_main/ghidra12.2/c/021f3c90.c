/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f3c90; name: FUN_021f3c90
 */


uint FUN_021f3c90(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e97b78(*(undefined8 *)(param_1 + 0x70));
  if (iVar1 - 1U < 0x17) {
    return 0x5bca51U >> (ulong)(iVar1 - 1U & 0x1f) & 1;
  }
  return 0;
}


