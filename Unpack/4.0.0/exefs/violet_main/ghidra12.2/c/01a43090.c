/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a43090; name: FUN_01a43090
 */


undefined8 FUN_01a43090(uint param_1)

{
  param_1 = param_1 & 0xffff;
  if ((((param_1 - 0x10 < 0x3f) &&
       ((1L << ((ulong)(param_1 - 0x10) & 0x3f) & 0x5ff80009fc000007U) != 0)) ||
      ((param_1 - 0x53 < 0x3c &&
       ((1L << ((ulong)(param_1 - 0x53) & 0x3f) & 0x800100800000001U) != 0)))) || (param_1 == 3)) {
    return 1;
  }
  return 0;
}


