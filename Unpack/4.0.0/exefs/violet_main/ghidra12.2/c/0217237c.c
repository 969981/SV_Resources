/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0217237c; name: FUN_0217237c
 */


undefined8 FUN_0217237c(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1 - 0x142;
  if (0x3c < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x1000220080000801U) == 0) {
    uVar2 = uVar1 - 0x101;
    if (0x2a < uVar2) {
      return 0;
    }
    if ((1L << ((ulong)uVar2 & 0x3f) & 0x40004040001U) == 0) {
      return 0;
    }
  }
  *param_1 = uVar1 - 1;
  return 1;
}


