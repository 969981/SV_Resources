/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b6c700; name: FUN_02b6c700
 */


void FUN_02b6c700(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1 + 0x5b0);
  while (uVar1 = (*pcVar2)(param_1 + 0x5d0), (uVar1 & 1) != 0) {
    nn::os::SleepThread(16000000);
    pcVar2 = *(code **)(param_1 + 0x5b0);
  }
  nn::oe::LeaveExitRequestHandlingSection();
  do {
    nn::os::SleepThread(16000000);
  } while( true );
}


