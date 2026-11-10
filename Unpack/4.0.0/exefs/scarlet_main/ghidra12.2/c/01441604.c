/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01441604; name: FUN_01441604
 */


void FUN_01441604(char *param_1,code *param_2,ulong param_3,void *param_4)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [48];
  
  cVar3 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar3 == '\x02') {
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar6 == 0) {
      return;
    }
    plVar8 = (long *)(lVar6 + lVar1 + -0x28);
  }
  else {
    if (cVar3 == '\x03') {
      lVar6 = *(long *)(param_1 + 8);
      if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar6 + 0x1a);
        sVar7 = *(short *)(lVar6 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar7) {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_01441728;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01441728:
            bVar5 = false;
          }
          if (bVar5) {
            lVar6 = *(long *)(lVar6 + 0x10);
            if (lVar6 != 0) {
              memcpy(auStack_90,param_4,0x30);
              plVar8 = (long *)(lVar6 + -0x28 + lVar1);
              if ((param_3 & 1) != 0) {
                param_2 = *(code **)(param_2 + *plVar8);
              }
              memcpy(auStack_60,auStack_90,0x30);
              (*param_2)(plVar8,auStack_60);
            }
            break;
          }
          sVar7 = sVar4;
        } while (sVar4 != 0);
      }
      FUN_02556068(auStack_50 + 0x38);
      return;
    }
    if ((cVar3 != '\x01') && (cVar3 != '\0')) {
      return;
    }
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar8 = (long *)(*(long *)(param_1 + 8) + lVar1);
  }
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *plVar8);
  }
  memcpy(auStack_50,param_4,0x30);
  (*param_2)(plVar8,auStack_50);
  return;
}


