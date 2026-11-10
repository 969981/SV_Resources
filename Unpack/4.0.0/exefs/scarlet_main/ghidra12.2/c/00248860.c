/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00248860; name: FUN_00248860
 */


void FUN_00248860(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  TimerEventType aTStack_70 [64];
  
  lVar1 = std::chrono::steady_clock::now();
  lVar4 = *param_1;
  uVar2 = FUN_006c50c4(param_2);
  if ((uVar2 & 1) == 0) {
    do {
      lVar3 = std::chrono::steady_clock::now();
      lVar3 = (lVar4 + lVar1) - lVar3;
      if (lVar3 < 1) {
        return;
      }
      if (lVar3 < *param_3) {
        nn::os::InitializeTimerEvent(aTStack_70,0);
        nn::os::StartOneShotTimerEvent(aTStack_70,lVar3);
        FUN_006c4fe0(aTStack_70);
        nn::os::FinalizeTimerEvent(aTStack_70);
        return;
      }
      nn::os::InitializeTimerEvent(aTStack_70,0);
      nn::os::StartOneShotTimerEvent(aTStack_70,*param_3);
      FUN_006c4fe0(aTStack_70);
      nn::os::FinalizeTimerEvent(aTStack_70);
      uVar2 = FUN_006c50c4(param_2);
    } while ((uVar2 & 1) == 0);
  }
  return;
}


