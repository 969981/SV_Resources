/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023161a0; name: FUN_023161a0
 */


void FUN_023161a0(long *param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long local_18;
  
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
        if (cVar3 != '\0') goto LAB_02316200;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02316200:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          local_18 = *(long *)(lVar5 + 0x10) + -0x28;
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *(long *)(local_18 + ((long)param_3 >> 1)));
          }
          (*param_2)(*param_4);
          goto LAB_023161b8;
        }
        break;
      }
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  local_18 = 0;
LAB_023161b8:
  FUN_02315ee0(&local_18);
  return;
}


