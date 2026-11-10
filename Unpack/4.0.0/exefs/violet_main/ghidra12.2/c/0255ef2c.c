/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0255ef2c; name: FUN_0255ef2c
 */


void FUN_0255ef2c(byte *param_1,code *param_2,ulong param_3,void *param_4)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [48];
  
  if (*param_1 < 4) {
    lVar1 = (long)param_3 >> 1;
    switch(*param_1) {
    default:
      if (*(long *)(param_1 + 8) != 0) {
        plVar8 = (long *)(*(long *)(param_1 + 8) + lVar1);
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar8);
        }
        memcpy(auStack_50,param_4,0x30);
        (*param_2)(plVar8,auStack_50);
      }
      break;
    case 2:
      if ((*(long *)(param_1 + 8) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar6 != 0)) {
        plVar8 = (long *)(lVar6 + lVar1 + -0x28);
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar8);
        }
        memcpy(auStack_50,param_4,0x30);
        (*param_2)(plVar8,auStack_50);
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
            if (cVar4 != '\0') goto LAB_0255f0b0;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_0255f0b0:
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
          sVar7 = sVar3;
        } while (sVar3 != 0);
      }
      FUN_02556068(auStack_50 + 0x38);
      return;
    }
  }
  return;
}


