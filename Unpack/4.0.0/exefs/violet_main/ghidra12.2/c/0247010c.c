/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0247010c; name: FUN_0247010c
 */


void FUN_0247010c(long *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  short sVar7;
  
  lVar4 = *param_1;
  if ((lVar4 != 0) && (*(short *)(lVar4 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar4 + 0x1a);
    sVar7 = *(short *)(lVar4 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02470160;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02470160:
        bVar6 = false;
      }
      if (bVar6) {
        plVar5 = (long *)(*(long *)(lVar4 + 0x10) + -0x28);
        if (*(long *)(lVar4 + 0x10) == 0) {
          return;
        }
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *(long *)((long)plVar5 + ((long)param_3 >> 1)));
        }
        (*param_2)(*param_4);
                    /* WARNING: Could not recover jumptable at 0x024701b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x60))(plVar5);
        return;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


