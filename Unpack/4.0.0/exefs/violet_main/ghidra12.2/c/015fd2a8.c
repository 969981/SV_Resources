/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


