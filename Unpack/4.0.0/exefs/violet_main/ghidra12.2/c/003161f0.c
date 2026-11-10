/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003161f0; name: FUN_003161f0
 */


void FUN_003161f0(uint *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  if (param_1[3] != param_2) {
    while (uVar4 = param_1[2], param_2 < uVar4) {
      uVar9 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)*param_1 * 8);
      plVar8 = (long *)(uVar9 & 0xfffffffffffffffc);
      if (*plVar8 == 0) {
        uVar11 = (ulong)*(byte *)(plVar8 + 1);
        if (plVar8[4] != 0) goto LAB_0031623c;
LAB_00316260:
        uVar11 = uVar11 + *(byte *)(plVar8 + 5) + 0x20;
        if (uVar4 < uVar11) {
LAB_003162d8:
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      else {
        uVar11 = plVar8[1];
        if (plVar8[4] == 0) goto LAB_00316260;
LAB_0031623c:
        uVar11 = uVar11 + plVar8[5] + 0x20;
        if (uVar4 < uVar11) goto LAB_003162d8;
      }
      uVar5 = param_1[6];
      uVar1 = *param_1 + 1;
      param_1[2] = uVar4 - (int)uVar11;
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = uVar1 / uVar5;
      }
      uVar3 = (uint)uVar9 & 3;
      *param_1 = uVar1 - uVar4 * uVar5;
      param_1[1] = param_1[1] - 1;
      if (1 < uVar3) {
        plVar2 = plVar8 + 8;
        do {
          lVar10 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar10 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar10 + -1 == 0) {
          FUN_00376de0(uVar3,plVar8,(int)plVar8[9]);
        }
      }
    }
    param_1[3] = param_2;
  }
  return;
}


