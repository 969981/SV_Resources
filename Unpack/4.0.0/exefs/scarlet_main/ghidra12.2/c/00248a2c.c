/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00248a2c; name: FUN_00248a2c
 */


void FUN_00248a2c(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    if (*(long *)(param_1 + 0x60) != param_1) goto LAB_00248a9c;
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_006c43c0(*(long *)(param_1 + 0x68),param_1);
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    if (*(long *)(param_1 + 0xb0) != param_1) {
LAB_00248a9c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(param_1 + 0xb8) != 0) {
      FUN_006c43c0(*(long *)(param_1 + 0xb8),param_1);
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
    nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}


