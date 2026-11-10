/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01797e08; name: FUN_01797e08
 */


bool FUN_01797e08(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    if (*(long *)(param_1 + 8) != 0) {
      return *(short *)(*(long *)(param_1 + 8) + 0x1a) == 0;
    }
  }
  else if ((cVar1 == '\x01') || (cVar1 == '\0')) {
    return *(long *)(param_1 + 8) == 0;
  }
  return true;
}


