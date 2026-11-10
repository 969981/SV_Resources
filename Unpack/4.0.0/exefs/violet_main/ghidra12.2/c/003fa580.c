/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003fa580; name: FUN_003fa580
 */


undefined8 FUN_003fa580(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 0x17) {
    uVar1 = FUN_003fa7f0();
    return uVar1;
  }
  if (*(int *)(param_1 + 4) == 0x18) {
    uVar1 = FUN_003f9c40();
    return uVar1;
  }
  return 0;
}


