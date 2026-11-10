/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a8b02c; name: FUN_01a8b02c
 */


void FUN_01a8b02c(long *param_1,code *param_2,ulong param_3,void *param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [64];
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
        if (cVar4 != '\0') goto LAB_01a8b0a0;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a8b0a0:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          lVar6 = *(long *)(lVar6 + 0x10) + -0x28;
          local_18 = lVar6;
          memcpy(auStack_b0,param_4,0x40);
          plVar2 = (long *)(lVar6 + ((long)param_3 >> 1));
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *plVar2);
          }
          memcpy(auStack_70,auStack_b0,0x40);
          (*param_2)(plVar2,auStack_70);
          goto LAB_01a8b04c;
        }
        break;
      }
      sVar7 = sVar3;
    } while (sVar3 != 0);
  }
  local_18 = 0;
LAB_01a8b04c:
  FUN_01bf85a4(&local_18);
  return;
}


