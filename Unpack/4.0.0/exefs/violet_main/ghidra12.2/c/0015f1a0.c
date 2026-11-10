/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0015f1a0; name: FUN_0015f1a0
 */


void FUN_0015f1a0(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  
  if (0 < param_2) {
    lVar2 = 0;
    iVar1 = 1;
    do {
      lVar2 = (ulong)*(byte *)(param_1 + lVar2) * 4;
      *(int *)(param_3 + lVar2) = *(int *)(param_3 + lVar2) + -1;
      *(int *)(param_4 + lVar2) = *(int *)(param_4 + lVar2) + 1;
      lVar2 = (long)iVar1;
      iVar1 = iVar1 + 1;
    } while (lVar2 < param_2);
  }
  return;
}


