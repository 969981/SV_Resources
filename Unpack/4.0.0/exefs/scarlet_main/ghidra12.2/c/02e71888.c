/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e71888; name: FUN_02e71888
 */


void FUN_02e71888(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  
  *param_1 = &PTR_FUN_0460ce48;
  puVar5 = PTR_DAT_047d1a08;
  if (*(int *)(param_1 + 3) != 0) {
    plVar14 = (long *)param_1[2];
    lVar15 = (long)*(int *)(param_1 + 3) << 3;
    do {
      lVar13 = *plVar14;
      if (lVar13 != 0) {
        FUN_02e710f4(lVar13);
        (**(code **)(puVar5 + 8))(0,lVar13,0);
      }
      plVar14 = plVar14 + 1;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
  }
  puVar6 = PTR_PTR_047d1a50;
  puVar4 = PTR_DAT_047d1a00;
  plVar14 = (long *)param_1[1];
  if (plVar14 != (long *)0x0) {
    plVar14[0x15c] = (long)(PTR_DAT_047d1a00 + 0x10);
    if ((int)plVar14[0x1b] != 0) {
      lVar13 = plVar14[0x1a];
      lVar15 = (long)(int)plVar14[0x1b] * 0x50;
      do {
        (**(code **)(*(long *)(lVar13 + -0x50 + lVar15) + 8))();
        lVar15 = lVar15 + -0x50;
      } while (lVar15 != 0);
    }
    *(undefined4 *)(plVar14 + 0x1b) = 0;
    if ((-1 < (int)*(uint *)((long)plVar14 + 0xdc)) && (plVar14[0x1a] != 0)) {
      (**(code **)(*(long *)puVar6 + 0x20))
                (puVar6,plVar14[0x1a],(ulong)*(uint *)((long)plVar14 + 0xdc) * 0x50);
    }
    plVar14[0x1a] = 0;
    *(undefined4 *)((long)plVar14 + 0xdc) = 0x80000000;
    *(undefined4 *)(plVar14 + 0x11) = 0;
    if ((-1 < (int)*(uint *)((long)plVar14 + 0x8c)) && (plVar14[0x10] != 0)) {
      (**(code **)(*(long *)puVar6 + 0x20))
                (puVar6,plVar14[0x10],(ulong)*(uint *)((long)plVar14 + 0x8c) << 1);
    }
    plVar14[0x10] = 0;
    *(undefined4 *)((long)plVar14 + 0x8c) = 0x80000000;
    plVar14[8] = (long)(puVar4 + 0x10);
    if ((int)plVar14[6] != 0) {
      plVar16 = (long *)plVar14[5];
      plVar7 = plVar16 + (long)(int)plVar14[6] * 0x22;
      do {
        plVar17 = plVar7 + -0x22;
        if (*plVar17 != 0) {
          uVar8 = *(uint *)(plVar7 + -0x1f);
          if (*(char *)((long)plVar7 + -0x104) != '\0') {
            plVar9 = (long *)plVar7[-0x20];
            if ((int)uVar8 < 1) {
              plVar11 = plVar9;
            }
            else {
              uVar1 = uVar8 & 3;
              plVar11 = plVar9;
              if (2 < uVar8 - 1) {
                iVar12 = -(uVar8 & 0xfffffffc);
                do {
                  plVar10 = plVar9;
                  if (*plVar11 != 0) {
                    plVar10 = plVar9 + 1;
                    *plVar9 = *plVar11;
                  }
                  plVar9 = plVar10;
                  if (plVar11[1] != 0) {
                    plVar9 = plVar10 + 1;
                    *plVar10 = plVar11[1];
                  }
                  plVar10 = plVar9;
                  if (plVar11[2] != 0) {
                    plVar10 = plVar9 + 1;
                    *plVar9 = plVar11[2];
                  }
                  plVar9 = plVar10;
                  if (plVar11[3] != 0) {
                    plVar9 = plVar10 + 1;
                    *plVar10 = plVar11[3];
                  }
                  plVar11 = plVar11 + 4;
                  iVar12 = iVar12 + 4;
                } while (iVar12 != 0);
              }
              for (; uVar1 != 0; uVar1 = uVar1 - 1) {
                plVar10 = plVar9;
                if (*plVar11 != 0) {
                  plVar10 = plVar9 + 1;
                  *plVar9 = *plVar11;
                }
                plVar9 = plVar10;
                plVar11 = plVar11 + 1;
              }
              plVar11 = (long *)plVar7[-0x20];
            }
            uVar8 = (uint)((ulong)((long)plVar9 - (long)plVar11) >> 3);
            *(char *)((long)plVar7 + -0x104) = '\0';
          }
          if (uVar8 != 0) {
            (**(code **)(*(long *)*plVar17 + 0x28))((long *)*plVar17,plVar7[-0x20]);
          }
          *(undefined4 *)(plVar7 + -0x1f) = 0;
          *(undefined4 *)(plVar7 + -0x21) = 0;
        }
        *(undefined4 *)(plVar7 + -0x1f) = 0;
        if ((-1 < (int)*(uint *)((long)plVar7 + -0xf4)) && (plVar7[-0x20] != 0)) {
          (**(code **)(*(long *)puVar6 + 0x20))
                    (puVar6,plVar7[-0x20],(ulong)*(uint *)((long)plVar7 + -0xf4) << 3);
        }
        plVar7[-0x20] = 0;
        *(undefined4 *)((long)plVar7 + -0xf4) = 0x80000000;
        plVar7 = plVar17;
      } while (plVar17 != plVar16);
    }
    *(undefined4 *)(plVar14 + 6) = 0;
    if ((-1 < (int)*(uint *)((long)plVar14 + 0x34)) && (plVar14[5] != 0)) {
      (**(code **)(*(long *)puVar6 + 0x20))
                (puVar6,plVar14[5],(ulong)*(uint *)((long)plVar14 + 0x34) * 0x110);
    }
    plVar7 = (long *)*plVar14;
    plVar14[5] = 0;
    *(undefined4 *)((long)plVar14 + 0x34) = 0x80000000;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar16 = plVar7 + 2;
      do {
        lVar15 = *plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
    (**(code **)(puVar5 + 8))(0,plVar14,0);
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x14c)) && (param_1[0x28] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))(puVar6);
  }
  param_1[0x28] = 0;
  *(undefined4 *)((long)param_1 + 0x14c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x13c)) && (param_1[0x26] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x26],(ulong)*(uint *)((long)param_1 + 0x13c) << 2);
  }
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 300)) && (param_1[0x24] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0x24],(ulong)*(uint *)((long)param_1 + 300) * 0x18);
  }
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x80000000;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[2],(ulong)*(uint *)((long)param_1 + 0x1c) << 3);
  }
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
  return;
}


