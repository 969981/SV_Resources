/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c2d50; name: FUN_015c2d50
 */


bool FUN_015c2d50(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 != '\x01') {
    if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
      if (*(long *)(param_1 + 8) == 0) {
        return true;
      }
      return *(short *)(*(long *)(param_1 + 8) + 0x1a) == 0;
    }
    if (cVar1 != '\0') {
      return true;
    }
  }
  return *(long *)(param_1 + 8) == 0;
}


