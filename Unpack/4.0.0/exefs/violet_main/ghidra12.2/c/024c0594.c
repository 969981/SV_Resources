/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024c0594; name: FUN_024c0594
 */


uint FUN_024c0594(long *param_1,code *param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  short sVar7;
  long local_8;
  
  lVar6 = *param_1;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_024c05f8;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_024c05f8:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          local_8 = *(long *)(lVar6 + 0x10) + -0x28;
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *(long *)(local_8 + ((long)param_3 >> 1)));
          }
          uVar5 = (*param_2)();
          FUN_024c0644(&local_8);
          return uVar5 & 1;
        }
        break;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  local_8 = 0;
  FUN_024c0644(&local_8);
  return 0;
}


