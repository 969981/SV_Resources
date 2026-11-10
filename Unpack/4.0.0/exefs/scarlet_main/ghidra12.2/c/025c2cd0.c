/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025c2cd0; name: FUN_025c2cd0
 */


undefined1  [16] FUN_025c2cd0(long *param_1,code *param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  short sVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  
  lVar4 = *param_1;
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
        if (cVar3 != '\0') goto LAB_025c2d28;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_025c2d28:
        bVar6 = false;
      }
      if (bVar6) {
        plVar5 = (long *)(*(long *)(lVar4 + 0x10) + -0x28);
        if (*(long *)(lVar4 + 0x10) != 0) {
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *(long *)((long)plVar5 + ((long)param_3 >> 1)));
          }
          auVar9 = (*param_2)();
          uVar10 = auVar9._8_8_;
          uVar8 = auVar9._0_8_;
          (**(code **)(*plVar5 + 0x60))(plVar5);
          goto LAB_025c2d78;
        }
        break;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  uVar8 = 0;
  uVar10 = 0;
LAB_025c2d78:
  auVar9._8_8_ = uVar10;
  auVar9._0_8_ = uVar8;
  return auVar9;
}


