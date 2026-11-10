/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e1fd98; name: FUN_02e1fd98
 */


void FUN_02e1fd98(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x70);
  plVar1 = (long *)(lVar5 + 0x20);
  lVar4 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x28));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02e1fdd8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02e1fdd8:
  FUN_00f32a60(lVar5,param_2,param_2 + 0x148);
  *(undefined8 *)(lVar5 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x02e1fe14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0x40) + 0x1e0))((long *)(param_1 + -0x40));
  return;
}


