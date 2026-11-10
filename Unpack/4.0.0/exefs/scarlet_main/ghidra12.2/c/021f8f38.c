/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f8f38; name: FUN_021f8f38
 */


undefined8 FUN_021f8f38(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0x25) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0x26) {
      return 0;
    }
    uVar1 = 1;
  }
  uVar1 = FUN_021f8b88(*(undefined8 *)(param_1 + 0x70),uVar1);
  return uVar1;
}


