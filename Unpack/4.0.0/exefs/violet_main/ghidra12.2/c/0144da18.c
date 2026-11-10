/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0144da18; name: FUN_0144da18
 */


long FUN_0144da18(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  short sVar7;
  undefined1 auStack_28 [8];
  
  lVar5 = *param_1;
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar7 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0144da78;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0144da78:
        bVar6 = false;
      }
      if (bVar6) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return 0;
        }
        lVar4 = FUN_0104cf4c(lVar5 + 0xe0,auStack_28);
        (**(code **)(*(long *)(lVar5 + -0x28) + 0x60))((long *)(lVar5 + -0x28));
        if (lVar4 == 0) {
          return 0;
        }
        return lVar4;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return 0;
}


