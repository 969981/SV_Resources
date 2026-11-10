/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ba00ec; name: FUN_02ba00ec
 */


bool FUN_02ba00ec(long param_1)

{
  if ((*(byte *)(param_1 + 0x438) >> 1 & 1) == 0) {
    if (*(char *)(param_1 + 0x430) != '\0') {
      return true;
    }
    if (*(long *)(param_1 + 0x128) == *(long *)(param_1 + 0x130)) {
      return *(char *)(param_1 + 0x7c2) == '\0';
    }
  }
  return false;
}


