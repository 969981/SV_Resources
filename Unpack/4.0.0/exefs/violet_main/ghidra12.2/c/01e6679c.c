/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6679c; name: FUN_01e6679c
 */


undefined8 FUN_01e6679c(long *param_1,char *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  
  if (((*param_1 == 0) || (lVar4 = *(long *)(*param_1 + 0x10), lVar4 == 0)) || (*param_2 == -3)) {
    return 0;
  }
  pcVar3 = *(char **)(lVar4 + 0x148);
  pcVar1 = *(char **)(lVar4 + 0x150);
  if (pcVar3 == pcVar1) {
LAB_01e667ec:
    if (pcVar3 == pcVar1) {
      return 0;
    }
    uVar2 = *(undefined8 *)(pcVar3 + 8);
  }
  else {
    do {
      if (*param_2 == *pcVar3) goto LAB_01e667ec;
      pcVar3 = pcVar3 + 0x10;
      uVar2 = 0;
    } while (pcVar1 != pcVar3);
  }
  return uVar2;
}


