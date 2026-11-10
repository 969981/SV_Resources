/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016a1900; name: FUN_016a1900
 */


bool FUN_016a1900(char *param_1)

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


