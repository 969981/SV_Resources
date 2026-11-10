/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00344110; name: FUN_00344110
 */


byte FUN_00344110(long *param_1,char *param_2,byte param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  if ((param_1 != (long *)0x0) && (lVar3 = *param_1, lVar3 != 0)) {
    piVar2 = (int *)(param_1[1] + 0x10);
    do {
      iVar1 = strcmp(*(char **)(piVar2 + -2),param_2);
      if (iVar1 == 0) {
        if (piVar2[-4] == 1) {
          param_3 = *piVar2 != 0;
        }
        break;
      }
      piVar2 = piVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return param_3 & 1;
}


