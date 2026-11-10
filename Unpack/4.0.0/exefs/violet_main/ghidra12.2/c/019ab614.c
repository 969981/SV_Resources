/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019ab614; name: FUN_019ab614
 */


undefined1 FUN_019ab614(long *param_1)

{
  long lVar1;
  
  if ((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) {
    lVar1 = 0;
    if (*(long *)(*param_1 + 0x10) != 0) {
      lVar1 = *(long *)(*param_1 + 0x10) + -0x28;
    }
    if (*(char *)(lVar1 + 0x42) != '\0') {
      return *(undefined1 *)(lVar1 + 0x43);
    }
  }
  return 5;
}


