/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d60c8; name: FUN_029d60c8
 */


undefined8 FUN_029d60c8(long param_1)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0x268) == 0) ||
     ((*(byte *)(*(long *)(param_1 + 0x268) + 0x1e8) & 1) == 0)) {
    return 0;
  }
  uVar1 = FUN_022e43e8(*(undefined8 *)(param_1 + 0x268));
  return uVar1;
}


