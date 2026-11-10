/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


