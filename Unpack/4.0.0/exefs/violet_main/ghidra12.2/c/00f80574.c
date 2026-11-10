/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f80574; name: FUN_00f80574
 */


undefined1  [16] FUN_00f80574(char *param_1,code *param_2,ulong param_3)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  undefined1 auVar9 [16];
  long local_18;
  
  cVar3 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar3 == '\x02') {
    if (*(long *)(param_1 + 8) == 0) {
      return ZEXT816(0);
    }
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar7 == 0) {
      return ZEXT816(0);
    }
    plVar6 = (long *)(lVar7 + lVar1 + -0x28);
  }
  else {
    if (cVar3 == '\x03') {
      lVar7 = *(long *)(param_1 + 8);
      if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar7 + 0x1a);
        sVar8 = *(short *)(lVar7 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar8) {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_00f80654;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00f80654:
            bVar5 = false;
          }
          if (bVar5) {
            if (*(long *)(lVar7 + 0x10) != 0) {
              local_18 = *(long *)(lVar7 + 0x10) + -0x28;
              if ((param_3 & 1) != 0) {
                param_2 = *(code **)(param_2 + *(long *)(local_18 + lVar1));
              }
              auVar9 = (*param_2)(0);
              FUN_02556068(&local_18);
              return auVar9;
            }
            break;
          }
          sVar8 = sVar4;
        } while (sVar4 != 0);
      }
      local_18 = 0;
      FUN_02556068(&local_18);
      return ZEXT816(0);
    }
    if ((cVar3 != '\x01') && (cVar3 != '\0')) {
      return ZEXT816(0);
    }
    if (*(long *)(param_1 + 8) == 0) {
      return ZEXT816(0);
    }
    plVar6 = (long *)(*(long *)(param_1 + 8) + lVar1);
  }
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *plVar6);
  }
  auVar9 = (*param_2)();
  return auVar9;
}


