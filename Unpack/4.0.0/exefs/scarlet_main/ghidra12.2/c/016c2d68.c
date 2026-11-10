/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c2d68; name: FUN_016c2d68
 */


void FUN_016c2d68(char *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined8 *param_4,
                 undefined4 *param_5)

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
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x016c2dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(*param_4,plVar6,*param_5);
    return;
  }
  if (cVar3 != '\x03') {
    if (((cVar3 != '\x01') && (cVar3 != '\0')) || (*(long *)(param_1 + 8) == 0)) {
      return;
    }
    plVar6 = (long *)(*(long *)(param_1 + 8) + lVar1);
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x016c2db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(*param_4,plVar6,*param_5);
    return;
  }
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
        if (cVar3 != '\0') goto LAB_016c2e68;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_016c2e68:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_18 = *(long *)(lVar7 + 0x10) + -0x28;
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE_00 =
                 *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_18 + lVar1));
          }
          (*UNRECOVERED_JUMPTABLE_00)(*param_4,(long *)(local_18 + lVar1),*param_5);
          goto LAB_016c2e1c;
        }
        break;
      }
      sVar8 = sVar4;
    } while (sVar4 != 0);
  }
  local_18 = 0;
LAB_016c2e1c:
  FUN_01d6f848(&local_18);
  return;
}


