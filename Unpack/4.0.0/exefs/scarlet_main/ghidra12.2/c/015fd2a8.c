/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015fd2a8; name: FUN_015fd2a8
 */


void FUN_015fd2a8(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR_DAT_047e61d8;
  iVar1 = *(int *)(lVar2 + 0x1b8) + -1;
  *(int *)(lVar2 + 0x1b8) = iVar1;
  if ((iVar1 == 0) && (*(char *)(lVar2 + 0x1bc) != '\0')) {
    *(undefined1 *)(lVar2 + 0x1bc) = 0;
    FUN_033431ec();
    return;
  }
  return;
}


