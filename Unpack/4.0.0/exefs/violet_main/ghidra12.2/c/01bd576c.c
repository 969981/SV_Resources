/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bd576c; name: FUN_01bd576c
 */


bool FUN_01bd576c(char *param_1,char *param_2)

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
      FUN_01bd5b94(local_30);
      FUN_01bd5b94(local_40,param_2);
      FUN_01bd5a84(local_40);
      FUN_01bd5a84(local_30);
      return local_30[0] == local_40[0];
    }
    lVar3 = FUN_01bd5c4c();
    lVar4 = FUN_01bd5c4c(param_2);
    bVar2 = lVar3 == lVar4;
  }
  return bVar2;
}


