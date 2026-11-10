/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0184f82c; name: FUN_0184f82c
 */


void FUN_0184f82c(char *param_1,long param_2,void *param_3)

{
  char cVar1;
  void *__dest;
  long lVar2;
  
  cVar1 = *param_1;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      if (lVar2 == 0) {
        return;
      }
      __dest = (void *)(lVar2 + param_2 + -0x28);
      goto LAB_0184f844;
    }
    if (cVar1 != '\0') {
      return;
    }
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  __dest = (void *)(*(long *)(param_1 + 8) + param_2);
LAB_0184f844:
  memcpy(__dest,param_3,0x708);
  return;
}


