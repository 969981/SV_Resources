/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011a1638; name: FUN_011a1638
 */


ulong FUN_011a1638(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  short sVar9;
  long local_8;
  
  cVar3 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar3 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar8 != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar8 + lVar1 + -0x28))
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x011a1668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*UNRECOVERED_JUMPTABLE)();
      return uVar7;
    }
  }
  else {
    if (cVar3 == '\x03') {
      lVar8 = *(long *)(param_1 + 8);
      if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar8 + 0x1a);
        sVar9 = *(short *)(lVar8 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar9) {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_011a172c;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_011a172c:
            bVar5 = false;
          }
          if (bVar5) {
            if (*(long *)(lVar8 + 0x10) != 0) {
              local_8 = *(long *)(lVar8 + 0x10) + -0x28;
              if ((param_3 & 1) != 0) {
                UNRECOVERED_JUMPTABLE =
                     *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_8 + lVar1));
              }
              uVar6 = (*UNRECOVERED_JUMPTABLE)();
              FUN_01a36678(&local_8);
              return (ulong)(uVar6 & 1);
            }
            break;
          }
          sVar9 = sVar4;
        } while (sVar4 != 0);
      }
      local_8 = 0;
      FUN_01a36678(&local_8);
      return 0;
    }
    if (cVar3 == '\x01') {
      if (*(long *)(param_1 + 8) != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
        }
                    /* WARNING: Could not recover jumptable at 0x011a16bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*UNRECOVERED_JUMPTABLE)();
        return uVar7;
      }
    }
    else if ((cVar3 == '\0') && (*(long *)(param_1 + 8) != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x011a1698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*UNRECOVERED_JUMPTABLE)();
      return uVar7;
    }
  }
  return 0;
}


