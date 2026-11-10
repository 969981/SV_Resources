/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017341a8; name: FUN_017341a8
 */


int FUN_017341a8(long param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0xc)) {
    piVar1 = (int *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0x28) != 0) {
      piVar1 = (int *)(param_1 + 0x20);
    }
    return *piVar1 + -1;
  }
  lVar2 = 0x20;
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar2 = 0x24;
  }
  iVar3 = 0;
  if (*(int *)(param_1 + lVar2) != 0) {
    iVar3 = (*(int *)(param_1 + 8) + -1) / *(int *)(param_1 + lVar2);
  }
  return iVar3;
}


