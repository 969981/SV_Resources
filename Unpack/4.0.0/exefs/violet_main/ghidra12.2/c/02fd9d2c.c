/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fd9d2c; name: FUN_02fd9d2c
 */


void FUN_02fd9d2c(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  *param_1 = (long)&PTR_LAB_046125d8;
  param_1[4] = (long)&PTR_LAB_04612618;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar2 = PTR_PTR_047d1a50;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xb],(ulong)*(uint *)((long)param_1 + 100) << 3);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x20))
              (puVar2,param_1[9],(ulong)*(uint *)((long)param_1 + 0x54) << 4);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  if ((int)param_1[8] != 0) {
    plVar10 = (long *)param_1[7];
    plVar11 = plVar10 + (long)(int)param_1[8] * 0x42;
    do {
      plVar12 = plVar11 + -0x42;
      if (plVar11[-0x22] != 0) {
        uVar4 = *(uint *)(plVar11 + -0x1f);
        if (*(char *)((long)plVar11 + -0x104) != '\0') {
          plVar5 = (long *)plVar11[-0x20];
          if ((int)uVar4 < 1) {
            plVar7 = plVar5;
          }
          else {
            uVar1 = uVar4 & 3;
            plVar7 = plVar5;
            if (2 < uVar4 - 1) {
              iVar9 = -(uVar4 & 0xfffffffc);
              do {
                plVar6 = plVar5;
                if (*plVar7 != 0) {
                  plVar6 = plVar5 + 1;
                  *plVar5 = *plVar7;
                }
                plVar5 = plVar6;
                if (plVar7[1] != 0) {
                  plVar5 = plVar6 + 1;
                  *plVar6 = plVar7[1];
                }
                plVar6 = plVar5;
                if (plVar7[2] != 0) {
                  plVar6 = plVar5 + 1;
                  *plVar5 = plVar7[2];
                }
                plVar5 = plVar6;
                if (plVar7[3] != 0) {
                  plVar5 = plVar6 + 1;
                  *plVar6 = plVar7[3];
                }
                plVar7 = plVar7 + 4;
                iVar9 = iVar9 + 4;
              } while (iVar9 != 0);
            }
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              plVar6 = plVar5;
              if (*plVar7 != 0) {
                plVar6 = plVar5 + 1;
                *plVar5 = *plVar7;
              }
              plVar5 = plVar6;
              plVar7 = plVar7 + 1;
            }
            plVar7 = (long *)plVar11[-0x20];
          }
          uVar4 = (uint)((ulong)((long)plVar5 - (long)plVar7) >> 3);
          *(char *)((long)plVar11 + -0x104) = '\0';
        }
        if (uVar4 != 0) {
          plVar5 = (long *)plVar11[-0x22];
          (**(code **)(*plVar5 + 0x28))(plVar5,plVar11[-0x20]);
        }
        *(undefined4 *)(plVar11 + -0x1f) = 0;
        *(undefined4 *)(plVar11 + -0x21) = 0;
      }
      *(undefined4 *)(plVar11 + -0x1f) = 0;
      if ((-1 < (int)*(uint *)((long)plVar11 + -0xf4)) && (plVar11[-0x20] != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,plVar11[-0x20],(ulong)*(uint *)((long)plVar11 + -0xf4) << 3);
      }
      plVar11[-0x20] = 0;
      *(undefined4 *)((long)plVar11 + -0xf4) = 0x80000000;
      if (*plVar12 != 0) {
        uVar4 = *(uint *)(plVar11 + -0x3f);
        plVar5 = plVar11 + -0x40;
        if (*(char *)((long)plVar11 + -0x204) != '\0') {
          plVar7 = (long *)*plVar5;
          if ((int)uVar4 < 1) {
            plVar6 = plVar7;
          }
          else {
            uVar1 = uVar4 & 3;
            plVar6 = plVar7;
            if (2 < uVar4 - 1) {
              iVar9 = -(uVar4 & 0xfffffffc);
              do {
                plVar8 = plVar7;
                if (*plVar6 != 0) {
                  plVar8 = plVar7 + 1;
                  *plVar7 = *plVar6;
                }
                plVar7 = plVar8;
                if (plVar6[1] != 0) {
                  plVar7 = plVar8 + 1;
                  *plVar8 = plVar6[1];
                }
                plVar8 = plVar7;
                if (plVar6[2] != 0) {
                  plVar8 = plVar7 + 1;
                  *plVar7 = plVar6[2];
                }
                plVar7 = plVar8;
                if (plVar6[3] != 0) {
                  plVar7 = plVar8 + 1;
                  *plVar8 = plVar6[3];
                }
                plVar6 = plVar6 + 4;
                iVar9 = iVar9 + 4;
              } while (iVar9 != 0);
            }
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              plVar8 = plVar7;
              if (*plVar6 != 0) {
                plVar8 = plVar7 + 1;
                *plVar7 = *plVar6;
              }
              plVar7 = plVar8;
              plVar6 = plVar6 + 1;
            }
            plVar6 = (long *)*plVar5;
          }
          uVar4 = (uint)((ulong)((long)plVar7 - (long)plVar6) >> 3);
          *(char *)((long)plVar11 + -0x204) = '\0';
        }
        if (uVar4 != 0) {
          (**(code **)(*(long *)*plVar12 + 0x28))((long *)*plVar12,*plVar5);
        }
        *(uint *)(plVar11 + -0x3f) = 0;
        *(undefined4 *)(plVar11 + -0x41) = 0;
      }
      *(undefined4 *)(plVar11 + -0x3f) = 0;
      uVar4 = *(uint *)((long)plVar11 + -500);
      if ((-1 < (int)uVar4) && (lVar3 = plVar11[-0x40], lVar3 != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,lVar3,(ulong)uVar4 << 3);
      }
      plVar11[-0x40] = 0;
      *(uint *)((long)plVar11 + -500) = 0x80000000;
      plVar11 = plVar12;
    } while (plVar12 != plVar10);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x20))
              (puVar2,param_1[7],(ulong)*(uint *)((long)param_1 + 0x44) * 0x210);
  }
  param_1[7] = 0;
  puVar2 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


