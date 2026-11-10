/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


