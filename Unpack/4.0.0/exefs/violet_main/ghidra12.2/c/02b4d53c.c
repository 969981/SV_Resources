/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b4d53c; name: FUN_02b4d53c
 */


ulong FUN_02b4d53c(long *param_1)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  short sVar9;
  ulong uVar10;
  
  lVar6 = *param_1;
  if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
LAB_02b4d550:
    uVar8 = 0;
    uVar10 = 0;
  }
  else {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02b4d59c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02b4d59c:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_02b4d550;
        uVar2 = *(uint *)(*(long *)param_1[2] + 0x10);
        plVar7 = (long *)(*(long *)(lVar6 + 0x10) + -8);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        uVar8 = (ulong)uVar2 << 0x20;
        uVar10 = 1;
        break;
      }
      uVar8 = 0;
      uVar10 = 0;
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return uVar10 | uVar8;
}


