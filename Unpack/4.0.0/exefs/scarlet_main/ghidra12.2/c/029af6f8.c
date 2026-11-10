/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029af6f8; name: FUN_029af6f8
 */


ulong FUN_029af6f8(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  plVar3 = *(long **)(param_1 + 0x88);
  uVar4 = (*(long *)(param_1 + 0x90) - (long)plVar3 >> 3) * 0xf83e0f83e0f83e1;
  if ((int)uVar4 == 0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    uVar1 = 1;
    do {
      if (*plVar3 == *param_2) goto LAB_029af75c;
      uVar2 = uVar2 + 1;
      plVar3 = plVar3 + 0x21;
    } while ((uVar4 & 0xffffffff) != uVar2);
    uVar1 = 0;
    uVar2 = uVar4;
  }
LAB_029af75c:
  return uVar1 | uVar2 << 0x20;
}


