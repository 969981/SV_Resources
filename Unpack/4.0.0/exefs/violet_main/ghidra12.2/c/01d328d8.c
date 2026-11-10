/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d328d8; name: FUN_01d328d8
 */


bool FUN_01d328d8(long param_1,short param_2)

{
  short sVar1;
  
  sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),0);
  if (((sVar1 == param_2) ||
      (sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),1), sVar1 == param_2)) ||
     (sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),2), sVar1 == param_2)) {
    return true;
  }
  sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),3);
  return sVar1 == param_2;
}


