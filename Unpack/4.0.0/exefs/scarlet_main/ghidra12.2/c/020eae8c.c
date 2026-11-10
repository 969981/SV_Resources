/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020eae8c; name: FUN_020eae8c
 */


void FUN_020eae8c(long param_1,int *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_3 < 0x3de) {
    uVar1 = param_2[1] + *param_2 * 0x1e;
    if (uVar1 < 0x3de) {
      uVar2 = (ulong)(uVar1 >> 6);
      uVar3 = 1L << ((ulong)uVar1 & 0x3f);
      if ((*(ulong *)(param_1 + ((ulong)(param_3 >> 3) & 0x1ffffff8) + 0x80) >>
           ((ulong)param_3 & 0x3f) & 1) == 0) {
        uVar3 = *(ulong *)(param_1 + uVar2 * 8) & (uVar3 ^ 0xffffffffffffffff);
      }
      else {
        uVar3 = *(ulong *)(param_1 + uVar2 * 8) | uVar3;
      }
      *(ulong *)(param_1 + uVar2 * 8) = uVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_020eaaa0();
}


