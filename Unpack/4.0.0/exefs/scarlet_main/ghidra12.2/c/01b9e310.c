/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b9e310; name: FUN_01b9e310
 */


void FUN_01b9e310(undefined8 *param_1,long *param_2,code *param_3,ulong param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  short sVar7;
  long local_8;
  
  lVar6 = *param_2;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01b9e378;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01b9e378:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          local_8 = *(long *)(lVar6 + 0x10) + -0x28;
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *(long *)(local_8 + ((long)param_4 >> 1)));
          }
          uVar5 = (*param_3)();
          *param_1 = 0;
          param_1[1] = 0;
          FUN_00e76888(param_1,uVar5);
          FUN_00c7f318(&local_8);
          return;
        }
        break;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  local_8 = 0;
  FUN_00c7f318(&local_8);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


