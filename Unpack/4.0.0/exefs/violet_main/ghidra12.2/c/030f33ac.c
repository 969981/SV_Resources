/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f33ac; name: FUN_030f33ac
 */


void FUN_030f33ac(long *param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  long *plVar16;
  int *piVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined4 *puVar20;
  
  lVar9 = (long)(int)param_1[1] + -1;
  uVar2 = param_2[1];
  lVar13 = (long)(int)uVar2;
  if (uVar2 != (uint)lVar9) {
    lVar9 = FUN_030f3338(param_1,*param_1 + lVar9 * 0x28);
    *(uint *)(lVar9 + 4) = uVar2;
  }
  lVar14 = *param_1;
  plVar16 = (long *)(lVar14 + lVar13 * 0x28 + 0x18);
  lVar9 = *plVar16;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar9,0);
    *plVar16 = (long)&DAT_03d7702c;
    *(undefined4 *)(lVar14 + lVar13 * 0x28 + 0x20) = 0;
  }
  lVar9 = lVar14 + lVar13 * 0x28;
  plVar16 = (long *)(lVar9 + 8);
  lVar19 = *plVar16;
  piVar17 = (int *)(lVar9 + 0x10);
  iVar3 = *piVar17;
  if (iVar3 != 0) {
    lVar9 = lVar19 + (long)iVar3 * 0x10;
    do {
      plVar7 = *(long **)(lVar9 + -8);
      lVar9 = lVar9 + -0x10;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar1 = plVar7 + 2;
        do {
          lVar10 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
    } while (lVar9 != lVar19);
  }
  *piVar17 = 0;
  puVar15 = (uint *)(lVar14 + lVar13 * 0x28 + 0x14);
  uVar8 = *puVar15;
  if ((-1 < (int)uVar8) && (*plVar16 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,*plVar16,(ulong)uVar8 << 4);
  }
  *plVar16 = 0;
  *puVar15 = 0x80000000;
  lVar9 = (long)(int)param_1[1] + -1;
  uVar8 = (uint)lVar9;
  *(uint *)(param_1 + 1) = uVar8;
  if (uVar8 != uVar2) {
    puVar18 = (undefined4 *)(*param_1 + lVar9 * 0x28);
    puVar20 = (undefined4 *)(*param_1 + lVar13 * 0x28);
    *puVar20 = *puVar18;
    *(undefined8 *)(puVar20 + 2) = 0;
    *(undefined8 *)(puVar20 + 4) = 0x8000000000000000;
    puVar6 = PTR_PTR_047d1a50;
    plVar16 = (long *)(puVar18 + 2);
    FUN_030daf4c(plVar16,PTR_PTR_047d1a50);
    *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar18 + 2);
    piVar17 = puVar18 + 4;
    puVar20[4] = *piVar17;
    puVar15 = puVar18 + 5;
    puVar20[5] = *puVar15;
    piVar17[0] = 0;
    piVar17[1] = 0;
    *(undefined8 *)(puVar18 + 2) = 0;
    *(undefined8 *)(puVar20 + 6) = *(undefined8 *)(puVar18 + 6);
    puVar20[8] = puVar18[8];
    *(undefined **)(puVar18 + 6) = &DAT_03d7702c;
    puVar18[8] = 0;
    if (*piVar17 != 0) {
      lVar13 = *(long *)(puVar18 + 2);
      lVar9 = lVar13 + (long)*piVar17 * 0x10;
      do {
        plVar7 = *(long **)(lVar9 + -8);
        lVar9 = lVar9 + -0x10;
        if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
          plVar1 = plVar7 + 2;
          do {
            lVar14 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))();
          }
        }
      } while (lVar9 != lVar13);
    }
    *piVar17 = 0;
    if ((-1 < (int)*puVar15) && (*plVar16 != 0)) {
      (**(code **)(*(long *)puVar6 + 0x20))(puVar6,*plVar16,(ulong)*puVar15 << 4);
    }
    *plVar16 = 0;
    *puVar15 = 0x80000000;
  }
  lVar9 = param_1[2];
  uVar11 = (ulong)(int)param_1[3];
  uVar12 = ((long)param_2 - lVar9 >> 3) + 1U & uVar11;
  while (puVar15 = (uint *)(lVar9 + uVar12 * 8), -1 < (int)puVar15[1]) {
    lVar13 = lVar9 + ((ulong)*puVar15 & uVar11 & 0xffffffff) * 8;
    uVar12 = (ulong)(int)uVar11;
    if ((uVar12 & (long)param_2 - lVar13 >> 3) < (uVar12 & (long)puVar15 - lVar13 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar15;
      uVar11 = (ulong)*(uint *)(param_1 + 3);
      lVar9 = param_1[2];
      uVar12 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar15;
    }
    uVar12 = ((ulong)((long)puVar15 - lVar9) >> 3) + 1 & uVar12;
  }
  param_2[1] = 0xffffffff;
  return;
}


