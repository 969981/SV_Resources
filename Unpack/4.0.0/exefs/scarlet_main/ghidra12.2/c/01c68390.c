/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c68390; name: FUN_01c68390
 */


char FUN_01c68390(byte param_1)

{
  char cVar1;
  long lVar2;
  
  if (param_1 < 2) {
    lVar2 = FUN_01ea1620();
    cVar1 = '\0';
    if (lVar2 != 0) {
      cVar1 = FUN_01ea1728(lVar2,param_1);
      if (cVar1 != '\x02') {
        cVar1 = cVar1 == '\x01';
      }
    }
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}


