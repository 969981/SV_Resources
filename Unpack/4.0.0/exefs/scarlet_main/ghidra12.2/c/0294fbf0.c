/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294fbf0; name: FUN_0294fbf0
 */


undefined4 FUN_0294fbf0(byte param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = 3;
  }
  if (param_1 == 7) {
    uVar2 = 1;
  }
  uVar1 = 2;
  if (param_1 < 8) {
    uVar1 = uVar2;
  }
  return uVar1;
}


