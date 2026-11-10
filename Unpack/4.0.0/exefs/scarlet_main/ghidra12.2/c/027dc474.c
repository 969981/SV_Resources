/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027dc474; name: FUN_027dc474
 */


undefined8 FUN_027dc474(long param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x90) == 0) || (*(char *)(param_1 + 0x98) == '\0')) {
    uVar1 = 0;
  }
  else {
    FUN_01ea06c8(param_1 + 0xa0);
    if (*(char *)(param_1 + 0x98) != '\0') {
      FUN_01e9eb34(param_1 + 0xa0);
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


