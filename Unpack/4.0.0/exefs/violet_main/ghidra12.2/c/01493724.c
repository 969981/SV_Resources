/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01493724; name: FUN_01493724
 */


void FUN_01493724(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  long local_18;
  
  cVar3 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar3 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 == 0)) {
      return;
    }
    plVar6 = (long *)(lVar7 + lVar1 + -0x28);
  }
  else {
    if (cVar3 == '\x03') {
      lVar7 = *(long *)(param_1 + 8);
      if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar7 + 0x1a);
        sVar8 = *(short *)(lVar7 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar8) {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_014937f0;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_014937f0:
            bVar5 = false;
          }
          if (bVar5) {
            if (*(long *)(lVar7 + 0x10) != 0) {
              local_18 = *(long *)(lVar7 + 0x10) + -0x28;
              if ((param_3 & 1) != 0) {
                UNRECOVERED_JUMPTABLE =
                     *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_18 + lVar1));
              }
              (*UNRECOVERED_JUMPTABLE)(*param_4);
              goto LAB_014937a8;
            }
            break;
          }
          sVar8 = sVar4;
        } while (sVar4 != 0);
      }
      local_18 = 0;
LAB_014937a8:
      FUN_01d6f848(&local_18);
      return;
    }
    if ((cVar3 != '\x01') && (cVar3 != '\0')) {
      return;
    }
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar6 = (long *)(*(long *)(param_1 + 8) + lVar1);
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x01493758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_4);
  return;
}


