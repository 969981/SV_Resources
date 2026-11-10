/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02139484; name: FUN_02139484
 */


ulong FUN_02139484(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  
  lVar1 = *(long *)(param_1 + 0x448) - *(long *)(param_1 + 0x440);
  if (lVar1 != 0) {
    uVar3 = (lVar1 >> 4) * 0x6db6db6db6db6db7;
    uVar2 = 0;
    plVar4 = (long *)(*(long *)(param_1 + 0x440) + 0x38);
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    do {
      if (*plVar4 == *param_2) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      plVar4 = plVar4 + 0xe;
    } while (uVar3 != uVar2);
  }
  return 0;
}


