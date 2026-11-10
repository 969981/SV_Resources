/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025b6374; name: FUN_025b6374
 */


undefined1  [16] FUN_025b6374(long *param_1,code *param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  short sVar7;
  undefined8 uVar8;
  undefined8 uVar10;
  undefined1 auVar9 [16];
  long local_18;
  
  lVar6 = *param_1;
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
        if (cVar3 != '\0') goto LAB_025b63c8;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_025b63c8:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          local_18 = *(long *)(lVar6 + 0x10) + -0x28;
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *(long *)(local_18 + ((long)param_3 >> 1)));
          }
          puVar5 = (undefined8 *)(*param_2)();
          uVar10 = puVar5[1];
          uVar8 = *puVar5;
          FUN_025b6164(&local_18);
          goto LAB_025b641c;
        }
        break;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  local_18 = 0;
  FUN_025b6164(&local_18);
  uVar8 = 0;
  uVar10 = 0;
LAB_025b641c:
  auVar9._8_8_ = uVar10;
  auVar9._0_8_ = uVar8;
  return auVar9;
}


