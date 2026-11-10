/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c6e18; name: FUN_001c6e18
 */


undefined8 FUN_001c6e18(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x1100) + 0x30);
  }
  else {
    FUN_001dc298(param_1,5,2);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x1100) + 0x30);
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_001dc2d8(param_1,5);
    }
  }
  return uVar1;
}


