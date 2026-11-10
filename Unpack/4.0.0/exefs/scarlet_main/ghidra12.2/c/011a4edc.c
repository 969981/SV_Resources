/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011a4edc; name: FUN_011a4edc
 */


void FUN_011a4edc(long *param_1,undefined1 *param_2,code *param_3,ulong param_4)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  long local_8;
  
  lVar1 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) != 0) {
      plVar6 = (long *)(*(long *)(param_2 + 8) + lVar1);
joined_r0x011a4f5c:
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *plVar6);
      }
      plVar6 = (long *)(*param_3)();
      plVar6 = (long *)*plVar6;
      *param_1 = (long)plVar6;
      if (plVar6 == (long *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x011a4f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))();
      return;
    }
    break;
  case 1:
    if (*(long *)(param_2 + 8) == 0) {
      *param_1 = 0;
    }
    else {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(*(long *)(param_2 + 8) + lVar1));
      }
      plVar6 = (long *)(*param_3)();
      plVar6 = (long *)*plVar6;
      *param_1 = (long)plVar6;
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x011a4ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))();
        return;
      }
    }
    return;
  case 2:
    if ((*(long *)(param_2 + 8) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar7 != 0)) {
      plVar6 = (long *)(lVar7 + lVar1 + -0x28);
      goto joined_r0x011a4f5c;
    }
    break;
  case 3:
    lVar7 = *(long *)(param_2 + 8);
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
          if (cVar4 != '\0') goto LAB_011a506c;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_011a506c:
          bVar5 = false;
        }
        if (bVar5) {
          if (*(long *)(lVar7 + 0x10) != 0) {
            local_8 = *(long *)(lVar7 + 0x10) + -0x28;
            if ((param_4 & 1) != 0) {
              param_3 = *(code **)(param_3 + *(long *)(local_8 + lVar1));
            }
            plVar6 = (long *)(*param_3)();
            plVar6 = (long *)*plVar6;
            *param_1 = (long)plVar6;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x18))();
            }
            FUN_025a6248(&local_8);
            return;
          }
          break;
        }
        sVar8 = sVar3;
      } while (sVar3 != 0);
    }
    local_8 = 0;
    FUN_025a6248(&local_8);
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}


