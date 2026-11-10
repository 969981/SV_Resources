/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f72334; name: FUN_00f72334
 */


undefined1  [16] FUN_00f72334(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  
  cVar3 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar3 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar5 != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar5 + lVar1 + -0x28))
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x00f72364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar10 = (*UNRECOVERED_JUMPTABLE)();
      return auVar10;
    }
  }
  else {
    if (cVar3 == '\x03') {
      lVar5 = *(long *)(param_1 + 8);
      if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar5 + 0x1a);
        sVar8 = *(short *)(lVar5 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar8) {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_00f72424;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00f72424:
            bVar7 = false;
          }
          if (bVar7) {
            plVar6 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
            if (*(long *)(lVar5 + 0x10) != 0) {
              if ((param_3 & 1) != 0) {
                UNRECOVERED_JUMPTABLE =
                     *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)plVar6 + lVar1));
              }
              auVar10 = (*UNRECOVERED_JUMPTABLE)();
              uVar11 = auVar10._8_8_;
              uVar9 = auVar10._0_8_;
              (**(code **)(*plVar6 + 0x60))(plVar6);
              goto LAB_00f723e0;
            }
            break;
          }
          sVar8 = sVar4;
        } while (sVar4 != 0);
      }
      uVar9 = 0;
      uVar11 = 0;
LAB_00f723e0:
      auVar10._8_8_ = uVar11;
      auVar10._0_8_ = uVar9;
      return auVar10;
    }
    if (cVar3 == '\x01') {
      if (*(long *)(param_1 + 8) != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
        }
                    /* WARNING: Could not recover jumptable at 0x00f723b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar10 = (*UNRECOVERED_JUMPTABLE)();
        return auVar10;
      }
    }
    else if ((cVar3 == '\0') && (*(long *)(param_1 + 8) != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x00f72394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar10 = (*UNRECOVERED_JUMPTABLE)();
      return auVar10;
    }
  }
  return ZEXT816(0);
}


