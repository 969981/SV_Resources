/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c575c; name: FUN_006c575c
 */


void FUN_006c575c(long *param_1)

{
  ulong uVar1;
  
  *param_1 = (long)(PTR_DAT_047cfab0 + 0x10);
  uVar1 = FUN_006c5c80(param_1 + 1);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x24));
  FUN_006c5b8c(param_1 + 1);
  operator_delete(param_1);
  return;
}


