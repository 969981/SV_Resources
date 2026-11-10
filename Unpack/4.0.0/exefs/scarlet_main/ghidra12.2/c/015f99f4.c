/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015f99f4; name: FUN_015f99f4
 */


void FUN_015f99f4(long param_1,undefined8 param_2,int param_3,short *param_4)

{
  short *psVar1;
  short *psVar2;
  
  if (param_3 != 0) {
    psVar1 = *(short **)(param_1 + 0x4090);
    psVar2 = *(short **)(param_1 + 0x4098);
    if (psVar1 == psVar2) {
LAB_015f9a28:
      if (((psVar1 != psVar2) && ((char)psVar1[0x44] == '\x02')) && (*(long *)(psVar1 + 0x38) != 0))
      {
        FUN_01ea5d00();
        return;
      }
    }
    else {
      do {
        if (*psVar1 == *param_4) goto LAB_015f9a28;
        psVar1 = psVar1 + 0xe4;
      } while (psVar2 != psVar1);
    }
  }
  return;
}


