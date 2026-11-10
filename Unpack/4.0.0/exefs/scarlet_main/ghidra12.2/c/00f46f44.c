/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f46f44; name: FUN_00f46f44
 */


bool FUN_00f46f44(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_40 [2];
  long local_30 [2];
  
  cVar1 = *param_1;
  cVar2 = *param_2;
  if (cVar1 == cVar2) {
    if ((((cVar1 != '\0') && (cVar1 != '\x01')) && (cVar1 != '\x02')) && (cVar1 != '\x03')) {
      return false;
    }
    bVar3 = *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
  }
  else {
    if ((cVar1 == '\x03') || (cVar2 == '\x03')) {
      FUN_00f47188(local_30);
      FUN_00f47188(local_40,param_2);
      FUN_00f47078(local_40);
      FUN_00f47078(local_30);
      return local_30[0] == local_40[0];
    }
    if (cVar1 == '\x02') {
      lVar6 = 0;
      if (*(long *)(param_1 + 8) != 0) {
        lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10);
        lVar6 = 0;
        if (lVar5 != 0) {
          lVar6 = lVar5 + -0x28;
        }
      }
    }
    else if ((cVar1 == '\0') || (cVar1 == '\x01')) {
      lVar6 = *(long *)(param_1 + 8);
    }
    else {
      lVar6 = 0;
    }
    if (cVar2 == '\x02') {
      lVar5 = 0;
      if (*(long *)(param_2 + 8) != 0) {
        lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x10);
        lVar5 = 0;
        if (lVar4 != 0) {
          lVar5 = lVar4 + -0x28;
        }
      }
    }
    else if ((cVar2 == '\0') || (cVar2 == '\x01')) {
      lVar5 = *(long *)(param_2 + 8);
    }
    else {
      lVar5 = 0;
    }
    bVar3 = lVar6 == lVar5;
  }
  return bVar3;
}


