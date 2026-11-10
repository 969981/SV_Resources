/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ca3fc8; name: FUN_01ca3fc8
 */


bool FUN_01ca3fc8(char *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *param_1;
  if (cVar1 == '\x02') {
    if (*(long *)(param_1 + 8) == 0) {
      return false;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar2 == 0) {
      return false;
    }
    cVar1 = *(char *)(lVar2 + param_2 + -0x28);
  }
  else {
    if (((cVar1 != '\x01') && (cVar1 != '\0')) || (*(long *)(param_1 + 8) == 0)) {
      return false;
    }
    cVar1 = *(char *)(*(long *)(param_1 + 8) + param_2);
  }
  return cVar1 != '\0';
}


