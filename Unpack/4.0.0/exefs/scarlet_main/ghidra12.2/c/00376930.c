/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00376930; name: FUN_00376930
 */


ulong FUN_00376930(long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar8 = *param_1;
  iVar2 = *(int *)(lVar8 + 8);
  if (*(int *)(*param_2 + 8) == 0 && iVar2 == 0) {
    uVar7 = FUN_00377f30(*(undefined4 *)(lVar8 + 0x28),*(undefined4 *)(*param_2 + 0x28));
    if (3 < uVar7) {
      return uVar7;
    }
    lVar8 = *param_1;
    iVar2 = *(int *)(lVar8 + 8);
  }
  if (iVar2 == 1) {
    uVar5 = *(uint *)(lVar8 + 0x60);
  }
  else if (iVar2 == 0) {
    uVar5 = *(uint *)(PTR_DAT_047cc648 + (ulong)*(uint *)(lVar8 + 0x28) * 4);
  }
  else {
    uVar5 = FUN_0038cbd0(param_1[2],param_1[1],*(undefined4 *)PTR_DAT_047cc650);
  }
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 8) == 1) {
    uVar6 = *(uint *)(lVar8 + 0x60);
  }
  else if (*(int *)(lVar8 + 8) == 0) {
    uVar6 = *(uint *)(PTR_DAT_047cc648 + (ulong)*(uint *)(lVar8 + 0x28) * 4);
  }
  else {
    uVar6 = FUN_0038cbd0(param_2[2],param_2[1],*(undefined4 *)PTR_DAT_047cc650);
  }
  uVar6 = uVar6 ^ (uVar5 >> 0x1e | uVar5 << 2);
  uVar9 = (ulong)(uVar6 & 0xf);
  puVar1 = &DAT_047f1148 + uVar9 * 0x40;
  FUN_0038db40(puVar1);
  uVar11 = (&DAT_047f1178)[uVar9 * 8];
  uVar7 = 0;
  if (uVar11 != 0) {
    uVar7 = (uVar6 >> 4) / uVar11;
  }
  lVar13 = (&DAT_047f1168)[uVar9 * 8];
  lVar8 = (ulong)(uVar6 >> 4) - uVar7 * uVar11;
  plVar12 = *(long **)(lVar13 + lVar8 * 8);
  if (plVar12 != (long *)0x0) {
    do {
      if ((*param_1 == *plVar12) && (*param_2 == plVar12[4])) {
        plVar10 = plVar12 + 8;
        do {
          lVar8 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          plVar10 = &DAT_047f1180 + uVar9 * 8;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = *plVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        goto LAB_00376b58;
      }
      plVar12 = (long *)plVar12[0x10];
    } while (plVar12 != (long *)0x0);
  }
  plVar12 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x88);
  if (plVar12 != (long *)0x0) {
    lVar13 = *(long *)(lVar13 + lVar8 * 8);
    if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
       (plVar10 = *(long **)*param_1, plVar10 != (long *)0x0)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (((undefined8 *)*param_2 != (undefined8 *)0x0) &&
       (plVar10 = *(long **)*param_2, plVar10 != (long *)0x0)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar14 = *param_1;
    lVar16 = param_1[3];
    lVar15 = param_1[2];
    plVar12[1] = param_1[1];
    *plVar12 = lVar14;
    plVar12[3] = lVar16;
    plVar12[2] = lVar15;
    lVar15 = param_2[1];
    lVar14 = *param_2;
    lVar17 = param_2[3];
    lVar16 = param_2[2];
    plVar12[8] = 1;
    *(uint *)(plVar12 + 9) = uVar6;
    plVar12[5] = lVar15;
    plVar12[4] = lVar14;
    plVar12[7] = lVar17;
    plVar12[6] = lVar16;
    FUN_0038db00(plVar12 + 10);
    plVar12[0xe] = 0;
    plVar12[0xf] = 0;
    plVar12[0x10] = lVar13;
  }
  *(long **)((&DAT_047f1168)[uVar9 * 8] + lVar8 * 8) = plVar12;
  lVar8 = (&DAT_047f1170)[uVar9 * 8];
  (&DAT_047f1170)[uVar9 * 8] = lVar8 + 1U;
  if ((ulong)((&DAT_047f1178)[uVar9 * 8] * 2) < lVar8 + 1U) {
    FUN_00376fc0(puVar1);
  }
LAB_00376b58:
  FUN_0038db60(puVar1);
  return (ulong)plVar12 | 3;
}


