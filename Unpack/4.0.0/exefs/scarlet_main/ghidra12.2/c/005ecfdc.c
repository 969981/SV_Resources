/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005ecfdc; name: FUN_005ecfdc
 */


void FUN_005ecfdc(long param_1)

{
  *(undefined **)(param_1 + 0x20) = PTR_DAT_047ceb10 + 0x10;
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x70));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x50));
  FUN_027c2bd0(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  return;
}


