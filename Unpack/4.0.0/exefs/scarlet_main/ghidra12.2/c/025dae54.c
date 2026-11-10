/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025dae54; name: FUN_025dae54
 */


void FUN_025dae54(long *param_1,long *param_2,code *param_3,ulong param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  short sVar7;
  
  lVar4 = *param_2;
  if ((lVar4 != 0) && (*(short *)(lVar4 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar4 + 0x1a);
    sVar7 = *(short *)(lVar4 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_025daec4;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_025daec4:
        bVar6 = false;
      }
      if (bVar6) {
        plVar5 = (long *)(*(long *)(lVar4 + 0x10) + -0x28);
        if (*(long *)(lVar4 + 0x10) != 0) {
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *(long *)((long)plVar5 + ((long)param_4 >> 1)));
          }
          (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x025daf14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x60))(plVar5);
          return;
        }
        break;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(PTR_DAT_047d94a8 + 0x10);
  param_1[1] = 0;
  return;
}


