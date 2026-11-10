/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03043934; name: FUN_03043934
 */


long * FUN_03043934(long *param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  void *__dest;
  uint uVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  if (param_2 != param_1) {
    uVar1 = *(uint *)(param_2 + 1);
    lVar14 = *param_2;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < (int)uVar1) {
      FUN_03043bc8(param_1,PTR_PTR_047d1a50,(long)(int)uVar1);
    }
    uVar6 = *(uint *)(param_1 + 1);
    if ((int)uVar1 < (int)uVar6) {
      lVar9 = *param_1;
      lVar15 = lVar9 + (long)(int)uVar6 * 0x10;
      do {
        plVar4 = *(long **)(lVar15 + -8);
        lVar15 = lVar15 + -0x10;
        if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
          plVar5 = plVar4 + 2;
          do {
            lVar10 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 + -1 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
      } while (lVar15 != lVar9 + (long)(int)uVar1 * 0x10);
      uVar6 = *(uint *)(param_1 + 1);
    }
    lVar15 = *param_1;
    if ((int)uVar1 <= (int)uVar6) {
      uVar6 = uVar1;
    }
    if ((lVar15 != lVar14) && (0 < (int)uVar6)) {
      uVar16 = 0;
      do {
        puVar13 = (undefined4 *)(lVar14 + uVar16 * 0x10);
        *(undefined4 *)(lVar15 + uVar16 * 0x10) = *puVar13;
        plVar7 = (long *)(lVar15 + uVar16 * 0x10 + 8);
        plVar5 = (long *)*plVar7;
        plVar11 = (long *)(puVar13 + 2);
        plVar4 = (long *)*plVar11;
        if (plVar5 != plVar4) {
          if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
            plVar4 = plVar4 + 2;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar3) {
                *plVar4 = *plVar4 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            plVar5 = (long *)*plVar7;
            plVar4 = (long *)*plVar11;
          }
          *plVar7 = (long)plVar4;
          if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
            plVar4 = plVar5 + 2;
            do {
              lVar9 = *plVar4;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar3) {
                *plVar4 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar9 + -1 == 0) {
              (**(code **)(*plVar5 + 0x18))();
            }
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar6);
      lVar15 = *param_1;
    }
    if (0 < (int)(uVar1 - uVar6)) {
      puVar12 = (undefined4 *)(lVar14 + (long)(int)uVar6 * 0x10);
      puVar13 = (undefined4 *)(lVar15 + (long)(int)uVar6 * 0x10);
      iVar8 = 0;
      do {
        *puVar13 = *puVar12;
        lVar14 = *(long *)(puVar12 + 2);
        *(long *)(puVar13 + 2) = lVar14;
        puVar13 = puVar13 + 4;
        puVar12 = puVar12 + 4;
        if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
          plVar4 = (long *)(lVar14 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != uVar1 - uVar6);
    }
    lVar14 = param_1[2];
    *(uint *)(param_1 + 1) = uVar1;
    if ((lVar14 != 0) && (*(int *)(lVar14 + 4) != -2)) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar14,0);
      param_1[2] = (long)&DAT_03d7702c;
      *(undefined4 *)(param_1 + 3) = 0;
    }
    if (*(int *)(param_2[2] + 4) == -2) {
      param_1[2] = (long)&DAT_03d7702c;
      *(undefined4 *)(param_1 + 3) = 0;
    }
    else {
      *(int *)(param_1 + 3) = (int)param_2[3];
      __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(long)(int)param_2[3] * 8 + 8);
      param_1[2] = (long)__dest;
      memcpy(__dest,(void *)param_2[2],(long)(int)param_2[3] * 8 + 8);
    }
  }
  return param_1;
}


