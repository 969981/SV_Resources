/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b69cb0; name: FUN_01b69cb0
 */


void FUN_01b69cb0(byte *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined2 *param_4,
                 undefined4 *param_5,undefined1 *param_6,char *param_7,char *param_8)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  long local_18;
  
  if (3 < *param_1) {
    return;
  }
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar6 = (long *)(*(long *)(param_1 + 8) + lVar1);
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x01b69d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar6,*param_4,*param_5,*param_6,*param_7,*param_8);
    return;
  case 1:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar6 = (long *)(*(long *)(param_1 + 8) + lVar1);
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x01b69d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar6,*param_4,*param_5,*param_6,*param_7,*param_8);
    return;
  case 2:
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 == 0)) {
      return;
    }
    plVar6 = (long *)(lVar7 + lVar1 + -0x28);
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x01b69db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar6,*param_4,*param_5,*param_6,*param_7,*param_8);
    return;
  }
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
        if (cVar4 != '\0') goto LAB_01b69e18;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01b69e18:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_18 = *(long *)(lVar7 + 0x10) + -0x28;
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_18 + lVar1));
          }
          (*UNRECOVERED_JUMPTABLE)
                    ((long *)(local_18 + lVar1),*param_4,*param_5,*param_6,*param_7 != '\0',
                     *param_8 != '\0');
          goto LAB_01b69e74;
        }
        break;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  local_18 = 0;
LAB_01b69e74:
  FUN_01b69c38(&local_18);
  return;
}


