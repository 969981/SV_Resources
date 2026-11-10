/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b4d228; name: FUN_02b4d228
 */


ulong FUN_02b4d228(long *param_1,ulong param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  short sVar9;
  
  lVar7 = *param_1;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar9 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02b4d284;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02b4d284:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar7 + 0x10) == 0) {
          return 0;
        }
        lVar5 = *(long *)param_1[2];
        if (((param_2 < (ulong)(((long *)param_1[2])[1] - lVar5 >> 4)) &&
            (*(char *)(lVar5 + param_2 * 0x10) == '\a')) &&
           (lVar5 = *(long *)(lVar5 + param_2 * 0x10 + 8), lVar5 != 0)) {
          uVar6 = (ulong)*(uint *)(lVar5 + 0x10) << 0x20;
          uVar8 = 1;
        }
        else {
          uVar6 = 0;
          uVar8 = 0;
        }
        (**(code **)(*(long *)(*(long *)(lVar7 + 0x10) + -8) + 0x18))();
        return uVar8 | uVar6;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  return 0;
}


