/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


