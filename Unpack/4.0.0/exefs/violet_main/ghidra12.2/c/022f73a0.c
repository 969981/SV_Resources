/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022f73a0; name: FUN_022f73a0
 */


ulong FUN_022f73a0(byte *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  short sVar10;
  long local_8;
  
  if (*param_1 < 4) {
    lVar1 = (long)param_3 >> 1;
    switch(*param_1) {
    default:
      if (*(long *)(param_1 + 8) != 0) {
        plVar7 = (long *)(*(long *)(param_1 + 8) + lVar1);
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar7);
        }
                    /* WARNING: Could not recover jumptable at 0x022f73e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (*UNRECOVERED_JUMPTABLE_00)(plVar7,*param_4,param_5);
        return uVar8;
      }
      break;
    case 2:
      if ((*(long *)(param_1 + 8) == 0) ||
         (lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar9 == 0)) {
        return 0;
      }
      plVar7 = (long *)(lVar9 + lVar1 + -0x28);
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar7);
      }
                    /* WARNING: Could not recover jumptable at 0x022f743c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*UNRECOVERED_JUMPTABLE_00)(plVar7,*param_4,param_5);
      return uVar8;
    case 3:
      lVar9 = *(long *)(param_1 + 8);
      if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar9 + 0x1a);
        sVar10 = *(short *)(lVar9 + 0x1a);
        do {
          sVar3 = *psVar2;
          if (sVar3 == sVar10) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_022f74b0;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_022f74b0:
            bVar5 = false;
          }
          if (bVar5) {
            if (*(long *)(lVar9 + 0x10) != 0) {
              local_8 = *(long *)(lVar9 + 0x10) + -0x28;
              if ((param_3 & 1) != 0) {
                UNRECOVERED_JUMPTABLE_00 =
                     *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_8 + lVar1));
              }
              uVar6 = (*UNRECOVERED_JUMPTABLE_00)((long *)(local_8 + lVar1),*param_4,param_5);
              FUN_022f6958(&local_8);
              return (ulong)(uVar6 & 1);
            }
            break;
          }
          sVar10 = sVar3;
        } while (sVar3 != 0);
      }
      local_8 = 0;
      FUN_022f6958(&local_8);
      return 0;
    }
  }
  return 0;
}


