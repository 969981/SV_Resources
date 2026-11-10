/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f9c60; name: FUN_003f9c60
 */


undefined8 FUN_003f9c60(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 4) == 0x18) {
    uVar1 = FUN_003fa690();
    return uVar1;
  }
  return 0;
}


