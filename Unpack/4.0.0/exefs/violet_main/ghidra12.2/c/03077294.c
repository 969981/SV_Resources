/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03077294; name: FUN_03077294
 */


void FUN_03077294(long param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_3) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + *param_2;
      iVar2 = iVar2 + 1;
      *(undefined2 *)(*(long *)(param_1 + 0x50) + (long)iVar1 * 2) = 0;
    } while (param_3 != iVar2);
  }
  if (0 < param_5) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + *param_4;
      iVar2 = iVar2 + 1;
      *(undefined2 *)(*(long *)(param_1 + 0x50) + (long)iVar1 * 2) = 0;
    } while (param_5 != iVar2);
  }
  DataMemoryBarrier(2,3);
  return;
}


