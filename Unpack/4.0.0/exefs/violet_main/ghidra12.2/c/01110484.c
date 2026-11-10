/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01110484; name: FUN_01110484
 */


void FUN_01110484(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,char *param_4)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  long *plVar5;
  long lVar6;
  bool bVar7;
  short sVar8;
  
  cVar3 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar3 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar6 == 0)) {
      return;
    }
    plVar5 = (long *)(lVar6 + lVar1 + -0x28);
  }
  else {
    if (cVar3 == '\x03') {
      lVar6 = *(long *)(param_1 + 8);
      if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar6 + 0x1a);
        sVar8 = *(short *)(lVar6 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar8) {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_01110550;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01110550:
            bVar7 = false;
          }
          if (bVar7) {
            plVar5 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
            if (*(long *)(lVar6 + 0x10) == 0) {
              return;
            }
            if ((param_3 & 1) != 0) {
              UNRECOVERED_JUMPTABLE =
                   *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)plVar5 + lVar1));
            }
            (*UNRECOVERED_JUMPTABLE)((long *)((long)plVar5 + lVar1),*param_4 != '\0');
                    /* WARNING: Could not recover jumptable at 0x011105ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar5 + 0x60))(plVar5);
            return;
          }
          sVar8 = sVar4;
        } while (sVar4 != 0);
      }
      return;
    }
    if ((cVar3 != '\x01') && (cVar3 != '\0')) {
      return;
    }
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar5 = (long *)(*(long *)(param_1 + 8) + lVar1);
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x011104bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar5,*param_4);
  return;
}


