/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02163ea8; name: FUN_02163ea8
 */


void FUN_02163ea8(undefined8 *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  short sVar7;
  undefined1 auStack_28 [8];
  
  lVar6 = *(long *)(param_2 + 0x20);
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
        if (cVar3 != '\0') goto LAB_02163f08;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02163f08:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        lVar5 = FUN_010e1344(lVar6 + 0xe0,auStack_28);
        if (lVar5 != 0) {
          FUN_02142228(*param_1,lVar5);
        }
        (**(code **)(*(long *)(lVar6 + -0x28) + 0x60))((long *)(lVar6 + -0x28));
        return;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


