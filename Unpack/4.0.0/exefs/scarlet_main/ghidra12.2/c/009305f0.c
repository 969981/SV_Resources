/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 009305f0; name: FUN_009305f0
 */


void FUN_009305f0(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (0x1f < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_01b3e3a0();
  }
  uVar1 = 1L << ((ulong)param_2 & 0x3f);
  if ((param_3 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 8) & (uVar1 ^ 0xffffffffffffffff);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 8) | uVar1;
  }
  *(ulong *)(param_1 + 8) = uVar1;
  return;
}


