/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015f8b6c; name: FUN_015f8b6c
 */


void FUN_015f8b6c(long param_1,void *param_2,ulong param_3,short *param_4)

{
  ulong *puVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = *(short **)(param_1 + 0x4090);
  psVar3 = *(short **)(param_1 + 0x4098);
  if (psVar2 == psVar3) {
LAB_015f8bac:
    if ((((psVar2 != psVar3) && ((char)psVar2[0x44] == '\x02')) && (*(long *)(psVar2 + 0x34) != 0))
       && ((char)psVar2[0xe3] == '\0')) {
      puVar1 = (ulong *)FUN_015f88cc(psVar2 + 0xa4);
      *puVar1 = param_3 & 0xffffffff;
      memcpy(puVar1 + 1,param_2,param_3 & 0xffffffff);
      return;
    }
  }
  else {
    do {
      if (*psVar2 == *param_4) goto LAB_015f8bac;
      psVar2 = psVar2 + 0xe4;
    } while (psVar3 != psVar2);
  }
  return;
}


