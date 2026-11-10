/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025dba48; name: FUN_025dba48
 */


ulong FUN_025dba48(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  short sVar10;
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar8 = (long *)(*(long *)(param_1 + 8) + lVar1);
joined_r0x025dbaa8:
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar8);
      }
                    /* WARNING: Could not recover jumptable at 0x025dba8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)(plVar8,param_4);
      return uVar6;
    }
    break;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 != 0)) {
      plVar8 = (long *)(lVar7 + lVar1 + -0x28);
      goto joined_r0x025dbaa8;
    }
    break;
  case 3:
    lVar7 = *(long *)(param_1 + 8);
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar7 + 0x1a);
      sVar10 = *(short *)(lVar7 + 0x1a);
      do {
        sVar3 = *psVar2;
        if (sVar3 == sVar10) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar9) {
            *psVar2 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_025dbb20;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_025dbb20:
          bVar9 = false;
        }
        if (bVar9) {
          plVar8 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
          if (*(long *)(lVar7 + 0x10) == 0) {
            return 0;
          }
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE =
                 *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)plVar8 + lVar1));
          }
          uVar5 = (*UNRECOVERED_JUMPTABLE)((long *)((long)plVar8 + lVar1),param_4);
          (**(code **)(*plVar8 + 0x60))(plVar8);
          return (ulong)(uVar5 & 1);
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
    }
    return 0;
  }
  return 0;
}


