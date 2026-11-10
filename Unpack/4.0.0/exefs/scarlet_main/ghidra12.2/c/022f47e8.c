/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022f47e8; name: FUN_022f47e8
 */


ulong FUN_022f47e8(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar1 = *(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0);
  if (lVar1 == 0) {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar4 = (lVar1 >> 4) * -0x5555555555555555;
    uVar3 = 0;
    plVar5 = (long *)(*(long *)(param_1 + 0xf0) + 8);
    uVar2 = 1;
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    do {
      if (*plVar5 == *param_2) goto LAB_022f4840;
      uVar3 = uVar3 + 1;
      plVar5 = plVar5 + 6;
    } while (uVar4 != uVar3);
    uVar2 = 0;
    uVar3 = uVar4;
  }
LAB_022f4840:
  return uVar2 | uVar3 << 0x20;
}


