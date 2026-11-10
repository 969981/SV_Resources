/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026e2d00; name: FUN_026e2d00
 */


undefined8 FUN_026e2d00(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_026d5298();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_026e2d38(param_1);
  return uVar2;
}


