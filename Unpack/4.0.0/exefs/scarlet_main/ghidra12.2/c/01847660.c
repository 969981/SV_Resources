/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01847660; name: FUN_01847660
 */


bool FUN_01847660(char *param_1)

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


