/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0230293c; name: FUN_0230293c
 */


void FUN_0230293c(undefined8 *param_1,long *param_2,code *param_3,ulong param_4)

{
  short *psVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  short sVar9;
  long local_8;
  
  lVar8 = *param_2;
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar9) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_02302994;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02302994:
        bVar6 = false;
      }
      if (bVar6) {
        if (*(long *)(lVar8 + 0x10) != 0) {
          local_8 = *(long *)(lVar8 + 0x10) + -0x28;
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *(long *)(local_8 + ((long)param_4 >> 1)));
          }
          puVar7 = (undefined8 *)(*param_3)();
          uVar2 = puVar7[1];
          uVar3 = puVar7[2];
          *param_1 = *puVar7;
          param_1[1] = uVar2;
          param_1[2] = uVar3;
          FUN_02302320(&local_8);
          return;
        }
        break;
      }
      sVar9 = sVar4;
    } while (sVar4 != 0);
  }
  local_8 = 0;
  FUN_02302320(&local_8);
  *param_1 = 0x40490fdb00000000;
  param_1[1] = 0x40490fdb40490fdb;
  param_1[2] = 0x40490fdb;
  return;
}


