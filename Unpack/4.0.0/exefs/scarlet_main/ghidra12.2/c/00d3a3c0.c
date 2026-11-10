/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d3a3c0; name: FUN_00d3a3c0
 */


void FUN_00d3a3c0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  nn::os::AcquireWriteLock((ReaderWriterLockType *)(param_1 + 0x278));
  puVar1 = (undefined4 *)FUN_00d3a40c(param_1 + 0x1a8,param_2);
  *puVar1 = param_3;
  nn::os::ReleaseWriteLock((ReaderWriterLockType *)(param_1 + 0x278));
  return;
}


