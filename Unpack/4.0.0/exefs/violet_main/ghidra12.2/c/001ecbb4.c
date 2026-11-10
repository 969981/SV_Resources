/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ecbb4; name: FUN_001ecbb4
 */


undefined8 FUN_001ecbb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x100);
  }
  return uVar1;
}


