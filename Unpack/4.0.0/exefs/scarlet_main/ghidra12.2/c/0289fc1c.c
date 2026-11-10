/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289fc1c; name: FUN_0289fc1c
 */


void FUN_0289fc1c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    do {
      lVar2 = lVar2 + -1;
      FUN_0175be68(lVar1);
      lVar1 = lVar1 + 0x10;
    } while (lVar2 != 0);
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_0175c66c(param_1,*(undefined8 *)(param_1 + 0x20));
  return;
}


