/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f19e0; name: FUN_021f19e0
 */


void FUN_021f19e0(long param_1,undefined4 param_2)

{
  short sVar1;
  
  sVar1 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  if (sVar1 == 0x3d0) {
    FUN_00eec030(*(undefined8 *)(param_1 + 0x70),param_2);
    return;
  }
  return;
}


