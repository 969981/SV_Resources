/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b1d4b0; name: FUN_00b1d4b0
 */


int FUN_00b1d4b0(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_2;
  lVar4 = *(long *)(param_1 + 0x160);
  if ((lVar4 != lVar3) && (*(long *)(param_1 + 0x170) != lVar3)) {
    iVar2 = -(uint)(lVar4 != 0);
    if (*(long *)(param_1 + 0x170) == 0 && lVar4 != 0) {
      iVar2 = 1;
    }
    if (*(long *)(param_1 + 0x180) != lVar3) {
      iVar1 = 2;
      if (*(long *)(param_1 + 0x180) != 0 || iVar2 != -1) {
        iVar1 = iVar2;
      }
      return iVar1;
    }
  }
  return -1;
}


