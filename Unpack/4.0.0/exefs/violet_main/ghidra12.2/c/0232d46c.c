/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0232d46c; name: FUN_0232d46c
 */


undefined8 FUN_0232d46c(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  short sVar8;
  long local_8;
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) != 0) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x0232d4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)();
      return uVar6;
    }
    break;
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x0232d4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)();
      return uVar6;
    }
    break;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar7 + lVar1 + -0x28))
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0232d4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)();
      return uVar6;
    }
    break;
  case 3:
    lVar7 = *(long *)(param_1 + 8);
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar7 + 0x1a);
      sVar8 = *(short *)(lVar7 + 0x1a);
      do {
        sVar3 = *psVar2;
        if (sVar3 == sVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_0232d564;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0232d564:
          bVar5 = false;
        }
        if (bVar5) {
          if (*(long *)(lVar7 + 0x10) != 0) {
            local_8 = *(long *)(lVar7 + 0x10) + -0x28;
            if ((param_3 & 1) != 0) {
              UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_8 + lVar1))
              ;
            }
            uVar6 = (*UNRECOVERED_JUMPTABLE)();
            FUN_0232c0dc(&local_8);
            return uVar6;
          }
          break;
        }
        sVar8 = sVar3;
      } while (sVar3 != 0);
    }
    local_8 = 0;
    FUN_0232c0dc(&local_8);
    return 0;
  }
  return 0;
}


