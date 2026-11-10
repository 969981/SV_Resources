/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00248820; name: FUN_00248820
 */


void FUN_00248820(undefined8 *param_1)

{
  TimerEventType aTStack_50 [64];
  
  nn::os::InitializeTimerEvent(aTStack_50,0);
  nn::os::StartOneShotTimerEvent(aTStack_50,*param_1);
  FUN_006c4fe0(aTStack_50);
  nn::os::FinalizeTimerEvent(aTStack_50);
  return;
}


