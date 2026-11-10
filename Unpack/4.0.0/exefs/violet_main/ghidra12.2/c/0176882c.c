/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0176882c; name: FUN_0176882c
 */


void FUN_0176882c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  if (*(int *)(lVar3 + 0x30) == 4) {
    iVar1 = 1;
  }
  else if ((*(byte *)(param_1 + 0x9e) & 1) == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x150) + 0x230);
    if (*(int *)(lVar2 + 8) == 0) {
      if (*(char *)(lVar3 + 0x710) == '\0') {
        iVar1 = *(int *)(param_1 + 0x90);
        if (iVar1 != 7) goto LAB_01768850;
        iVar1 = 1;
      }
      else {
        if ((*(byte *)(lVar3 + 0x49b) >> 1 & 1) != 0) {
          iVar1 = *(int *)(param_1 + 0x90);
          goto LAB_01768850;
        }
        iVar1 = 7;
      }
      *(int *)(param_1 + 0x90) = iVar1;
    }
    else {
      iVar1 = FUN_017688c8(lVar2,*(long *)(param_1 + 0x150),*(undefined1 *)(param_1 + 0x95));
    }
  }
  else {
    iVar1 = 5;
  }
LAB_01768850:
  *(int *)(*(long *)(param_1 + 0x40) + 0x30) = iVar1;
  return;
}


