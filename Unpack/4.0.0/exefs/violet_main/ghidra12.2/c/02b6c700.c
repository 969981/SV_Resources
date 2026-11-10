/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


