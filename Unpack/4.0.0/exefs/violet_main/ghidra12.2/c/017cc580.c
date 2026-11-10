/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017cc580; name: FUN_017cc580
 */


bool FUN_017cc580(char *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *param_1;
  if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
    if (*(long *)(param_1 + 8) == 0) {
      return true;
    }
    bVar2 = *(short *)(*(long *)(param_1 + 8) + 0x1a) == 0;
  }
  else {
    if ((cVar1 != '\x01') && (cVar1 != '\0')) {
      return true;
    }
    bVar2 = *(long *)(param_1 + 8) == 0;
  }
  return bVar2;
}


