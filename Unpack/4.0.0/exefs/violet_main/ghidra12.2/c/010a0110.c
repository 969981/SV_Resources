/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010a0110; name: FUN_010a0110
 */


void FUN_010a0110(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(*(long *)(param_1 + 0x38) + 0x708) == 0) {
    return;
  }
  uVar1 = FUN_01445c30(param_2);
  FUN_010a06a0(uVar1,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x708));
  return;
}


