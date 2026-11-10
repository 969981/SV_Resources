/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


