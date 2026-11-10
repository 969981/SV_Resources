/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a401d4; name: FUN_01a401d4
 */


void FUN_01a401d4(undefined8 *param_1,long *param_2,code *param_3,ulong param_4,undefined8 *param_5)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  long local_8;
  
  lVar6 = *param_2;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar7) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01a40230;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a40230:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          local_8 = *(long *)(lVar6 + 0x10) + -0x28;
          plVar2 = (long *)(local_8 + ((long)param_4 >> 1));
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *plVar2);
          }
          (*param_3)(param_1,plVar2,*param_5);
          FUN_02353c24(&local_8);
          return;
        }
        break;
      }
      sVar7 = sVar3;
    } while (sVar3 != 0);
  }
  local_8 = 0;
  FUN_02353c24(&local_8);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03c886bc;
  return;
}


