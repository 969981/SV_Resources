/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0255c064; name: FUN_0255c064
 */


void FUN_0255c064(byte *param_1,code *param_2,ulong param_3,void *param_4)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [64];
  
  if (*param_1 < 4) {
    lVar1 = (long)param_3 >> 1;
    switch(*param_1) {
    default:
      if (*(long *)(param_1 + 8) != 0) {
        plVar8 = (long *)(*(long *)(param_1 + 8) + lVar1);
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar8);
        }
        memcpy(auStack_60,param_4,0x40);
        (*param_2)(plVar8,auStack_60);
      }
      break;
    case 2:
      if ((*(long *)(param_1 + 8) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar6 != 0)) {
        plVar8 = (long *)(lVar6 + lVar1 + -0x28);
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar8);
        }
        memcpy(auStack_60,param_4,0x40);
        (*param_2)(plVar8,auStack_60);
      }
      return;
    case 3:
      lVar6 = *(long *)(param_1 + 8);
      if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar6 + 0x1a);
        sVar7 = *(short *)(lVar6 + 0x1a);
        do {
          sVar3 = *psVar2;
          if (sVar3 == sVar7) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_0255c1e8;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_0255c1e8:
            bVar5 = false;
          }
          if (bVar5) {
            lVar6 = *(long *)(lVar6 + 0x10);
            if (lVar6 != 0) {
              memcpy(auStack_b0,param_4,0x40);
              plVar8 = (long *)(lVar6 + -0x28 + lVar1);
              if ((param_3 & 1) != 0) {
                param_2 = *(code **)(param_2 + *plVar8);
              }
              memcpy(auStack_70,auStack_b0,0x40);
              (*param_2)(plVar8,auStack_70);
            }
            break;
          }
          sVar7 = sVar3;
        } while (sVar3 != 0);
      }
      FUN_02556068(auStack_60 + 0x48);
      return;
    }
  }
  return;
}


