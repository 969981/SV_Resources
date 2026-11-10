/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027023d8; name: FUN_027023d8
 */


uint FUN_027023d8(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar8 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02702430;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02702430:
        bVar7 = false;
      }
      if (bVar7) {
        plVar6 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
        if (*(long *)(lVar5 + 0x10) == 0) {
          return 0;
        }
        uVar4 = FUN_022498a4(plVar6);
        (**(code **)(*plVar6 + 0x60))(plVar6);
        return uVar4 & 1;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return 0;
}


