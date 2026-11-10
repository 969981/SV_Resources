/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015f8a8c; name: FUN_015f8a8c
 */


void FUN_015f8a8c(long param_1,short *param_2,long *param_3)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short local_20 [4];
  long local_18;
  
  psVar2 = *(short **)(param_1 + 0x4100);
  psVar1 = *(short **)(param_1 + 0x4108);
  psVar3 = psVar2;
  if (psVar2 != psVar1) {
    do {
      if ((*psVar2 == *param_2) && (psVar3 = psVar2, *(long *)(psVar2 + 4) == *param_3)) break;
      psVar2 = psVar2 + 8;
      psVar3 = psVar1;
    } while (psVar1 != psVar2);
  }
  if (psVar1 == psVar3) {
    local_20[0] = *param_2;
    local_18 = *param_3;
    FUN_015f8b18(param_1 + 0x4100,local_20);
  }
  return;
}


