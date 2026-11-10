/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e0f28; name: FUN_001e0f28
 */


undefined8 FUN_001e0f28(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x1138) == 0) {
    lVar1 = FUN_001ec2f8(*(undefined8 *)(param_1 + 0xc18));
    *(long *)(param_1 + 0x1138) = lVar1;
    if (lVar1 == 0) {
      return 0x1b;
    }
  }
  return 0;
}


