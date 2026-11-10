/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ecbb4; name: FUN_001ecbb4
 */


undefined8 FUN_001ecbb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x100);
  }
  return uVar1;
}


