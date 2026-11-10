/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02940b40; name: FUN_02940b40
 */


undefined2 FUN_02940b40(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x36a) == '\0') {
    return 0;
  }
  *(undefined1 *)(lVar1 + 0x36a) = 0;
  return *(undefined2 *)(lVar1 + 0x368);
}


