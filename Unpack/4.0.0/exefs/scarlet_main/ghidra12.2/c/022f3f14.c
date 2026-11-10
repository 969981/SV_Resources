/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022f3f14; name: FUN_022f3f14
 */


undefined1  [16]
FUN_022f3f14(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  long local_18;
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar6 = (long *)(*(long *)(param_1 + 8) + lVar1);
joined_r0x022f3f74:
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x022f3f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar10 = (*UNRECOVERED_JUMPTABLE)(plVar6,param_4);
      return auVar10;
    }
    break;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 != 0)) {
      plVar6 = (long *)(lVar7 + lVar1 + -0x28);
      goto joined_r0x022f3f74;
    }
    break;
  case 3:
    lVar7 = *(long *)(param_1 + 8);
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar7 + 0x1a);
      sVar8 = *(short *)(lVar7 + 0x1a);
      do {
        sVar3 = *psVar2;
        if (sVar3 == sVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_022f3fe8;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_022f3fe8:
          bVar5 = false;
        }
        if (bVar5) {
          if (*(long *)(lVar7 + 0x10) != 0) {
            local_18 = *(long *)(lVar7 + 0x10) + -0x28;
            if ((param_3 & 1) != 0) {
              UNRECOVERED_JUMPTABLE =
                   *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_18 + lVar1));
            }
            auVar10 = (*UNRECOVERED_JUMPTABLE)((long *)(local_18 + lVar1),param_4);
            uVar11 = auVar10._8_8_;
            uVar9 = auVar10._0_8_;
            FUN_022f2600(&local_18);
            goto LAB_022f403c;
          }
          break;
        }
        sVar8 = sVar3;
      } while (sVar3 != 0);
    }
    local_18 = 0;
    FUN_022f2600(&local_18);
    uVar9 = 0;
    uVar11 = 0;
LAB_022f403c:
    auVar10._8_8_ = uVar11;
    auVar10._0_8_ = uVar9;
    return auVar10;
  }
  return ZEXT816(0);
}


