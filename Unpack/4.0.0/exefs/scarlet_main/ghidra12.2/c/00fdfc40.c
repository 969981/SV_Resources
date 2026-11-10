/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fdfc40; name: FUN_00fdfc40
 */


void FUN_00fdfc40(long param_1)

{
  long local_30;
  long *plStack_28;
  long local_8;
  
  local_8 = (*(ulong *)(param_1 + 0x80) >> 2) * (*(ulong *)(param_1 + 0x88) >> 2) * 8;
  plStack_28 = &local_8;
  local_30 = param_1;
  FUN_00fdfe2c(*(undefined8 *)(param_1 + 0x60),&local_30);
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}


