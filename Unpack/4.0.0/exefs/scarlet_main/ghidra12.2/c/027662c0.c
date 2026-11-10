/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027662c0; name: FUN_027662c0
 */


undefined8 FUN_027662c0(long param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x134) & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x130);
    if (iVar1 == 3) {
      *(undefined1 *)(param_1 + 0x336) = 1;
      return 1;
    }
    if (iVar1 == 2) {
      FUN_00c95034();
    }
    else if (iVar1 == 1) {
      FUN_00c95778();
    }
  }
  return 0;
}


