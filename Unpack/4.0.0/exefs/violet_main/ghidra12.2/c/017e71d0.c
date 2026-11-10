/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e71d0; name: FUN_017e71d0
 */


long FUN_017e71d0(char *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = *param_1;
  if (cVar2 != '\x01') {
    if (cVar2 == '\x02') {
      if (*(long *)(param_1 + 8) == 0) {
        return 0;
      }
      lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      param_2 = lVar3 + param_2 + -0x28;
      goto LAB_017e71e4;
    }
    if (cVar2 != '\0') {
      return 0;
    }
  }
  lVar3 = *(long *)(param_1 + 8);
  param_2 = lVar3 + param_2;
LAB_017e71e4:
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = param_2;
  }
  return lVar1;
}


