/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00892e08; name: FUN_00892e08
 */


undefined8 FUN_00892e08(long param_1,long param_2,short param_3)

{
  if ((*(long *)(param_1 + 400) == param_2) && (*(short *)(param_1 + 0x198) == param_3)) {
    return 0;
  }
  *(long *)(param_1 + 400) = param_2;
  *(short *)(param_1 + 0x198) = param_3;
  return 1;
}


