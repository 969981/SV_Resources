/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00376e50; name: FUN_00376e50
 */


ulong FUN_00376e50(long *param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  uVar5 = (ulong)(param_3 & 0xf);
  puVar1 = &DAT_047f1148 + uVar5 * 0x40;
  FUN_0038db40(puVar1);
  uVar7 = (&DAT_047f1178)[uVar5 * 8];
  uVar4 = 0;
  if (uVar7 != 0) {
    uVar4 = (param_3 >> 4) / uVar7;
  }
  lVar10 = (&DAT_047f1168)[uVar5 * 8];
  lVar9 = (ulong)(param_3 >> 4) - uVar4 * uVar7;
  plVar8 = *(long **)(lVar10 + lVar9 * 8);
  if (plVar8 != (long *)0x0) {
    do {
      if ((*param_1 == *plVar8) && (*param_2 == plVar8[4])) {
        plVar6 = plVar8 + 8;
        do {
          lVar9 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          plVar6 = &DAT_047f1180 + uVar5 * 8;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        goto LAB_00376f98;
      }
      plVar8 = (long *)plVar8[0x10];
    } while (plVar8 != (long *)0x0);
  }
  plVar8 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x88);
  if (plVar8 != (long *)0x0) {
    lVar10 = *(long *)(lVar10 + lVar9 * 8);
    if (((undefined8 *)*param_2 != (undefined8 *)0x0) &&
       (plVar6 = *(long **)*param_2, plVar6 != (long *)0x0)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar11 = *param_1;
    lVar13 = param_1[3];
    lVar12 = param_1[2];
    plVar8[1] = param_1[1];
    *plVar8 = lVar11;
    plVar8[3] = lVar13;
    plVar8[2] = lVar12;
    lVar12 = param_2[1];
    lVar11 = *param_2;
    lVar14 = param_2[3];
    lVar13 = param_2[2];
    plVar8[8] = 1;
    *(uint *)(plVar8 + 9) = param_3;
    plVar8[5] = lVar12;
    plVar8[4] = lVar11;
    plVar8[7] = lVar14;
    plVar8[6] = lVar13;
    FUN_0038db00(plVar8 + 10);
    plVar8[0xe] = 0;
    plVar8[0xf] = 0;
    plVar8[0x10] = lVar10;
  }
  *(long **)((&DAT_047f1168)[uVar5 * 8] + lVar9 * 8) = plVar8;
  lVar9 = (&DAT_047f1170)[uVar5 * 8];
  (&DAT_047f1170)[uVar5 * 8] = lVar9 + 1U;
  if ((ulong)((&DAT_047f1178)[uVar5 * 8] * 2) < lVar9 + 1U) {
    FUN_00376fc0(puVar1);
  }
LAB_00376f98:
  FUN_0038db60(puVar1);
  return (ulong)plVar8 | 3;
}


