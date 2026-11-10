/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02639e84; name: FUN_02639e84
 */


long FUN_02639e84(char *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = *param_1;
  if (cVar2 == '\x02') {
    if (*(long *)(param_1 + 8) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      lVar1 = 0;
      if (lVar3 != 0) {
        lVar1 = lVar3 + -0x28;
      }
      return lVar1;
    }
  }
  else if ((cVar2 == '\x01') || (cVar2 == '\0')) {
    return *(long *)(param_1 + 8);
  }
  return 0;
}


