/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017cd7a8; name: FUN_017cd7a8
 */


bool FUN_017cd7a8(char *param_1)

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


