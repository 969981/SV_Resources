/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0055b77c; name: FUN_0055b77c
 */


undefined8 FUN_0055b77c(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0xd8) != 0) {
    uVar1 = 2;
  }
  FUN_005577ac(*(undefined8 *)(param_1 + 200),uVar1);
  return 1;
}


