/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01990c48; name: FUN_01990c48
 */


uint FUN_01990c48(void)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  
  plVar6 = (long *)FUN_01990e8c();
  lVar7 = *plVar6;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01990ca4;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01990ca4:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar7 + 0x10) == 0) {
          return 0;
        }
        plVar6 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
        uVar5 = FUN_01df7cc8(plVar6);
        (**(code **)(*plVar6 + 0x60))(plVar6);
        return uVar5 & 1;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return 0;
}


