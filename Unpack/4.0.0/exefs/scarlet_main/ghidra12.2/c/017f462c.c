/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f462c; name: FUN_017f462c
 */


undefined8 FUN_017f462c(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  short sVar4;
  
  if ((*(char *)(param_1 + 0xa0) == '\v') || (*(char *)(param_1 + 0xa1) == '\v')) {
    if (*(short *)(param_1 + 0x9e) == 0x7e) {
      return 0xfffffff4;
    }
    iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
    if (iVar3 == 1) {
      cVar1 = *(char *)(param_1 + 0xac);
      if (((cVar1 == '\v') || (*(char *)(param_1 + 0xad) == '\v')) &&
         (*(short *)(param_1 + 0xaa) == 0x7e)) {
        return 0xfffffff4;
      }
      if (((*(char *)(param_1 + 0xa0) != '\x02') && (*(char *)(param_1 + 0xa1) != '\x02')) &&
         (*(short *)(param_1 + 0x9e) != 0x1a)) {
        return 0;
      }
      if (cVar1 == '\v') {
        if (*(char *)(param_1 + 0xad) == '\x02') {
          return 0xfffffff6;
        }
      }
      else {
        if (cVar1 == '\x02') {
          return 0xfffffff6;
        }
        if (*(char *)(param_1 + 0xad) != '\v') {
          return 0xfffffff6;
        }
      }
      sVar4 = *(short *)(param_1 + 0xaa);
    }
    else {
      if (*(char *)(param_1 + 0xa0) == '\x02') {
        return 0xfffffff6;
      }
      if (*(char *)(param_1 + 0xa1) == '\x02') {
        return 0xfffffff6;
      }
      sVar4 = *(short *)(param_1 + 0x9e);
    }
    if (sVar4 != 0x1a) {
      return 0;
    }
  }
  else {
    iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
    if (iVar3 == 1) {
      if (*(char *)(param_1 + 0xac) == '\v') {
        sVar4 = *(short *)(param_1 + 0xaa);
        if (sVar4 == 0x7e) {
          return 0xfffffff4;
        }
        bVar2 = *(char *)(param_1 + 0xad) == '\x02';
      }
      else {
        if (*(char *)(param_1 + 0xad) != '\v') {
          return 0xfffffff6;
        }
        sVar4 = *(short *)(param_1 + 0xaa);
        if (sVar4 == 0x7e) {
          return 0xfffffff4;
        }
        if (*(char *)(param_1 + 0xac) == '\x02') {
          return 0xfffffff6;
        }
        bVar2 = false;
      }
      if (bVar2) {
        return 0xfffffff6;
      }
      if (sVar4 == 0x1a) {
        return 0xfffffff6;
      }
      return 0;
    }
  }
  return 0xfffffff6;
}


