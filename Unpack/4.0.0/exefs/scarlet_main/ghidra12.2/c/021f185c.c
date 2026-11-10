/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f185c; name: FUN_021f185c
 */


undefined8 FUN_021f185c(long param_1)

{
  short sVar1;
  undefined8 uVar2;
  
  sVar1 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  if (sVar1 == 0xd3) {
    sVar1 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
    if (sVar1 == 1) {
      uVar2 = FUN_0152f880(*(undefined8 *)(param_1 + 0x70));
      return uVar2;
    }
  }
  return 0;
}


