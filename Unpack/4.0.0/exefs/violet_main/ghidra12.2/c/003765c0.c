/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003765c0; name: FUN_003765c0
 */


ulong FUN_003765c0(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar5 = *param_2;
  if ((lVar5 == 0) || (1 < *(uint *)(lVar5 + 8))) {
    plVar8 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x80);
    if (plVar8 != (long *)0x0) {
      if (((undefined8 *)*param_2 != (undefined8 *)0x0) &&
         (plVar6 = *(long **)*param_2, plVar6 != (long *)0x0)) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lVar5 = *param_1;
      lVar12 = param_1[3];
      lVar11 = param_1[2];
      plVar8[1] = param_1[1];
      *plVar8 = lVar5;
      plVar8[3] = lVar12;
      plVar8[2] = lVar11;
      lVar11 = param_2[1];
      lVar5 = *param_2;
      lVar13 = param_2[3];
      lVar12 = param_2[2];
      plVar8[8] = 1;
      *(undefined4 *)(plVar8 + 9) = 0;
      plVar8[5] = lVar11;
      plVar8[4] = lVar5;
      plVar8[7] = lVar13;
      plVar8[6] = lVar12;
      FUN_0038db00(plVar8 + 10);
      plVar8[0xe] = 0;
      plVar8[0xf] = 0;
    }
    uVar4 = (ulong)plVar8 | 2;
    goto LAB_00376684;
  }
  uVar10 = (ulong)*(uint *)(*param_1 + 0x28);
  if (*(uint *)(lVar5 + 8) == 0) {
    uVar4 = FUN_00377f30(uVar10,*(undefined4 *)(lVar5 + 0x28));
    if (3 < uVar4) goto LAB_00376684;
    lVar5 = *param_2;
    uVar9 = *(uint *)(PTR_DAT_047cc648 + uVar10 * 4) >> 0x1e |
            *(uint *)(PTR_DAT_047cc648 + uVar10 * 4) << 2;
    if (*(int *)(lVar5 + 8) == 1) goto LAB_00376604;
    if (*(int *)(lVar5 + 8) == 0) {
      uVar3 = *(uint *)(PTR_DAT_047cc648 + (ulong)*(uint *)(lVar5 + 0x28) * 4);
    }
    else {
      uVar3 = FUN_0038cbd0(param_2[2],param_2[1],*(undefined4 *)PTR_DAT_047cc650);
    }
  }
  else {
    uVar9 = *(uint *)(PTR_DAT_047cc648 + uVar10 * 4) >> 0x1e |
            *(uint *)(PTR_DAT_047cc648 + uVar10 * 4) << 2;
LAB_00376604:
    uVar3 = *(uint *)(lVar5 + 0x60);
  }
  uVar4 = FUN_00376e50(param_1,param_2,uVar3 ^ uVar9);
LAB_00376684:
  puVar7 = (undefined8 *)*param_2;
  if ((puVar7 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar7, plVar8 != (long *)0x0)) {
    do {
      lVar5 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      (*(code *)puVar7[3])(puVar7[4]);
    }
  }
  return uVar4;
}


