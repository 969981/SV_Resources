/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022898b8; name: FUN_022898b8
 */


undefined8 FUN_022898b8(undefined1 *param_1,code *param_2,ulong param_3)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  short sVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [128];
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(*(long *)(param_1 + 8) + lVar1));
    }
    puVar6 = (undefined8 *)(*param_2)();
    return *puVar6;
  case 2:
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 == 0)) {
      uVar9 = 0;
    }
    else {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(lVar7 + lVar1 + -0x28));
      }
      puVar6 = (undefined8 *)(*param_2)();
      uVar9 = *puVar6;
    }
    return uVar9;
  case 3:
    break;
  default:
    return 0;
  }
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
        if (cVar4 != '\0') goto LAB_022899c4;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_022899c4:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *(long *)(*(long *)(lVar7 + 0x10) + -0x28 + lVar1));
          }
          puVar6 = (undefined8 *)(*param_2)();
          uVar9 = *puVar6;
          FUN_02289a20(auStack_90 + 0x88);
          return uVar9;
        }
        break;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  FUN_02289a20(auStack_90 + 0x88);
  return 0;
}


