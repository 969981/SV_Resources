/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f5fce8; name: FUN_00f5fce8
 */


ulong FUN_00f5fce8(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  short sVar10;
  
  cVar3 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar3 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar7 + lVar1 + -0x28))
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x00f5fd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)();
      return uVar6;
    }
  }
  else {
    if (cVar3 == '\x03') {
      lVar7 = *(long *)(param_1 + 8);
      if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar7 + 0x1a);
        sVar10 = *(short *)(lVar7 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar10) {
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar9) {
              *psVar2 = sVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_00f5fdd0;
            bVar9 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00f5fdd0:
            bVar9 = false;
          }
          if (bVar9) {
            plVar8 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
            if (*(long *)(lVar7 + 0x10) == 0) {
              return 0;
            }
            if ((param_3 & 1) != 0) {
              UNRECOVERED_JUMPTABLE =
                   *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)plVar8 + lVar1));
            }
            uVar5 = (*UNRECOVERED_JUMPTABLE)();
            (**(code **)(*plVar8 + 0x60))(plVar8);
            return (ulong)(uVar5 & 1);
          }
          sVar10 = sVar4;
        } while (sVar4 != 0);
      }
      return 0;
    }
    if (cVar3 == '\x01') {
      if (*(long *)(param_1 + 8) != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
        }
                    /* WARNING: Could not recover jumptable at 0x00f5fd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*UNRECOVERED_JUMPTABLE)();
        return uVar6;
      }
    }
    else if ((cVar3 == '\0') && (*(long *)(param_1 + 8) != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x00f5fd48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)();
      return uVar6;
    }
  }
  return 0;
}


