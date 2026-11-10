/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8edac; name: FUN_01f8edac
 */


uint FUN_01f8edac(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  
  lVar6 = *(long *)(param_1 + 0x188);
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
        if (cVar3 != '\0') goto LAB_01f8ee04;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f8ee04:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar6 + 0x10) == 0) {
          return 0;
        }
        plVar8 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        uVar5 = FUN_01f8d2f4(plVar8);
        (**(code **)(*plVar8 + 0x60))(plVar8);
        return uVar5 & 1;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return 0;
}


