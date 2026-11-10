/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c40e00; name: FUN_00c40e00
 */


int FUN_00c40e00(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (*(int **)(param_1 + 0x58) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int **)(param_1 + 0x58);
  }
  lVar3 = *(long *)(param_1 + 0x50);
  param_1 = param_1 + 0x48;
  if (lVar3 != param_1) {
    iVar1 = FUN_00c40e00(*(undefined8 *)(lVar3 + 0x10));
    lVar3 = *(long *)(lVar3 + 8);
    iVar2 = iVar1 + iVar2;
    if (lVar3 != param_1) {
      iVar1 = FUN_00c40e00(*(undefined8 *)(lVar3 + 0x10));
      iVar2 = iVar1 + iVar2;
      for (lVar3 = *(long *)(lVar3 + 8); lVar3 != param_1; lVar3 = *(long *)(lVar3 + 8)) {
        iVar1 = FUN_00c40e00(*(undefined8 *)(lVar3 + 0x10));
        iVar2 = iVar1 + iVar2;
      }
    }
  }
  return iVar2;
}


