/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f3c54; name: FUN_021f3c54
 */


uint FUN_021f3c54(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00e97b78(*(undefined8 *)(param_1 + 0x70));
  if (uVar1 < 0x19) {
    return 0x1486b5dU >> (ulong)(uVar1 & 0x1f) & 1;
  }
  return 0;
}


