/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a63f88; name: FUN_01a63f88
 */


undefined1  [16] FUN_01a63f88(long *param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  long local_18;
  
  lVar6 = *param_1;
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
        if (cVar4 != '\0') goto LAB_01a63fe0;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a63fe0:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          local_18 = *(long *)(lVar6 + 0x10) + -0x28;
          plVar2 = (long *)(local_18 + ((long)param_3 >> 1));
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *plVar2);
          }
          auVar9 = (*param_2)(plVar2,*param_4);
          uVar10 = auVar9._8_8_;
          uVar8 = auVar9._0_8_;
          FUN_022eb7d4(&local_18);
          goto LAB_01a64034;
        }
        break;
      }
      sVar7 = sVar3;
    } while (sVar3 != 0);
  }
  local_18 = 0;
  FUN_022eb7d4(&local_18);
  uVar8 = 0;
  uVar10 = 0;
LAB_01a64034:
  auVar9._8_8_ = uVar10;
  auVar9._0_8_ = uVar8;
  return auVar9;
}


