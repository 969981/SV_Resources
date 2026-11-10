/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015fa10c; name: FUN_015fa10c
 */


void FUN_015fa10c(long param_1,undefined4 *param_2,uint param_3,short *param_4)

{
  short *psVar1;
  long lVar2;
  short *psVar3;
  
  psVar1 = *(short **)(param_1 + 0x4090);
  psVar3 = *(short **)(param_1 + 0x4098);
  if (psVar1 == psVar3) {
LAB_015fa13c:
    if ((((psVar1 != psVar3) && ((char)psVar1[0x44] == '\x02')) && (*(long *)(psVar1 + 0x2c) != 0))
       && ((3 < param_3 && (lVar2 = *(long *)(*(long *)(psVar1 + 0x2c) + 0x10), lVar2 != 0)))) {
      FUN_01ea5cec(*param_2,lVar2 + -0x28);
      return;
    }
  }
  else {
    do {
      if (*psVar1 == *param_4) goto LAB_015fa13c;
      psVar1 = psVar1 + 0xe4;
    } while (psVar3 != psVar1);
  }
  return;
}


