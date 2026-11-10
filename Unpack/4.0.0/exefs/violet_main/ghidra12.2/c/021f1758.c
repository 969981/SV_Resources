/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f1758; name: FUN_021f1758
 */


undefined8 FUN_021f1758(long param_1)

{
  short sVar1;
  undefined8 uVar2;
  
  sVar1 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  if (sVar1 == 0xea) {
    uVar2 = FUN_0152f880(*(undefined8 *)(param_1 + 0x70));
    return uVar2;
  }
  return 0;
}


