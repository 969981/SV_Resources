/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c41e0; name: FUN_007c41e0
 */


void FUN_007c41e0(char *param_1,long param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_3 < param_1) {
    if (*param_3 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        lVar5 = uVar4 + 1;
        uVar4 = uVar4 + 1;
      } while (param_3[lVar5] != '\0');
      if ((long)uVar4 < 0) {
        return;
      }
    }
    pcVar1 = param_1 + uVar4;
    pcVar3 = param_3 + uVar4;
    lVar5 = ~uVar4 + param_2;
    do {
      if (pcVar1 <= param_1 + param_2 + -1) {
        if (lVar5 == 0) {
          param_1[param_2 + -1] = '\0';
        }
        else {
          *pcVar1 = *pcVar3;
        }
      }
      pcVar3 = pcVar3 + -1;
      pcVar1 = pcVar1 + -1;
      lVar5 = lVar5 + 1;
    } while (param_3 <= pcVar3);
  }
  else if (param_3 != param_1) {
    if ((param_1 + param_2 + -1 != param_1) && (cVar2 = *param_3, cVar2 != '\0')) {
      param_2 = param_2 + -2;
      pcVar1 = param_1;
      do {
        param_3 = param_3 + 1;
        param_1 = pcVar1 + 1;
        *pcVar1 = cVar2;
        cVar2 = *param_3;
        if (param_2 == 0) break;
        param_2 = param_2 + -1;
        pcVar1 = param_1;
      } while (cVar2 != '\0');
    }
    *param_1 = '\0';
    return;
  }
  return;
}


