/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d7ad24; name: FUN_01d7ad24
 */


ulong FUN_01d7ad24(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,
                  undefined8 param_4,undefined4 *param_5,undefined4 *param_6)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  short sVar10;
  long local_8;
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    plVar7 = (long *)(*(long *)(param_1 + 8) + lVar1);
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x01d7ad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*UNRECOVERED_JUMPTABLE_00)(*param_5,*param_6,plVar7,param_4);
    return uVar8;
  case 2:
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar9 == 0)) {
      return 0;
    }
    plVar7 = (long *)(lVar9 + lVar1 + -0x28);
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x01d7adc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*UNRECOVERED_JUMPTABLE_00)(*param_5,*param_6,plVar7,param_4);
    return uVar8;
  case 3:
    break;
  default:
    return 0;
  }
  lVar9 = *(long *)(param_1 + 8);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01d7ae3c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01d7ae3c:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar9 + 0x10) != 0) {
          local_8 = *(long *)(lVar9 + 0x10) + -0x28;
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE_00 =
                 *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_8 + lVar1));
          }
          uVar6 = (*UNRECOVERED_JUMPTABLE_00)(*param_5,*param_6,(long *)(local_8 + lVar1),param_4);
          FUN_01a71fc0(&local_8);
          return (ulong)(uVar6 & 1);
        }
        break;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  local_8 = 0;
  FUN_01a71fc0(&local_8);
  return 0;
}


