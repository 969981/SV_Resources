/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f2be4; name: FUN_034f2be4
 */


void FUN_034f2be4(long param_1,int param_2,int *param_3)

{
  long lVar1;
  long lVar2;
  
  *(byte *)(param_1 + 0x1a4) = *(byte *)(param_1 + 0x1a4) | 1;
  if (*param_3 < param_2) {
    *param_3 = param_2;
  }
  if ((*(int *)(param_1 + 0x1a0) == 0x7fffffff) || (*(int *)(param_1 + 0x1a0) < param_2)) {
    *(int *)(param_1 + 0x1a0) = param_2;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    do {
      lVar1 = *(long *)(lVar2 + 400);
      if ((*(byte *)(lVar1 + 0x50) >> 2 & 1) != 0) {
        *(byte *)(lVar2 + 0x1d8) =
             *(byte *)(lVar2 + 0x1d8) & 0xfb | (*(byte *)(lVar1 + 0x1a4) & 1) << 2;
        if ((*(byte *)(lVar1 + 0x1a4) & 1) == 0) {
          FUN_034f2be4(lVar1,param_2 + 1,param_3);
        }
        else {
          DAT_048b0848 = 1;
        }
      }
      lVar2 = *(long *)(lVar2 + 0x18);
    } while (lVar2 != 0);
  }
  *(byte *)(param_1 + 0x1a4) = *(byte *)(param_1 + 0x1a4) & 0xfe;
  return;
}


