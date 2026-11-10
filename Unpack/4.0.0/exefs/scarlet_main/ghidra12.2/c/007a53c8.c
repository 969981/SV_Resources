/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a53c8; name: FUN_007a53c8
 */


void FUN_007a53c8(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d0b68 + 0x48;
  *param_1 = (long)(PTR_DAT_047d0b68 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[0xb] = 0;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xc));
  FUN_00796c28(param_1 + 1);
  return;
}


