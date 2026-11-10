/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b4d494; name: FUN_02b4d494
 */


ulong FUN_02b4d494(long *param_1)

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
LAB_02b4d4a8:
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
        if (cVar4 != '\0') goto LAB_02b4d4f4;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02b4d4f4:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_02b4d4a8;
        plVar7 = (long *)(*(long *)(lVar6 + 0x10) + -8);
        uVar2 = *(uint *)(param_1[2] + 0x10);
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


