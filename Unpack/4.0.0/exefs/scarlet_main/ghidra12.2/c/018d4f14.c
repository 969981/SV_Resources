/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018d4f14; name: FUN_018d4f14
 */


undefined1  [16] FUN_018d4f14(long *param_1,code *param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  long local_28;
  
  lVar5 = *param_1;
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar6 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar6) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_018d4f90;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_018d4f90:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          local_28 = *(long *)(lVar5 + 0x10) + -0x28;
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
          }
          auVar9 = (*param_2)();
          uVar7 = auVar9._0_8_;
          uVar8 = auVar9._8_8_ & 0xffffffff;
          FUN_01d6c2d4(&local_28);
          goto LAB_018d4f40;
        }
        break;
      }
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  local_28 = 0;
  FUN_01d6c2d4(&local_28);
  uVar7 = 0;
  uVar8 = 0;
LAB_018d4f40:
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = uVar7;
  return auVar9;
}


