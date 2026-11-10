/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02303164; name: FUN_02303164
 */


undefined1  [16] FUN_02303164(long *param_1,code *param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  short sVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  long local_28;
  
  lVar7 = *param_1;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_023031bc;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_023031bc:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_28 = *(long *)(lVar7 + 0x10) + -0x28;
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
          }
          puVar6 = (undefined8 *)(*param_2)();
          uVar9 = *puVar6;
          uVar3 = *(undefined4 *)(puVar6 + 1);
          FUN_02302320(&local_28);
          goto LAB_02303218;
        }
        break;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  local_28 = 0;
  FUN_02302320(&local_28);
  uVar9 = 0x40490fdb00000000;
  uVar3 = 0x40490fdb;
LAB_02303218:
  auVar10._8_4_ = uVar3;
  auVar10._0_8_ = uVar9;
  auVar10._12_4_ = 0;
  return auVar10;
}


