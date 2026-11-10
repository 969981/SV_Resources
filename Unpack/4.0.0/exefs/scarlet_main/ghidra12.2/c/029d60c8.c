/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d60c8; name: FUN_029d60c8
 */


undefined8 FUN_029d60c8(long param_1)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0x268) == 0) ||
     ((*(byte *)(*(long *)(param_1 + 0x268) + 0x1e8) & 1) == 0)) {
    return 0;
  }
  uVar1 = FUN_022e43e8(*(undefined8 *)(param_1 + 0x268));
  return uVar1;
}


