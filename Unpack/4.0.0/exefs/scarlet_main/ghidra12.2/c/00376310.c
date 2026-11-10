/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00376310; name: FUN_00376310
 */


ulong FUN_00376310(long *param_1,long *param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar6 = *param_2;
  if ((lVar6 == 0) || (1 < *(uint *)(lVar6 + 8))) {
    if (param_3 != 0) {
      return param_3;
    }
    plVar4 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x80);
    if (plVar4 != (long *)0x0) {
      if (((undefined8 *)*param_2 != (undefined8 *)0x0) &&
         (plVar7 = *(long **)*param_2, plVar7 != (long *)0x0)) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lVar6 = *param_1;
      lVar11 = param_1[3];
      lVar10 = param_1[2];
      plVar4[1] = param_1[1];
      *plVar4 = lVar6;
      plVar4[3] = lVar11;
      plVar4[2] = lVar10;
      lVar10 = param_2[1];
      lVar6 = *param_2;
      lVar12 = param_2[3];
      lVar11 = param_2[2];
      plVar4[8] = 1;
      *(undefined4 *)(plVar4 + 9) = 0;
      plVar4[5] = lVar10;
      plVar4[4] = lVar6;
      plVar4[7] = lVar12;
      plVar4[6] = lVar11;
      FUN_0038db00(plVar4 + 10);
      plVar4[0xe] = 0;
      plVar4[0xf] = 0;
    }
    return (ulong)plVar4 | 2;
  }
  uVar9 = (ulong)*(uint *)(*param_1 + 0x28);
  if (*(uint *)(lVar6 + 8) == 0) {
    uVar5 = FUN_00377f30(uVar9,*(undefined4 *)(lVar6 + 0x28));
    if (3 < uVar5) {
      return uVar5;
    }
    lVar6 = *param_2;
    uVar8 = *(uint *)(PTR_DAT_047cc648 + uVar9 * 4) >> 0x1e |
            *(uint *)(PTR_DAT_047cc648 + uVar9 * 4) << 2;
    if (*(int *)(lVar6 + 8) != 1) {
      if (*(int *)(lVar6 + 8) == 0) {
        uVar3 = *(uint *)(PTR_DAT_047cc648 + (ulong)*(uint *)(lVar6 + 0x28) * 4);
      }
      else {
        uVar3 = FUN_0038cbd0(param_2[2],param_2[1],*(undefined4 *)PTR_DAT_047cc650);
      }
      goto LAB_00376354;
    }
  }
  else {
    uVar8 = *(uint *)(PTR_DAT_047cc648 + uVar9 * 4) >> 0x1e |
            *(uint *)(PTR_DAT_047cc648 + uVar9 * 4) << 2;
  }
  uVar3 = *(uint *)(lVar6 + 0x60);
LAB_00376354:
  uVar9 = FUN_00376e50(param_1,param_2,uVar3 ^ uVar8);
  return uVar9;
}


