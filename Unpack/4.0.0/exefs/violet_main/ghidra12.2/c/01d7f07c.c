/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d7f07c; name: FUN_01d7f07c
 */


void FUN_01d7f07c(long *param_1,code *param_2,ulong param_3,char *param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
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
        if (cVar4 != '\0') goto LAB_01d7f0e0;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01d7f0e0:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          local_18 = *(long *)(lVar6 + 0x10) + -0x28;
          plVar2 = (long *)(local_18 + ((long)param_3 >> 1));
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *plVar2);
          }
          (*param_2)(plVar2,*param_4 != '\0');
          goto LAB_01d7f094;
        }
        break;
      }
      sVar7 = sVar3;
    } while (sVar3 != 0);
  }
  local_18 = 0;
LAB_01d7f094:
  FUN_01a36678(&local_18);
  return;
}


