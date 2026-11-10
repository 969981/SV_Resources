/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


