/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026d4714; name: FUN_026d4714
 */


void FUN_026d4714(undefined8 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 param_5)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  
  lVar5 = *param_2;
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar8 = *(short *)(lVar5 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar8) {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_026d476c;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_026d476c:
        bVar7 = false;
      }
      if (bVar7) {
        plVar6 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
        if (*(long *)(lVar5 + 0x10) != 0) {
          plVar2 = (long *)((long)plVar6 + ((long)param_4 >> 1));
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *plVar2);
          }
          (*param_3)(plVar2,param_5);
                    /* WARNING: Could not recover jumptable at 0x026d47b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x60))(plVar6);
          return;
        }
        break;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


