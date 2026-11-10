/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b6b03c; name: FUN_01b6b03c
 */


bool FUN_01b6b03c(char *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long local_40 [2];
  long local_30 [2];
  
  cVar1 = *param_1;
  if (cVar1 == *param_2) {
    switch(cVar1) {
    case '\0':
    case '\x01':
    case '\x02':
    case '\x03':
      bVar2 = *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
      break;
    default:
      return false;
    }
  }
  else {
    if ((cVar1 == '\x03') || (*param_2 == '\x03')) {
      FUN_01b6d10c(local_30);
      FUN_01b6d10c(local_40,param_2);
      FUN_01b6cffc(local_40);
      FUN_01b6cffc(local_30);
      return local_30[0] == local_40[0];
    }
    lVar3 = FUN_01b6d1c4();
    lVar4 = FUN_01b6d1c4(param_2);
    bVar2 = lVar3 == lVar4;
  }
  return bVar2;
}


