/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02492aac; name: FUN_02492aac
 */


void FUN_02492aac(byte *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  
  if (3 < *param_1) {
    return;
  }
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  default:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar6 = (long *)(*(long *)(param_1 + 8) + lVar1);
    break;
  case 2:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar5 == 0) {
      return;
    }
    plVar6 = (long *)(lVar5 + lVar1 + -0x28);
    break;
  case 3:
    lVar5 = *(long *)(param_1 + 8);
    if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar5 + 0x1a);
      sVar8 = *(short *)(lVar5 + 0x1a);
      do {
        sVar3 = *psVar2;
        if (sVar3 == sVar8) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02492b84;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02492b84:
          bVar7 = false;
        }
        if (bVar7) {
          plVar6 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
          if (*(long *)(lVar5 + 0x10) == 0) {
            return;
          }
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE =
                 *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)plVar6 + lVar1));
          }
          (*UNRECOVERED_JUMPTABLE)((long *)((long)plVar6 + lVar1),param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x02492be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x60))(plVar6);
          return;
        }
        sVar8 = sVar3;
      } while (sVar3 != 0);
    }
    return;
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x02492af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar6,param_4,param_5,param_6);
  return;
}


