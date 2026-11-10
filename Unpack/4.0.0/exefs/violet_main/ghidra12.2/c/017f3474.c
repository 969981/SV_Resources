/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f3474; name: FUN_017f3474
 */


int FUN_017f3474(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
  cVar1 = *(char *)(param_1 + 0xa0);
  if (iVar2 == 0) {
    if ((cVar1 == '\v') || (*(char *)(param_1 + 0xa1) == '\v')) {
      iVar2 = -0xc;
      if (*(short *)(param_1 + 0x9e) != 0x7e) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = -10;
    }
  }
  else {
    if ((cVar1 == '\v') || (*(char *)(param_1 + 0xa1) == '\v')) {
      iVar3 = -0xc;
      if (*(short *)(param_1 + 0x9e) != 0x7e) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0;
    }
    if (((*(char *)(param_1 + 0xac) == '\v') || (iVar2 = iVar3, *(char *)(param_1 + 0xad) == '\v'))
       && (iVar2 = iVar3 + -0xc, *(short *)(param_1 + 0xaa) != 0x7e)) {
      iVar2 = iVar3;
    }
    if (((cVar1 != '\v') && (*(char *)(param_1 + 0xac) != '\v')) &&
       (*(char *)(param_1 + 0xa1) != '\v')) {
      if (*(char *)(param_1 + 0xad) != '\v') {
        iVar2 = iVar2 + -10;
      }
    }
  }
  return iVar2;
}


