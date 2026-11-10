/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01810f74; name: FUN_01810f74
 */


bool FUN_01810f74(char *param_1,char *param_2)

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
    switch(cVar1) {
    case '\0':
    case '\x01':
    case '\x02':
    case '\x03':
      bVar3 = *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
      break;
    default:
      return false;
    }
  }
  else {
    if ((cVar1 == '\x03') || (cVar2 == '\x03')) {
      FUN_018111bc(local_30);
      FUN_018111bc(local_40,param_2);
      FUN_018110ac(local_40);
      FUN_018110ac(local_30);
      return local_30[0] == local_40[0];
    }
    if ((cVar1 == '\0') || (cVar1 == '\x01')) {
      lVar6 = *(long *)(param_1 + 8);
    }
    else if (cVar1 == '\x02') {
      lVar6 = 0;
      if (*(long *)(param_1 + 8) != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10);
        lVar6 = 0;
        if (lVar4 != 0) {
          lVar6 = lVar4 + -0x28;
        }
      }
    }
    else {
      lVar6 = 0;
    }
    if ((cVar2 == '\0') || (cVar2 == '\x01')) {
      lVar4 = *(long *)(param_2 + 8);
    }
    else if (cVar2 == '\x02') {
      lVar4 = 0;
      if (*(long *)(param_2 + 8) != 0) {
        lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x10);
        lVar4 = 0;
        if (lVar5 != 0) {
          lVar4 = lVar5 + -0x28;
        }
      }
    }
    else {
      lVar4 = 0;
    }
    bVar3 = lVar6 == lVar4;
  }
  return bVar3;
}


